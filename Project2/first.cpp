#include <iostream>

using namespace std;
//����� ��ũ �ø���, ���� Ǯ�
//if�� �ȿ��� ���� ���� ����

/*class Teststruct
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
} */

/*if�� ����1, end ������ ?
int main() {
	
	int numbers[3];
	int max = 0;

	cout << "���� 3���� �Է��Ͻÿ�:\n";

	for (int i = 0; i < 3; i++) {
		cin >> numbers[i];
	}
	for (int j = 0; j < 3; j++) {
		if (max < numbers[j])
			max = numbers[j];
	}

	cout << "���� ū ������: " << max << "\n";

	return 0;
}*/

/*switch�� ����1
int main() {
	char a;

	cout << "What is your favorite food?\n";
	cout << " a) kimch\n b) Korean BBQ\n c) Chicken\n";
	
	cin >> a;
	switch (a)
	{
	case 'A':
	case 'a':
		cout << "kimch\n";
		break;

	case 'B':
	case 'b':
		cout << "Korean BBQ\n";
		break;

	case 'C':
	case 'c':
		cout << "Chicken\n";
		break;

	}

	//case 'A':
	    cout<< "covert to a \n" ;
		[[failthrough]]; ���⿡�� ������ �ʰ� �ٸ� ���డ�� 
	  case 'a':
		cout << "kimch\n";
		break;
	
	return 0;
}
*/

//�Ǻ���ġ ����
/*int main() {

	int pre = 0; //���� ����
	int cur = 1; //���� ����

	int num;
	cout << "���ڸ� �Է��Ͻÿ�:\n";
	cin >> num;

	if (num == 0) {

	}
	else if (num == 1) {

	}
	else {
		for (int i = 0; i < num; i++) {

			int next = pre + cur;
			pre = cur;
			cur = next;
		}
	}

}
*/

//�迭 ����
/*
int main() {
	int student[10];
	int sum = 0;
	int number;

	//sizeof(student)/size(int) or 10 or size(student)

	for (int i = 0; i < 10; i++) {
		cout << "�л��� ������ �Է��Ͻÿ�: ";
		cin >> student[i];
		sum += student[i];
	}
	number = sum / size(student);

	cout << "���� ���" << number << "\n";
}
*/
