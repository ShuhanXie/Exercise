# -*- coding:utf-8 -*-
arr=[0]

def sumx(num):
    sumz=0
    for i in range(1,num+1):
        sumz+=arr[i]
    return sumz
    
def avg(num):
    print "average=",sumx(num)/num
    
def ardis(num): 
    for i in range(1,num+1) :
        print arr[i]," ",
    print ""

def sort(num):
    for i in range(1,num):
        for j in range(i,num+1):
            if arr[i]>arr[j]:
                tmp=arr[i]
                arr[i]=arr[j]
                arr[j]=tmp
                
arr[0]=input("please enter number[quantity]:")
for i in range(1,arr[0]+1):
    tmp=input('please enter number[value]:')
    arr.append(tmp)

print "sum=",sumx(arr[0])
avg(arr[0])
ardis(arr[0])
sort(arr[0])
ardis(arr[0])