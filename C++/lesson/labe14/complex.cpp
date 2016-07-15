#include <iostream>
#include "complex.h"

using namespace std;

complex::complex() {
    real=0;
    img=0;
}
complex::complex(double r, double i) {
    real=r;
    img=i;
}
complex::complex(const complex &c){
    real=c.real;
    img=c.img;
}
void complex::setI(double i){
    img=i;
}  

void complex::setR(double r){
    real=r;
}
void complex::show() {
    if (real==0)
        if (img==0)
            cout<<0;
        else
            cout<<img<<"j";
    else {
        cout<<real;
        if (img>0)
            cout<<" + "<<img<<"j";
        else if (img<0)
            cout<<" - "<<-img<<"j";
    }       
}        
complex complex::add(const complex &c){
    return complex(real+c.real,img+c.img);
}

complex complex::sub(const complex &c){
    return complex(real-c.real,img-c.img);
}

complex complex::mul(const complex &c){
    return complex(real*c.real-img*c.img,real*c.img+img*c.real); 
}

complex complex::div(const complex &c){
    return complex((real*c.real+img*c.img)/(c.real*c.real+c.img*c.img),(img*c.real-real*c.img)/(c.real*c.real+c.img*c.img));  
}
complex complex::add(double x){
    return complex(real+x,img);
}

complex complex::sub(double x){
    return complex(real-x,img);
}

complex complex::mul(double x){
    return complex(real*x,img*x); 
}

complex complex::div(double x){
    return complex(real/x,img/x);  
}

// implement all required function members below!!!
