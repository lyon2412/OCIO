#########################################
## Balon moviendose por teclado 
#########################################
import pygame
import math   # Importamos libreria math
pygame.init()
size = (1335,1024)
screen = pygame.display.set_mode(size)
pygame.display.set_caption("Balon moviendose por teclado | ACECOM")

t = 0.0
aux = 0
k=9.81

x_coord = 50
y_coord = 25

vx=0
vy=0

ball = pygame.image.load("imagenes/a.bmp")

fondo = pygame.image.load("imagenes/fondo.jpg")

clock = pygame.time.Clock()

x=500  # Variable auxiliar
BLACK = (0 , 0 , 0)
WHITE = (255 , 255 , 255)
BLUE  = (0, 0, 255)
GREEN = (0, 255, 0)
RED   = (255, 0, 0) 

PI = math.pi # Valor de pi obtenido por libreria math

done=False # Variable Bandera para salir del loop principal del programa


while not done:
	
	#pygame.draw.rect(screen,BLUE, [520,576,64,64],3)
	#pygame.draw.line(screen,GREEN,[0,640],[960,640],3) # Dibujo de una linea
	
	
	
	pygame.display.update()
	for event in pygame.event.get():
		if event.type == pygame.QUIT:
			done = True
		elif event.type == pygame.KEYDOWN: # Si el usuario presiona una tecla
			if event.key == pygame.K_RIGHT:
				vx=6
				
			elif event.key == pygame.K_LEFT:
				vx=-6
				
				
				
				
			elif event.key == pygame.K_UP  and  y_coord == 625 :
				t=0.0
				vy=-10
				
			elif event.key == pygame.K_DOWN:
				vy=6
					
				
				
				
			#elif event.key == pygame.K_UP:
			#	vy=-3
			#	vx=0
			#elif event.key == pygame.K_DOWN:
			#	vy=3
			#	vx=0
			elif event.key == pygame.K_ESCAPE:
				done = True
		elif event.type == pygame.KEYUP:  # Si el usuario deja de presionar un tecla
			if event.key == pygame.K_RIGHT or event.key == pygame.K_LEFT:
				vx=0
			elif event.key == pygame.K_UP or event.key == pygame.K_DOWN:
				vy=0
	          
	t +=0.06       
	x_coord+=vx
	y_coord+=vy
	if y_coord < 625:
		y_coord+=vy*t + 0.5*k*t*t 
	else:
		y_coord = 625
	
	
	
	screen.fill(WHITE)
	#screen.blit(fondo, (0, 0)) #ESTA ES LA QUE CARGA IMAGENES AL ESENARIO, CON ESTO LE METES CUALQUIER COSA
	screen.blit(ball,[x_coord,y_coord])
	clock.tick(60)
	pygame.display.update()
	
	
	
	if x_coord != aux: 
		if x_coord >= aux:
			if x_coord% 50 < 25 :
				ball = pygame.image.load("imagenes/a.bmp")		 
			else:
				ball = pygame.image.load("imagenes/b.bmp")
		else :
		
			if x_coord% 50 < 25 :
				ball = pygame.image.load("imagenes/a-back.bmp")		 
			else:
				ball = pygame.image.load("imagenes/b-back.bmp")
	
	
	aux=x_coord
pygame.quit()
