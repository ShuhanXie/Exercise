# -*- coding:utf-8 -*-
arr=[0]
def square(num):
    st=0
    for i in range(1,num):
        if i**2==num:
            st=1
            return i
    if st==0:
        return 0
def comp(num,i,k,ten1,ten2,ten3):
    nu=num/ten1*ten2*k+num%ten3
    nux=nu+i*ten3
    if square(nux)>0 and nux!=num :
        arr.append(1)
        print "X=",nux
def chg(num):
    sum=0
    for i in range(1,10):
        comp(num, i, 0, 1000, 1000, 1000)
        comp(num, i, 1, 1000, 1000, 100)
        comp(num, i, 1, 100, 100, 10)
        comp(num, i, 1, 10, 10, 1)
    for i in arr:
        sum+=arr[i]
    return sum
num=input("please enter number :")
nz=chg(num)
print "case=",nz