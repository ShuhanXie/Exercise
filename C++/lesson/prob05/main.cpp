#include <iostream>
#include <iomanip>
#include "vector.h"

using namespace std;

int main() {

	int a1[] = {0,1,2,3,4,5,6,7,8,9};
	int s1=sizeof(a1)/sizeof(int);

	vector v1(a1,s1);
	cout<<setw(12)<<"v1:";
	v1.dump();

	vector v2(v1);
	v2.set(13,88);
	cout<<setw(12)<<"v2 set:";
	v2.dump();

	vector v3(v1);
	v3.resize(6);
	cout<<setw(12)<<"v3 resize:";
	v3.dump();

	vector v4(v1);
	v4.resize(15);
	cout<<setw(12)<<"v4 resize:";
	v4.dump();
	
	vector v5 = v1 + v4;
	cout<<setw(12)<<"v1+v4:";
    v5.dump();
    
	vector v6 = v1 * 2;
	cout<<setw(12)<<"v1*v2:";
    v6.dump();
    
	vector v7 = v1 * 0;
	cout<<setw(12)<<"v1*0:";
    v7.dump();

	int b[] = {1,4,5,8,9,20,22};
	int sb=sizeof(b)/sizeof(int);    
	int c[] = {0,3,4,7,10,11,19,18,22,1};
	int sc=sizeof(c)/sizeof(int);
    vector vb(b,sb);
    vector vc(c,sc);
    cout<<setw(12)<<"vb:";
    vb.dump();
    cout<<setw(12)<<"vc:";
    vc.dump();
    vector vs=vb.merge(vc);
    cout<<setw(12)<<"vs merge:";
    vs.dump(); 
    
    vb.reverse();
    cout<<setw(12)<<"vb reverse:";
    vb.dump();
    
    vc.reverse(1,4);
    cout<<setw(12)<<"vc reverse:";
    vc.dump();
    
    vector vd=vc - vb;
    cout<<setw(12)<<"vd sub:";
    vd.dump();

	int x[] = {1,5,9};
	int sx=sizeof(x)/sizeof(int);    
    vd=vb - vector(x,sx);
    cout<<setw(12)<<"vd sub:";
    vd.dump();
    
    
    system("pause");
	return 0;
}
