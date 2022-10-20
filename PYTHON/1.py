# divide two integers
# handle zero division and if input is a string

try:
    a, b = map(str,input('Enter two numbers : ').split())
    a = int(a)
    b = int(b)
    ans = a/b
    print("The answer is",ans)
except ZeroDivisionError:
    print("Zero Division Error")
except ValueError:
    print("Wrong Input")