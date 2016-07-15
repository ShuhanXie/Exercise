//arry copy,reverse,compare,add;
#include<iostream>
#include <iomanip> //setw()函數需載入的Library 
using namespace std;

void copy(int a1[],int a2[],int size);
void reverse(int a[],int size);
void compare(int r[],int a1[],int a2[],int size);
void add(int a1[],int a2[],int a3[],int size);
void output(int ax[],int size);
void zero(int a[],int size);

int main(){
	int a1[]={10,9,8,7,2,2,1,9,5,6};
	int a2[]={3,6,8,2,1,6,1,9,10,7};
	int a3[10],a4[10];
	int i,size=10;
	
	zero(a3,size);
	zero(a4,size);
	
	cout<<"a1=";
	output(a1,size);
	cout<<"a2=";
	output(a2,size);
	cout<<"a3=";
	output(a3,size);	
	cout<<"a4=";
	output(a4,size);
	
	
	copy(&a1[0],&a4[0],size);
	cout<<"a1 copy to a4"<<endl;
	cout<<"a4=";
	output(a4,size);
	
	copy(&a2[0],&a4[0],size);
	cout<<"a2 copy to a4"<<endl;
	cout<<"a4=";
	output(a4,size);
	
	
	reverse(&a1[0],10);
	cout<<"after reverse a1=";
	output(a1,size);
	
	reverse(&a2[0],10);
	cout<<"after reverse a2=";
	output(a2,size);
	
	compare(&a4[0],&a1[0],&a2[0],size);
	cout<<"compare =";
	output(a4,size);
	
	add(&a1[0],&a2[0],&a3[0],size);
	cout<<"add =";
	output(a3,size);
	
	
		
	system("pause");
	return 0;
}
void copy(int a1[],int a2[],int size){
	int i;
	int *pa,*pb;
	pa=&a1[0];
	pb=&a2[0];
	i=size;
	while(i>0){
		*pb=*pa;
		pa++;
		pb++;
		i--;
	}
}
void reverse(int a[],int size){
	int i,tmp;
	int *pa,*pb;
	pa=&a[0];
	pb=&a[size-1];
	for(i=0;i<size/2;i++){
		tmp=*pa;
		*pa=*pb;
		*pb=tmp;
		pa++;
		pb--;		
	}
}
void compare(int r[],int a1[],int a2[],int size){
	int i;
	int *pa,*pb,*pr;
	pa=&a1[0];
	pb=&a2[0];
	pr=&r[0];
	for(i=0;i<size;i++){
		if(*pa>*pb){
			*pr=1;
		}
		else if(*pa==*pb){
			*pr=0;
		}
		else{
			*pr=-1;
		}
		pa++;
		pb++;
		pr++;
	}
}
void add(int a1[],int a2[],int a3[],int size){
	int i;
	int *pa,*pb,*pc;
	pa=&a1[0];
	pb=&a2[0];
	pc=&a3[0];
	for(i=0;i<size;i++){
		*pc=*pa+*pb;
		pc++;
		pa++;
		pb++;
	}
}
void output(int ax[],int size){
	int i;
	for(i=0;i<size;i++){
		cout<<setw(5)<<ax[i];
	}
	cout<<endl;
}
void zero(int a[],int size){
	int i;
	for(i=0;i<size;i++){
		a[i]=0;
	}
}
