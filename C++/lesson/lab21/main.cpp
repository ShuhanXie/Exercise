#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int*   mkIntArray(int n, int v);
float* mkFloatArray(int n, float v);
void   dumpIntArray(int* ptr, int s);
void   dumpFloatArray(float* ptr, int s);

int main(void) {
	int* pi;
	float* pf;

	pi=mkIntArray(10,0);
	pf=mkFloatArray(10,8.8);

	dumpIntArray(pi,10);
	dumpFloatArray(pf,10);
	
	delete pi;
	delete pf;
	
	return 0;
}

int*mkIntArray(int n, int v){
	int *ptr;
	ptr=new int(n);
	if(ptr!=NULL){
		for(int i=0;i<n;i++){
			*(ptr+i)=v;
		}
		return ptr;
	}
	else{
		cout<<"Out of memory"<<endl;
	}
}
float* mkFloatArray(int n, float v){
	float *ptr;
	ptr=new float(n);
	if(ptr!=NULL){
		for(int i=0;i<n;i++){
			*(ptr+i)=v;
		}
		return ptr;
	}
	else{
		cout<<"Out of memory"<<endl;
	}
}
void dumpIntArray(int* ptr, int s){
	int i;
	cout<<"INT Array=";
	for(i=0;i<s;i++){
		cout<<setw(5)<<*(ptr+i);
	}
	cout<<endl;
}
void dumpFloatArray(float* ptr, int s){
	int i;
	cout<<"FLOAT Array=";
	for(i=0;i<s;i++){
		cout<<setw(5)<<*(ptr+i);
	}
	cout<<endl;
}
