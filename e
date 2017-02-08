Gerson231294/CursoPython


https://github.com/geckolml?tab=repositories


#########################################
## Balon moviendose por teclado 
#########################################
import pygame 
import math   # Importamos libreria math
pygame.init()
size=(500,600)
screen = pygame.display.set_mode(size)
pygame.display.set_caption("Balon moviendose por teclado | ACECOM")

NEGRO = (255,255,255)
VERDE = (0,155,0)

x_coord = 50
y_coord = 40

vx=0
vy=0

ball = pygame.image.load("images/pez.png")

clock = pygame.time.Clock()

x=500  # Variable auxiliar
BLACK = (0 , 0 , 0)
WHITE = (255 , 255 , 255)
BLUE  = (0, 0, 255)
GREEN = (0, 255, 0)
RED   = (255, 0, 0) 

PI = math.pi # Valor de pi obtenido por libreria math

size	= (800,700) # Tamaño total de la pantalla

screen 	= pygame.display.set_mode(size) # Se abre el canvas

pygame.display.set_caption("DIBUJANDO Line | ACECOM") # Definir titulo de la ventana

done=False # Variable Bandera para salir del loop principal del programa


while not done:
	

	pygame.draw.line(screen,GREEN,[50,0],[50,1000],2) # Dibujo de una linea
	pygame.draw.line(screen,RED,[50,500],[1000,1000],2)  # Dibujo de una linea

	pygame.display.update()
	for event in pygame.event.get():
		if event.type == pygame.QUIT:
			done = True
		elif event.type == pygame.KEYDOWN: # Si el usuario presiona una tecla
			if event.key == pygame.K_RIGHT:
				vx=2
				vy=0
			elif event.key == pygame.K_LEFT:
				vx=-2
				vy=0
			elif event.key == pygame.K_UP:
				vy=-2
				vx=0
			elif event.key == pygame.K_DOWN:
				vy=2
				vx=0
			elif event.key == pygame.K_ESCAPE:
				done = True
		elif event.type == pygame.KEYUP:  # Si el usuario deja de presionar un tecla
			if event.key == pygame.K_RIGHT or event.key == pygame.K_LEFT:
				vx=0
			elif event.key == pygame.K_UP or event.key == pygame.K_DOWN:
				vy=0
           
	x_coord+=vx
	y_coord+=vy
	screen.fill(NEGRO)
	screen.blit(ball,[x_coord,y_coord])
	clock.tick(60)
	pygame.display.update()
pygame.quit()
