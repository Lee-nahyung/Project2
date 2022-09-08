#include <iostream>

using namespace std;
//깃허브 링크 올리기, 문제 풀어서
//if문 안에서 변수 선언 가능

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

/*if문 문제1, end 연산자 ?
int main() {
	
	int numbers[3];
	int max = 0;

	cout << "정수 3개를 입력하시오:\n";

	for (int i = 0; i < 3; i++) {
		cin >> numbers[i];
	}
	for (int j = 0; j < 3; j++) {
		if (max < numbers[j])
			max = numbers[j];
	}

	cout << "가장 큰 정수는: " << max << "\n";

	return 0;
}*/

/*switch문 문제1
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
		[[failthrough]]; 여기에서 멈추지 않고 다른 실행가능 
	  case 'a':
		cout << "kimch\n";
		break;
	
	return 0;
}
*/

//피보나치 수열
/*int main() {

	int pre = 0; //이전 숫자
	int cur = 1; //현재 숫자

	int num;
	cout << "숫자를 입력하시오:\n";
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

//배열 문제
/*
int main() {
	int student[10];
	int sum = 0;
	int number;

	//sizeof(student)/size(int) or 10 or size(student)

	for (int i = 0; i < 10; i++) {
		cout << "학생의 성적을 입력하시오: ";
		cin >> student[i];
		sum += student[i];
	}
	number = sum / size(student);

	cout << "성적 평균" << number << "\n";
}
*/
