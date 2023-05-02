cnt,n=map(int,input().split())

a=[]
count=0

for i in range(cnt):
    a.append(input())

for i in range(n):
    if(input() in a):
        count+=1

print(count)