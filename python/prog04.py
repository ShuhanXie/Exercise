# -*- coding:utf-8 -*-
from _ast import Num
num=input("Enter Number:")

def lenn(num):
    i=0
    while num>0 :
        num/=10
        i+=1
    return i

k=lenn(num)

def revsern(num,k):
    sumx=0
    num1=num
    arr=[]
    for i in range(0,k,1) :
        arr.append(0)    
    for i in range(0,k,1) :
        arr[i]=num1/10**(k-1-i)
        num1%=10**(k-1-i)
    for i in range(k-1,0,-1) :
        sumx+=arr[i]*(10**i)
    sumx+=arr[0]
    return sumx
stats=0
sum=0
print "\t",num
while stats<1 :
    k=lenn(num)
    sumx=num+revsern(num,k)
    print "\t",revsern(num,k)
    print "-----------------------------------------"
    print "\t",sumx
    num=sumx
    k=lenn(num)
    num1=revsern(num,k)
    if (num1-num)==0 :
        stats=1
    
