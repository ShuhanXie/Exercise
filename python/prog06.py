# -*- coding:utf-8 -*-
def rank(n):
    sumx=1
    for i in range(1,n+1,1):
        sumx*=i
    return sumx
def solve(value):
    if value<2:
        print "Impossible"
    else :
        for i in range(value,1,-1):
            for j in range(i-1,0,-1):
                if rank(i)/rank(j)==value:
                    n=i
                    m=j
        print n," ",m
            
value=[]
num=input('please enter number[quantity]:')
for i in range(0,num,1):
    tmp=input('please enter number[value]:')
    value.append(tmp)
for i in range(1,num+1,1):
    print "case ",i,":",
    solve(value[i-1])
    print ""
