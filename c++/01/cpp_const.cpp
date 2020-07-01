#include<iostream>
#include<string>
using namespace std;

void change_const(){
	const int a = 100;
	int *b = (int*) &a;
	*b = 200;
	cout << a << endl;
}

struct person{
	string name;
	int age;
};

void test(){
	const person pl;
//      p1.name = "wangyiqing";
//      p1.age = 19;
        person* p = (person*) &pl;
        p->name = "lisi";
        p->age = 999;
        cout << pl.name << pl.age <<endl;
}

int main(){
	change_const();
	test();
	return 0;
}	
