#include <iostream>
#include "complex.h"

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
