# coordinate values of two points as tuples
# calculate the Euclidean distance
# calculate the Manhattan distance

def eucl(p1,p2):
    return pow(pow(p2[0]-p1[0],2)+pow(p2[1]-p1[1],2),0.5)

def manhat(p1,p2):
    return abs(p2[0]-p1[0])+abs(p2[1]-p1[1])

p1=tuple(map(int,input('Enter the 1st coordinate : ').split()))
p2=tuple(map(int,input('Enter the 2nd coordinate : ').split()))
print('The Euclidean distance :',eucl(p1,p2))
print('The Manhattan distance :',manhat(p1,p2))
