#include<iostream>
#include<string>//c++ STL(���Ĵٵ� ���ø� ���̺귯��)
using namespace std;

int main()
{
	//1~10 ���� ����ϱ�
	int a[10];

	for (int i = 0; i < 10; i++)
	{
		a[i] = i;
	}


	for (int i = 1; i <= 10; i++)
	{
		cout << a[i - 1] << endl;

	}

	
	//1~100������ ��
	int sum = 0;

	for (int i = 0; i < 100; i++)
	{
		sum += i+1;
	}
	cout << sum << endl;
	
//1~100������ ¦���� ��
	int even = 0;

	for (int i = 0; i <= 100; i=i+2)
	{
		even += i;
	}
	
	cout << even << endl;

	//1~100������ 3�� ����� ��
	int third = 0;

	for (int i = 0; i <= 100; i += 3)
	{
		third += i;
	}

	cout << third << endl;

//�� �ﰢ�� �ݺ������� �����

	int count = 0;

	cin >> count;

	for (int i = 1; i <= count; i++)
	{
		for (int j = i; j <= count; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
//�� �ﰢ��2 �ݺ������� �����
	int count2 = 0;

	cin >> count2;

	for (int i = 1; i <= count2; i++)
	{

		for (int j = 1; j <= count2-i; j++)
		{
			cout << " ";
			
		}
		for (int k = count2; k > count2-i; k--)
		{
			cout << "*";
		}


		cout << endl;
	}

	
	return 0;
}