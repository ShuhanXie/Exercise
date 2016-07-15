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
		int n_size,tmp;
		n_size=size+v.size;
		vz.size=(n_size<MAX)?n_size:MAX;
		for(int i=0;i<vz.size;i++){
			if(i<size)
				vz.dat[i]=this->dat[i];
			else
				vz.dat[i]=v.dat[i-size];
		}
		for(int i=0;i<vz.size;i++){
			for(int j=0;j<vz.size;j++){
				if(vz.dat[i]<vz.dat[j]){
					tmp=vz.dat[i];
					vz.dat[i]=vz.dat[j];
					vz.dat[j]=tmp;
				}
			}
		}
		return vz;
	}
