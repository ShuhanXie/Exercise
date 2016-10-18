# -*- coding:utf-8 -*-
number=input("please enter number :")
max=2*number-1
for i in range(0,number,1) :
    x=number-1-i
    for j in range(0,max,1) :
        if j<x or j>=max-x :
            print " ",
        else :
            print "*",
    print ""
