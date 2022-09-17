# check if palindrome

def palindrome(str):
    if(str == str[::-1]):
        return 1
    else:
        return 0

str = input('Enter the string : ')
if palindrome(str)==1:
    print('It is a palindrome.')
else:
    print('It is not a palindrome.')