# recursive and non recursive to reverse a string

def rev_recur(string):
    if len(string)==0:
        return string
    else:
        return rev_recur(string[1:])+string[0]

def rever(string):
    str=''
    for i in string:
        str=i+str
    return str

string = input('Enter the string : ')
print('Reversal without recursion :',rever(string))
print('Reversal using recursion :',rev_recur(string))
