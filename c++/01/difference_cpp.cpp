#include<iostream>
using namespace std;
/*
void test(a,b){
	cout << a << b << endl;
	return 0;
}
*/
void test(int a,int b){
	cout << a << b << endl;
	//return 0;
}

struct student{
	int age;
	void age_add(){
		age++;
	}
};

int main(){
	//int a = 10;
	int a = 20;
	int b = 30;
	a = 'b';
	int* c = (int *)'c';
	//test(a,b,100);
	test(a,b);

	struct student st1;
	st1.age = 100;
	st1.age_add();
	cout << st1.age << endl;
	return 0;
}
