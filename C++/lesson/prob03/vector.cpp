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
