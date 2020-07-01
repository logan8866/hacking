#include<iostream>
using namespace std;

int atk = 1000;

int main(){

	int atk = 2000;
	cout << "atk=" << atk <<endl;
	cout << "atk=" << ::atk <<endl;
	return 0;
}
