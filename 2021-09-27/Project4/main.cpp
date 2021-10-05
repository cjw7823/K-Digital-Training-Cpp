#include<iostream>
#include"Practice.h"

//pointer
//선언
// 변수형* (int*, char*,...)주소값- 메모리 위치 가르키는 화살표
//사용
//*변수 ( *First) 화살표가 가르키는 메모리 위치 값
//&변수 = 변수의 메모리 위치(번지, address)를 값으로 가짐.
using namespace std;

void Swap(int* First, int* Second)//함수의 인자를 포인터로 선언

{
	int Temp = *First;
	*First = *Second;
	*Second = Temp;


}
//call by reference
//call by value
int main()
{
	int a = 1;
	int b = 2;

	Swap(&a, &b);
	cout << a << endl;
	cout << b << endl;

	//cout <<"더하기" << ADD(a, b) << endl;
	//cout << "빼기" << SUBTRACT(a, b) << endl;
	//cout << "나누기" << DIVISION(a, b) << endl;
	//cout << "곱하기" << MULTI(a, b) << endl;

}