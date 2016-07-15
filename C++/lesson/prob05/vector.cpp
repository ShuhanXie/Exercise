#include <iostream>
#include <iomanip>
#include "vector.h" 

using namespace std;

	vector::vector(){
		size=0;
	}
	vector::vector(int d[], int s) {
		size=(s<=MAX)?s:MAX;
		for(int i=0; i<size; i++)
			dat[i]=d[i];
	}
	vector::vector(const vector & v) {
		size = v.size;
		for(int i=0; i<size; i++)
			dat[i]=v.dat[i];
	}
	void vector::set(int index, int v) {
		if (index<size)
			dat[index]=v;
		else if (index<MAX) {
			while (size<index)
				dat[size++]=0;
			dat[size++]=v;
		} else
			cout<<"ERROR: index is out of range!"<<endl;
	}
	int vector::get(int index) {
		if (index<size)
			return dat[index];
		else
			cout<<"ERROR: index is out of range!"<<endl;
		return 0;
	}
	void vector::resize(int s) {
		if (s<size)
			size=s;
		else
			while (size<=s)
				dat[size++]=0;
	}
	void vector::dump() {
		for(int i=0; i<size; i++)
			cout<<setw(5)<<dat[i];
		cout<<endl;
	}
	vector vector::operator+(const vector& v){
		vector vz;
		int n_size;
		n_size=size+v.size;
		vz.size=(n_size<MAX)?n_size:MAX;
		for(int i=0;i<vz.size;i++){
			if(i<size)
				vz.dat[i]=this->dat[i];
			else
				vz.dat[i]=v.dat[i-size];
		} 
		return vz;
	}
	vector vector::operator-(const vector& v){
		vector vz;
		int sub=0,k=0,status=0;
		for(int i=0;i<size;i++){
			for(int j=0;j<v.size;j++){
				if(dat[i]==v.dat[j]){
					status=1;
				}
			}
			if(status==0){
				vz.dat[k]=dat[i];
				k++;
			}
			status=0;
		}
		vz.size=k;		
		return vz;
	}
	vector vector::operator*(const int v){
		vector vz;
		vz.size=size*v;
		for(int i=0;i<v;i++){
			for(int j=0;j<size;j++){
				vz.dat[j+i*size]=dat[j];
			}
		} 
		return vz;
	}
	vector vector::merge(const vector& v){
		vector vz;
		int n_size;
		n_size=size+v.size;
		vz.size=(n_size<MAX)?n_size:MAX;
		for(int i=0;i<vz.size;i++){
			if(i<size)
				vz.dat[i]=this->dat[i];
			else
				vz.dat[i]=v.dat[i-size];
		}
		vz.sequ();
		return vz;
	}
	vector vector::sequ(){
		int tmp;
		for(int i=0;i<size;i++){
			for(int j=0;j<size;j++){
				if(dat[i]<dat[j]){
					tmp=dat[i];
					dat[i]=dat[j];
					dat[j]=tmp;
				}
			}
		}	
	}
	vector vector::reverse(){
		reverse(0,size-1);
	}
	vector vector::reverse(int a, int b){
		int tmp,sub=0;
		tmp=a;
		a=(tmp>b)?b:tmp;
		b=(tmp<b)?b:tmp;
		int n_size=(b-a+1)/2;
		for(int i=a;i<a+n_size;i++){
			tmp=dat[i];
			dat[i]=dat[b-sub];
			dat[b-sub]=tmp;
			sub++;
		}
	}
