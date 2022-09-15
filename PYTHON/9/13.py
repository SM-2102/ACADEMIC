# calculate simple interest
# rate(senior citizen) - 12%
# rate(others) - 10%

def simp(pr,yr,rate):
    print('The simple interest :',(pr*yr*rate)/100)

pr, time = map(float,input('Enter principal and number of years : ').split())
rate = input('Enter S for senior citizens or O for others : ')
if rate == 'S':
    simp(pr,time,12)
else:
    simp(pr,time,10)