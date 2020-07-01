#include<iostream>

using namespace std;

struct person{
	int age;
};

void test1(person *p){
	p->age = 20;
}

void test2(person &p){
	p.age=30;
}

int main(){
	person *p;
	p = (person*) malloc(sizeof(person));
	p->age = 10;
	test1(p);
	cout << p->age << endl;
	test2(*p);
	cout << p->age << endl;

	return 0;
}
