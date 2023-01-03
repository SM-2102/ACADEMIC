import pygame as pg
import  time
pg.init()
window=pg.display.set_mode((0,0),pg.FULLSCREEN)
img=pg.image.load("ghost.jpg")
window.blit(img,(120,0))
pg.display.update()
time.sleep(3)
