#include <iostream>

using namespace std;
//깃허브 링크 올리기, 문제 풀어서

class Teststruct
{
	int a;

public :
	Teststruct();
	~Teststruct();
	void show();
};

Teststruct::Teststruct() {
	cout << "Constructor\n";
	a = 10;
}

Teststruct::~Teststruct() {
	cout << "Destructor...\n";
}

void Teststruct::show()
{
	cout << a << "\n";
}

void main() {
	Teststruct ob;
	ob.show();
} 

