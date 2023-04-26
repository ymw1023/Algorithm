n=int(input())

a=[]

for i in range(n):
    b,c=map(int,input().split())
    a.append((b,c))

a.sort()

for i in a:
    print("%d %d"%(i[0],i[1]))