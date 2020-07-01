#include<iostream>
using namespace std;

namespace A{
	int m1 = 10;
	namespace B{
		int m2 = 20;
	}
}

namespace A{
	int m3 = 30;
}

namespace longname{
	int m4 = 40;
}

namespace C{
	int m5 = 50;
}

namespace D{
	int m6 = 60;
}

int main(){
//	int m5 = 70;
	int m6 = 666;
	cout << "m1=" << A::m1 <<endl;
	cout << "m2=" << A::B::m2 <<endl;
	cout << "m3=" << A::m3 <<endl;
	namespace shortname = longname;
	cout << "m4=" << shortname::m4 <<endl;
	using C::m5;
	cout << "m5=" << m5 <<endl;
	using namespace D;
	// when using and int m6 =666 appear in one time, then m6 first equal to 666
	cout << "m6=" << m6 <<endl;
	return 0;
}
