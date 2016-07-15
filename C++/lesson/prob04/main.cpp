#include <iostream>
#include <iomanip>
#include "vector.h"

using namespace std;

int main() {

	int a1[] = {0,1,2,3,4,5,6,7,8,9};
	int s1=sizeof(a1)/sizeof(int);

	vector v1(a1,s1);
	v1.dump();

	vector v2(v1);
	v2.set(13,88);
	v2.dump();

	vector v3(v1);
	v3.resize(6);
	v3.dump();

	vector v4(v1);
	v4.resize(15);
	v4.dump();
	
	vector v5 = v1 + v4;
    v5.dump();
    
	vector v6 = v1 * 2;
    v6.dump();
   
	vector v7 = v1 * 0;
    v7.dump();

	int b[] = {1,4,5,8,9};
	int sb=sizeof(b)/sizeof(int);    
	int c[] = {0,3,4,7,10,11};
	int sc=sizeof(c)/sizeof(int);
    vector vb(b,sb);
    vector vc(c,sc);
    vb.dump();
    vc.dump();
    vector vs=vb.merge(vc);
    vs.dump(); 
    
    system("pause");
	return 0;
}
