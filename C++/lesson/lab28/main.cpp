#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h> 
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
		
	cout<<setw(15)<<"A_array=";
	a.dump();
	cout<<setw(15)<<"B_array=";
	b.dump();
	cout<<setw(15)<<"C_array=";
	c.dump();
	cout<<setw(15)<<"D_array=";
	d.dump();
	
	c.resize(9);
	cout<<setw(15)<<"C_resize=";
	c.dump();
	cout<<setw(15)<<"C_ALL=";
	c.dumpALL();
	d.resize(6);
	cout<<setw(15)<<"D_resize=";
	d.dumpALL();
	c.sort();
	cout<<setw(15)<<"after Array=";
	c.dump();
	d.reverse();
	cout<<setw(15)<<"after Array=";
	d.dump();
	
	cout<<"------------------------------------"<<endl;
	
	cout<<setw(15)<<"E_array=";
	e.dump();
	cout<<setw(15)<<"F_array=";
	f.dump();
	cout<<setw(15)<<"G_array=";
	g.dump();
	cout<<setw(15)<<"H_array=";
	h.dump();
	
	g.resize(9);
	cout<<setw(15)<<"G_resize=";
	g.dump();
	h.resize(6);
	cout<<setw(15)<<"H_resize=";
	h.dumpALL();
	g.sort();
	cout<<setw(15)<<"after Array=";
	g.dump();
	h.reverse();
	cout<<setw(15)<<"after Array=";
	h.dump();	
	
	system("pause");
	return 0;
}
