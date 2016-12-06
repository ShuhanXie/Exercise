# -*- coding:utf-8 -*-
arrz=[1]
def mkArray(num):
    for i in range(1,num):
        arrz.append(i+1)
        
def disArray():
    print "Array=",
    print arrz
    
def killdie(num,k):
    s=k-1
    while num>=k:
        z=0
        x=0
        for i in range(s,num,k):
            arrz[i]=0
            x+=1
            if num-(i+1)>0 and i+k+1>num  :
                    z=num-(i+1)
                    g=k-z
                    s=g-1
            else :
                s=k-1
        disArray()
        for i in range(x):
            arrz.remove(0)
        num-=x
num=input("please enter num:")
k=input("please enter k:")
mkArray(num)
disArray()
killdie(num,k)
print arrz
