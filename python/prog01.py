# -*- coding:utf-8 -*-
again=1
while again>0 :
    number=input("please enter number :")
    if number >=2 :
        again=0
        for i in range(0,number,1) :
            print "*",
            for j in range(0,i,1) : 
                print "*",
            print ""
    else :
        print "number<2,please again!"