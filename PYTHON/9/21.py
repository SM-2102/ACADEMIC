# armstrong number or not

def armstrong(n):
    length = len(str(n))
    sum =0
    num = n
    while(num>0):
        d = num%10
        sum= sum + pow(d,length) 
        num=num//10
    if(n==sum):
        return 1
    else:
        return 0

num = int(input('Enter a number : '))
if armstrong(num)==1:
    print('It is an Armstrong number.')
else:
    print('It is not an Armstrong number.')