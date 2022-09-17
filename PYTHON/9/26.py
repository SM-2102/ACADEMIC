# exp(x,y)

def exp(x,y):
    return (x**y)


a, b = map(int, input('Enter 2 numbers : ').split())
print('The answer is',exp(a,b))
