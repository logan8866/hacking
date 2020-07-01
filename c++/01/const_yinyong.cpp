#include<iostream>

using namespace std;

int main(){
	const int &a = 10;
	//a = 20;
	cout << a << endl;
	int *p = (int*) &a;
	*p = 200;
	cout << a << endl;
	return 0;
}
