#include <iostream>
#include "complex.h"
#include "complex1.h"
//using namespace std;

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
