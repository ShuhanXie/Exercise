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
            print "i=",i
            arrz[i]=0
            x+=1
            if num-(i+1)>0 and i+k+1>num  :
                    print "i+k=",i+k
                    z=num-(i+1)
                    print "z=",z
                    g=k-z
                    s=g-1
                    print "s=",s  
            else :
                s=k-1
        print "----------------↓"
        disArray()
        print "x=",x
        for i in range(x):
            arrz.remove(0)
        num-=x
        print "num- =",num        
num=input("please enter num:")
k=input("please enter k:")
mkArray(num)
disArray()
killdie(num,k)
print arrz
