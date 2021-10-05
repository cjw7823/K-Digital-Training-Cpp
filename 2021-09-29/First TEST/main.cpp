#include<iostream>
#include<cstdlib>

using namespace std;
int Number[100];
void Tempnum(int* a, int* b);
void Initialize();
void Shuffle();
void Display();


int main()
{
	//1.	1 ~ 100���� ���� ���Ͻÿ�.
	int Sum = 0;

	for (int i = 1; i<= 100; i++)
	{
		Sum += i;
	}
	cout << Sum << endl;


	//2.	1 ~ 100���� ¦���� ���� ���ϼ���.

	int Sum2 = 0;

	for (int i = 1; i <= 100; i++)
	{
		if ((i % 2) == 0)
		{
			Sum2 += i;
		}
	}
	cout << Sum2 << endl;


	//3.	1 ~ 100���� 3�� ��� ���� ���ϼ���.

	int Sum3 = 0;

	for (int i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			Sum3 += i;
		}
	}
	cout << Sum3 << endl;

	//4.	for�� ����ؼ� �Ʒ��� ���� �׸��� ��� �غ�����

	for (int i = 0; i<5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		

		cout << "\n";
	}


	//5.	1 ~ 10������ ���ڸ� �������� �ߺ� ���� ��� �غ�����.

		Initialize();
		Shuffle();
		Display();

	


	return 0;
}


//6.	���� a, b�� ��ȯ �ϴ� �Լ��� ����� ������.
void Tempnum(int* a, int* b)
{
	int Temp = *a;
	*a = *b;
	*b = Temp;

}


void Initialize()
{
	for (int i = 0; i < 100; i++)
	{
		Number[i] = i + 1;
	}
}
void Shuffle()
{
	srand(time(NULL));

	for (int i = 0; i < 100; i++)
	{
		int R = rand() % 10;
		int R2 = rand() % 10;	
		int temp = Number[R];
		Number[R] = Number[R2];
		Number[R2] = temp;
	}
}

void Display()
{
	for (int i = 0; i < 10; i++)
	{
		cout << Number[i] << endl;
	}
}
