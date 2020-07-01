#include<iostream>
using namespace std;

int& test1(){
	static int a = 100;
	return a;
}

int& test2(){
	int a = 200;
	return a;
}

int main(){
	cout << "test1" << test1() <<endl;
	cout << "test2" << test2() <<endl;
	cout << "test2" << test2() <<endl;
	return 0;
}

