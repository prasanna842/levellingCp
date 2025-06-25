n=int(input())
for i in range(n):
    num=int(input())
    string=input()
    ones=string.count('1')
    zeros=string.count('0')
    print(((num-1)*ones)+zeros)

