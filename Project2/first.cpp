#include <iostream>

using namespace std;
//����� ��ũ �ø���, ���� Ǯ�

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

