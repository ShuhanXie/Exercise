# -*- coding:utf-8 -*-

def divn(num):
    sumz=0
    while num>0:
        num/=10
        sumz+=1
    return sumz
def fofn(num):
    if num>0:
        while num>9:
            n=divn(num)
            sumz=0
            i=0
            while num/10**(n-1-i)>0 :
                sumz+=num/10**(n-1-i)
                num=num%10**(n-1-i)
                i+=1
            num=sumz
        print num
    else: 
        num=0
num=input("please enter number :")
fofn(num)