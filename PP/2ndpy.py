def fact(n):
    if (n < 0):
        print("invalid input")
    elif n == 0 or n == 1:
        print(1)
    else:
        p = 1
        for i in range(1, n+1):
            p = p*i
        print(p)


def fibbo(n):
    if n < 1:
        print("invalid input")
    elif (n == 1):
        print(0)
    elif (n == 2):
        print(1)
    else:
        a = 0
        b = 1
        for i in range(3, n+1):
            c = a+b
            a = b
            b = c
        print(c)


def max(l):
    max = l[0]
    for i in range(len(l)):
        if l[i] > max:
            max = l[i]
    print(max)


def pascal(n):
    for i in range(1, n+1):
        for j in range(0, n-i+1):
            print(' ', end='')
        C = 1
        for j in range(1, i+1):
            print(' ', C, sep='', end='')
            C = C * (i - j) // j
        print()

def calc():
    print("enter operands and operators('+', '-', '*','/','%','^')")
    s=input("enter expressions separated by space {' '} ")
    l=s.split(" ")
    if len(l)>3:
        try:
            print(f"{s} = {eval(s)}")
        except:
            print("invalid expression")
        return
    a=int(l[0])
    c=l[1]
    b=int(l[2])
    if(c=="+"):
        print(f"{a}+{b}=",a+b)
    elif(c=="*"):
        print(f"{a}*{b}=",a*b)
    elif(c=="%"):
        print(f"{a}%{b}=",a%b)
    elif(c=="/"):
        print(f"{a}/{b}=",a/b)
    elif(c=="-"):
        print(f"{a}-{b}=",a-b)
    elif(c=="^"):
        print(f"{a}^{b}=",a**b)
    else:
        print("invalid")
def hcf(a,b):
    if b>a:
        a,b=b,a
    factor = 1
    for i in range(1,b+1):
        if(a%i ==0 and b%i ==0):
            factor=i
    print(factor)

def lcm(a,b):
    if b>a:
        a,b=b,a
    mul = a
    i=a
    while(True):
        if(i%a ==0 and i%b ==0):
            mul=i
            break
        i=i+1
    print(mul)
