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

    system("pause");
	return 0;
}

