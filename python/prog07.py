# -*- coding:utf-8 -*-
arr=[0,0,0,0,0,0,0]
def decide(value):
    for i in range(value-1,1,-1):
        if value/i==0:
            return 0
        else:
            return 1
def decompose(value):
    for i in range(value-1,0,-1):
        if decide(i)==1:
            k=0
            finalv1=value
            while decide(finalv1)==1:
                finalv1-=i-k
                k+=1
                
            
                
                
                