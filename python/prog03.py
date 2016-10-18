# -*- coding:utf-8 -*-
number=input("please enter number :")
for i in range(0,number,1) :
    if i%2==0 :
        for j in range(1,number+1,1) :
            print "\t",number*i+j,
    else :
        for j in range(number,0,-1) :
            print "\t",number*i+j,    
    print ""
