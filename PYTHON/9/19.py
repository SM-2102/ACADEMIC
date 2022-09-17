# lambda function to multiply two numbers

a, b = map(int, input('Enter 2 numbers : ').split())
multi = lambda x,y:x*y
print('The answer is :',multi(a,b))