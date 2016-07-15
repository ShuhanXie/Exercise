#include<iostream>
using namespace std;

void swap(int x[10]);

int main() {
	int i,x[10],sum=0;
	
	cout<<"請輸入十個數字：";
	for(i=0;i<10;i++){
		cin>>x[i];		
	}
	for(i=0;i<10;i++){
		cout<<x[i]<<" ";
	}
	cout<<endl;
	
	swap(&x[0]);
	
	for(i=0;i<10;i++){
		cout<<x[i]<<" ";
	}
	cout<<endl;
	
	system("pause");
	return 0;
}
void swap(int x[10]){
	int i,tmp;
	int *pa,*pb;
	pa=&x[0];
	pb=&x[9];
	for(i=0;i<5;i++){
		tmp=*pa;
		*pa=*pb;
		*pb=tmp;
		pa++;
		pb--;		
	}
}
