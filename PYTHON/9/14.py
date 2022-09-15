# permutation

def fact(n):
    if(n==0):
        return 1
    return (n*fact(n-1))
    
def npr(n,r):
    return (fact(n)//fact(n-r))

n, r= map(int,input('Enter n and r : ').split())
print('nPr :',npr(n,r))