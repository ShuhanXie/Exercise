#include <iostream>
#include <iomanip>
#include "myArray.h"

using namespace std;

int main() {
	intArray a;
	intArray b(11);
	intArray c(7,5);
	intArray d(12,7,5);
	
	floatArray e; 
	floatArray f(6); 
	floatArray g(13,2); 
	floatArray h(4,7,3); 
		
	cout<<"A_array=";
	a.dump();
	cout<<"B_array=";
	b.dump();
	cout<<"C_array=";
	c.dump();
	cout<<"D_array=";
	d.dump();
	
	c.resize(9);
	cout<<"C_resize=";
	c.dump();
	c.dumpALL();
	d.resize(6);
	cout<<"D_resize=";
	d.dumpALL();
	
	cout<<"------------------------------------"<<endl;
	
	cout<<"E_array=";
	e.dump();
	cout<<"F_array=";
	f.dump();
	cout<<"G_array=";
	g.dump();
	cout<<"H_array=";
	h.dump();
	
	g.resize(9);
	cout<<"G_resize=";
	g.dump();
	h.resize(6);
	cout<<"H_resize=";
	h.dumpALL();
	
	
	
	
	system("pause");
	return 0;
}

