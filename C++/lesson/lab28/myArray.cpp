#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h> 
#include "myArray.h"

using namespace std;

void intArray::init(int v){
	for(int i=0;i<size;i++){
		dat[i]=v;
	}
}
void intArray::mkArray(int si,int va,int st){
	size=(si>0)?si:10;
	setStep(st);
	dat=new int(size);
	init(va);
}
void intArray::randx(){
	srand((int)time(NULL));
	for(int i=0;i<size;i++){
		dat[i]+=rand()%10;
	}
}
void intArray::setStep(int st){
	if(st<1){
		step=1;	
	}
	else if(st>100){
		step=100;
	}
	else{
		step=st;
	}
}
intArray::intArray(){
	mkArray(10,0,10);
}
intArray::intArray(int si) {
	mkArray(si,0,10);
}

intArray::intArray(int si, int va) {
	mkArray(si,va,10);
}
intArray::intArray(int si, int va, int st)  {
	mkArray(si,va,st);
}
void intArray::resize(int si) {
	if (si>0) {
		if(si>size){
			int i,*tmp;
			rlsize=size;
			while(rlsize<si){
				rlsize+=step;
			}
			tmp=new int(rlsize);
			for(i=0;i<si;i++){
				if(i<size){
					tmp[i]=dat[i];
				}
				else{
					tmp[i]=0;
				}
			}
			delete dat;
			dat=tmp;
			size=si;
		}
		else{
			size=si;
		}
	}
}

int intArray::getSize() {
	return size;
}
int intArray::getStep() {
	return step;
}

int intArray::getData(int index) {
	if (index<size)
		return dat[size];
	return 0;
}

void intArray::setData(int index, int va) {
	if (index<size)
		dat[index]=va;
}

void intArray::dump() {
	for (int i = 0; i < size; i++)
		cout << setw(5) << dat[i];
	cout << endl;
}
void intArray::dumpALL() {
	for (int i = 0; i < rlsize; i++)
		if(i<size){
			cout << setw(5) << dat[i];
		}
		else{
			cout << setw(5) << "X";
		}
	cout << endl;
}
void intArray::sort(){
	int i,j,tmp;
	randx();
	cout<<setw(15)<<"before Array=";
	dump();
	for(i=0;i<size-1;i++){
		for(j=i+1;j<size;j++){
			if(dat[i]>dat[j]){
				tmp=dat[i];
				dat[i]=dat[j];
				dat[j]=tmp;
			}
		}
	}
}
void intArray::reverse(){
	int i,tmp;
	randx();
	cout<<setw(15)<<"before Array=";
	dump();
	for(i=0;i<size/2;i++){
		tmp=dat[i];
		dat[i]=dat[size-i-1];
		dat[size-i-1]=tmp;
	}
}




//----------floatArray-------------------------
void floatArray::init(float v){
	for(int i=0;i<size;i++){
		*(dat+i)=v;
	}
}
void floatArray::mkArray(int si,float va,int st){
	size=(si>0)?si:10;
	setStep(st);
	dat=new float(size);
	init(va);
}
void floatArray::randx(){
	srand((float)time(NULL));
	for(int i=0;i<size;i++){
		dat[i]+=rand()%10;
	}
}
void floatArray::setStep(int st){
	if(st<1){
		step=1;	
	}
	else if(st>100){
		step=100;
	}
	else{
		step=st;
	}
}
floatArray::floatArray(){
	mkArray(10,0,10);
}
floatArray::floatArray(int si) {
	mkArray(si,0,10);
}

floatArray::floatArray(int si, float va) {
	mkArray(si,va,10);
}
floatArray::floatArray(int si, float va, int st)  {
	mkArray(si,va,st);
}
void floatArray::resize(int si) {
	if (si>0) {
		if(si>size){
			int i;
			float *tmp;
			rlsize=size;
			while(rlsize<si){
				rlsize+=step;
			}
			tmp=new float(rlsize);
			for(i=0;i<si;i++){
				if(i<size){
					*(tmp+i)=*(dat+i);
				}
				else{
					*(tmp+i)=0;
				}
			}
			delete dat;
			dat=tmp;
			size=si;
		}
		else{
			size=si;
		}
	}
}

int floatArray::getSize() {
	return size;
}
int floatArray::getStep() {
	return step;
}

float floatArray::getData(int index) {
	if (index<size)
		return dat[size];
	return 0;
}

void floatArray::setData(int index, float va) {
	if (index<size)
		dat[index]=va;
}

void floatArray::dump() {
	for (int i = 0; i < size; i++)
		cout << setw(5) << *(dat+i);
	cout << endl;
}
void floatArray::dumpALL() {
	for (int i = 0; i < rlsize; i++)
		if(i<size){
			cout << setw(5) << *(dat+i);
		}
		else{
			cout << setw(5) << "X";
		}
	cout << endl;
}
void floatArray::sort(){
	int i,j,tmp;
	randx();
	cout<<setw(15)<<"before Array=";
	dump();
	for(i=0;i<size-1;i++){
		for(j=i+1;j<size;j++){
			if(dat[i]>dat[j]){
				tmp=dat[i];
				dat[i]=dat[j];
				dat[j]=tmp;
			}
		}
	}
}
void floatArray::reverse(){
	int i,tmp;
	randx();
	cout<<setw(15)<<"before Array=";
	dump();
	for(i=0;i<size/2;i++){
		tmp=dat[i];
		dat[i]=dat[size-i-1];
		dat[size-i-1]=tmp;
	}
}
