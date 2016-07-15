#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

class X {
   
   private:
   		double m;
   		double n;
   		
   	public:
   		X(){
   			m=0;
			n=0;	
		}
   		X(double r){
   			m=r;
			n=r;	
		}
		X(const X &a){
			m=a.m;
			n=a.n;
		}
		X(double r,double z){
			m=r;
			n=z;
		}
		void show(){
			cout<<m<<","<<n<<endl;
		}
};

int main(int argc, char *argv[])
{
    X a;
    X b(3);
    X c(a);
    X d(4,5.8);
    
    cout<<"a(m,n)->"<<setw(5);
    a.show();
    cout<<"b(m,n)->"<<setw(5);
    b.show();
    cout<<"c(m,n)->"<<setw(5);
    c.show();
    cout<<"d(m,n)->"<<setw(5);
    d.show();
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
