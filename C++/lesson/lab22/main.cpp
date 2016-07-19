#include <iostream>
#include <cstdlib>
using namespace std;

class A{
	public:
		A():pub(0),pro(0),pri(0){};
		int pub;
		int readpri(){
			return pri;
		}
		int readpro(){
			return pro;
		}			
	protected:
		int pro;
		void setpri(int v){
			if(v>=0){
				pri=v;
			}
		}
	private:
		int pri;		
};

class B: public A{
	public:
		B():A(){};
};

int main(int argc, char** argv) {
	int dpro,dpri,dpub;
	B x;
	dpub=x.pub;
	dpro=x.readpro();
	dpri=x.readpri();
	
	cout<<"pub="<<dpub<<endl;
	cout<<"pro="<<dpro<<endl;
	cout<<"pri="<<dpri<<endl;
	cout<<"set pri="<<x.readpri()<<endl;
	
	system("pause");
	return 0;
}
