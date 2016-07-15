#include<iostream>
#include <iomanip> //setw()函數需載入的Library 
using namespace std;

void swap(int x[10],int size);

int main() {
	int i,a,b,tmp,x[10];
	cout<<"請輸入A跟B(陣列索引值)：";
	cin>>a>>b;
	cout<<"請輸入十個數字：";
	for(i=0;i<10;i++){
		cin>>x[i];		
	}
	a=(a<0)?0:a;
	b=(b<0)?9:b;
	for(i=0;i<10;i++){
		cout<<x[i]<<" ";
	}
	cout<<endl;
	
	swap(&x[a],b-a+1);
	
	for(i=0;i<10;i++){
		cout<<x[i]<<" ";
	}
	cout<<endl;
	
	system("pause");
	return 0;
}
void swap(int x[10],int size){
	int i,tmp;
	int *pa,*pb;
	pa=&x[0];
	pb=&x[size-1];
	for(i=0;i<size/2;i++){
		tmp=*pa;
		*pa=*pb;
		*pb=tmp;
		pa++;
		pb--;		
	}
}
