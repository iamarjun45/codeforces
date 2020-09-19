t=int(input())
for a in range(t):
    num=int(input())
    total=int(input())
    if num==1:
        if total%2!=0:
            print(1)
        else:
            print(2)
    else:
        if num%2==0:
            print(2)
        else:
            print(1)