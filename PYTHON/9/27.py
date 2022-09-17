# volume and surface area of sphere

def vol(r):
    return (sur_area(r)*r)/3

def sur_area(r):
    return (4*22*r*r)/7

r = int(input('Enter the radius : '))
print('Volume :',vol(r))
print('Surface area :',sur_area(r))
