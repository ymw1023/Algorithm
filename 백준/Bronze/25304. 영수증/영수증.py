price=int(input())
n=int(input())
sum=0

for i in range(n):
    cnt,N=map(int,input().split())
    sum=sum+cnt*N

print("%s"%("Yes" if sum==price else "No"))
