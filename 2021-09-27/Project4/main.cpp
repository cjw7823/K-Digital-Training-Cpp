#include<iostream>
#include"Practice.h"

//pointer
//����
// ������* (int*, char*,...)�ּҰ�- �޸� ��ġ ����Ű�� ȭ��ǥ
//���
//*���� ( *First) ȭ��ǥ�� ����Ű�� �޸� ��ġ ��
//&���� = ������ �޸� ��ġ(����, address)�� ������ ����.
using namespace std;

void Swap(int* First, int* Second)//�Լ��� ���ڸ� �����ͷ� ����

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

	//cout <<"���ϱ�" << ADD(a, b) << endl;
	//cout << "����" << SUBTRACT(a, b) << endl;
	//cout << "������" << DIVISION(a, b) << endl;
	//cout << "���ϱ�" << MULTI(a, b) << endl;

}