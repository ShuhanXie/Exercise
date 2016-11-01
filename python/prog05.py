# -*- coding:utf-8 -*-
while 1:
    num=input("Enter Number:")
    if num>4 :
        for i in range(0,num,1) :
            for j in range(0,num,1) :
                if j==i or j==num-1-i :
                    print "  ",
                else :
                    print "* ",
            print ""
        break
    else :
        print "N<5,please again!"
    