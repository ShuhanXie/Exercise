#include<iostream>
#include <stdlib.h>
#include <iomanip> //setw()函數需載入的Library 
using namespace std;

typedef struct {
	double real;
	double img;
} complex;

void set(complex &c,double r, double i);
void zero(complex &c);
void add(complex &c,complex &c1,complex &c2);
void sub(complex &c,complex &c1,complex &c2);
void mul(complex &c,complex &c1,complex &c2);
void div(complex &c,complex &c1,complex &c2);
void prcomp(complex &c);

int main(){
	complex c,c1,c2;
	zero(c);
	zero(c1);
	set(c,7,4);
	cout<<"c1=";
	prcomp(c);
	set(c1,2,4);
	cout<<"c2=";
	prcomp(c1);
	add(c,c1,c2);
	cout<<"c1+c2=";
	prcomp(c2);
	sub(c,c1,c2);
	cout<<"c1-c2=";
	prcomp(c2);
	
	
	system("pause");
	return 0;
}

void set(complex &c,double r, double i){
	c.real=r;
	c.img=i;
}
void zero(complex &c){
	c.real=0;
	c.img=0;
}
void add(complex &c,complex &c1,complex &c2){
	c2.real=c.real+c1.real;
	c2.img=c.img+c1.img;
}
void sub(complex &c,complex &c1,complex &c2){
	c2.real=c.real-c1.real;
	c2.img=c.img-c1.img;	
}
void mul(complex &c,complex &c1,complex &c2){
	
}
void div(complex &c,complex &c1,complex &c2){
	
}
void prcomp(complex &c){
	if(c.real!=0){
		cout<<c.real;
		if(c.img==0)
			cout<<endl;
	}
	if(c.img>0)
		cout<<"+"<<c.img<<"j"<<endl;
	else if(c.img<0)
		cout<<c.img<<"j"<<endl; 

	if(c.img==0 && c.real==0)
		cout<<"0"<<endl;		
}
