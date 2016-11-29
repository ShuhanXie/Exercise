# -*- coding:utf-8 -*-
def solvez(num):
    b=0
    m=0 
    while abs(num)<2 : 
        num=input("| number |<=1 ,please enter number again：")
    if num>0:
        for i in range(num,1,-1):
            tmp=num
            m1=0
            if tmp%i==0 :
                while tmp/i>0 :
                    m1+=1
                    tmp/=i 
                if i**m1==num :
                    b=i
                    m=m1
    else:
        for i in range(num,-1,1):
            tmp=num
            m1=0
            if tmp%i==0 :
                while abs(tmp/i)>0 and (tmp/i)!=-1 :
                    m1+=1
                    tmp/=i
                if i**m1==num :
                    b=i
                    m=m1   
    print "a=",num," b=",b," m=",m
a=[0]
n=input("please enter number[quantity]:")
for i in range(1,n):
    a.append(0)
for i in range(0,n):
    num=input('please enter number[value]:')
    a[i]=num
for i in range(0,n):
    solvez(a[i])
