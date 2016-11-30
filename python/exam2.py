# -*- coding:utf-8 -*-
import random

arr=[1]

def arcr(num):
    for i in range(1,num**2):
        arr.append(i+1)

def ardis(num):
    print "arr=[",
    for i in range(num**2): 
        print arr[i]," ",
    print "]"

def twiardis(num):   
    print "Arry=" 
    for i in range(num):
        for j in range(num):
            if arr[i*num+j]<10:
                print "  ",arr[i*num+j],
            else:
                print " ",arr[i*num+j],
        print " "       

def arcksim(num):
    su1=0
    su2=0
    for i in range(num):
        for j in range(num):
            if i==j:
                su1+=arr[i*num+j]
            if i+j+1==num:
                su2+=arr[i*num+j]
    if su1==su2:
        print "YES, value=",su1
    else :
        print "No, value1=",su1," value2=",su2
num=input("please enter number[quantity]:")
arcr(num)
random.shuffle(arr)
ardis(num)
twiardis(num)
arcksim(num)