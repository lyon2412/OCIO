int c[48]={ 82, 87, 92, 98, 104, 110, 117, 123, 131, 139, 147, 156, 165, 175, 185, 196, 208, 220, 233, 247, 262, 277, 294, 311, 330, 349, 370, 392, 415, 440, 466, 494, 523, 554, 587, 622, 659, 698, 740, 784, 831, 880, 932, 988, 1047, 1109, 1175};
//          E2, F2,F2#, G2, G2#, A2 , A2#,  B2, C3 , C3#,  D3, D3#, E3 , F3 , F3#, G3 , G3#, A3 , A3#, B3 , C4 , D4#, D4 , D4#, E4 , F4 , F4#, G4 , G4#, A4 , A4#, B4 , C5 , C5#, D5 , D5#, E5 , F5 , F5#, G5 , G5#, A5 , A5#, B5 , C6  , C6# , D6     
//           0   1  2    3   4    5    6    7    8    9    10   11  12   13   14   15   16   17   18   19   20   21   22   23   24   25   26   27   28   29   30   31   32   33   34   35   36   37   38   39   40   41   42   43   45     46   47             
#define spk 9
#define Pecho1 13
#define Ptrig1 7
#define Pecho2 12
#define Ptrig2 4
#define Pecho3 8
#define Ptrig3 2

#define fts1 3
#define fts2 5
#define fts3 6 
#define fts4 10
#define fts5 11

float f1, f2, f3, f4, f5;
int k, m;

long distancia1, distancia2, distancia3;   
void inic_ult(int Ptrig);
long dist(int Pecho);
void nota(int c[], int k);

void setup() {                
  Serial.begin (9600);       //inicializa el puerto seria a 9600 baudios
  pinMode(Pecho1, INPUT);   
  pinMode(Ptrig1, OUTPUT);   
  pinMode(Pecho2, INPUT);    
  pinMode(Ptrig2, OUTPUT);  
  pinMode(Pecho3, INPUT);    
  pinMode(Ptrig3, OUTPUT);  

  pinMode(fts1, OUTPUT);    
  pinMode(fts2, OUTPUT);   
  pinMode(fts3, OUTPUT); 
  pinMode(fts4, OUTPUT);   
  pinMode(fts5, OUTPUT);   

  f1 = analogRead(fts1);
  f2 = analogRead(fts2);
  f3 = analogRead(fts3);
  f4 = analogRead(fts4);
  f5 = analogRead(fts5);
  
  }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void loop() {
  
  inic_ult(Ptrig1);
  inic_ult(Ptrig2);
  inic_ult(Ptrig3);
  
  distancia1 = dist(Pecho1);            
  distancia2 = dist(Pecho2);
  distancia3 = dist(Pecho3);

  if(distancia1>k && distancia2>k && distancia3>k){
    noTone(spk);
    delay(50);  
  }
  else if(distancia1<m || distancia2<m || distancia3<m){
    k=0;
    nota(c,k);
  }
  else if(distancia1<m+10 || distancia2<m+10 || distancia3<m+10){
    k=1;
    nota(c,k);
  }
  else if(distancia1<m+20 || distancia2<m+20 || distancia3<m+20){
    k=2;
    nota(c,k);
  }
  else if(distancia1<m+30 || distancia2<m+30 || distancia3<m+30){
    k=3;
    nota(c,k);
  }
  else if(distancia1<m+40 || distancia2<m+40 || distancia3<m+40){
    k=4;
    nota(c,k);
  }
  else if(distancia1<m+50 || distancia2<m+50 || distancia3<m+50){
    k=5;
    nota(c,k);
  }
  else if(distancia1<m+60 || distancia2<m+60 || distancia3<m+60){
    k=5;
    nota(c,k);
  }

}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void inic_ult(int Ptrig){
  digitalWrite(Ptrig, LOW);
  delayMicroseconds(2);
  digitalWrite(Ptrig, HIGH);   
  delayMicroseconds(10);
  digitalWrite(Ptrig, LOW);
}
long dist(int Pecho){
  long tiempo, distancia;
  tiempo = pulseIn(Pecho,HIGH);
  distancia = (tiempo/2)/29;
  return distancia;
}
void nota(int c[], int k){

  if(f1>300){
    tone(spk,c[36+k]);//definira que sonido saldra por la bocina(Mi5).
    delay(50);
  }
  else if(f2>300){
    tone(spk,c[29+k]);//definira que sonido saldra por la bocina(A4).
    delay(50);
  }
  else if(f3>300){
    tone(spk,c[22+k]);//definira que sonido saldra por la bocina(Re4).
    delay(50);
  }
   else if(f4>300){
    tone(spk,c[15+k]);//definira que sonido saldra por la bocina(Sol3).
    delay(50);
  }
   else if(f5>300){
    tone(spk,c[8+k]);//definira que sonido saldra por la bocina(Do3).
    delay(50);
  }
  else{
    noTone(spk);
    delay(50); 
  }
  
}
