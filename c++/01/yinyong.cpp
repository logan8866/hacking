#include<iostream>
using namespace std;

void swap_two_num(int &a,int &b){
	int temp ;
	temp = b;
	b = a;
	a = temp;
}

int main(){
	int a = 100;
	int &b = a;
	cout << b <<endl;
	b = 200;
	cout << a << endl;

	int array1[3] = {1,2,3};
	int (&array_1)[3] = array1;
	cout << array_1[1] << endl;
	
	typedef int (array2)[3];
	array2 &array_2 = array1;
	cout << array_2[1] << endl;

	typedef int (&array3)[3];
	array3 arrary_3  = array1;
	cout << arrary_3[1] << endl;

	int c = 10;
	int d = 20;
	swap_two_num(c,d);
	cout << "c=" << c << endl;
	cout << "d=" << d << endl;

	return 0;
}
