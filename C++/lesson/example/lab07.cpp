#include<iostream>
#include <iomanip>
using namespace std;

void MultiArry(int a,int b);

int main() {
	int a,b;
//	��J�n�L�X�X�ӭ��k�}�C�A��n�L�X����X--------------------------	
	cout<<"�п�JA��B�G";
	cin>>a>>b;
	MultiArry(a,b);
	
	system("pause");
	return 0;
}
void MultiArry(int a,int b){
	int i,j,k=0;
	for(i=1;i<=b;i++){
		for(j=1;j<=a;j++){
			if(j<a && j<3)
				cout<<setw(3)<<j<<"x"<<i<<"="<<i*j;
			else if(j==a || j==3){
				cout<<setw(3)<<j<<"x"<<i<<"="<<i*j;
				cout<<endl;
				break;
			}
		}		
	}
	if(a>3){
		cout<<endl;
		for(i=1;i<=b;i++){
			for(j=4;j<=a;j++){
				if(j<a && j<6)
					cout<<setw(3)<<j<<"x"<<i<<"="<<i*j;
				else if(j==a || j==6){
					cout<<setw(3)<<j<<"x"<<i<<"="<<i*j;
					cout<<endl;
					break;
				}
			}		
		}
		if(a>6){
			cout<<endl;
			for(i=1;i<=b;i++){
				for(j=47;j<=a;j++){
					if(j<a && j<9)
						cout<<setw(3)<<j<<"x"<<i<<"="<<i*j;
					else if(j==a || j==9){
						cout<<setw(3)<<j<<"x"<<i<<"="<<i*j;
						cout<<endl;
						break;
					}
				}		
			}
		}	
	}
}
