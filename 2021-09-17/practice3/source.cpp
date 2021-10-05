#include<iostream>
#include<string>//c++ STL(스탠다드 템플릿 라이브러리)
using namespace std;

int main()
{
	//1~10 까지 출력하기
	int a[10];

	for (int i = 0; i < 10; i++)
	{
		a[i] = i;
	}


	for (int i = 1; i <= 10; i++)
	{
		cout << a[i - 1] << endl;

	}

	
	//1~100까지의 합
	int sum = 0;

	for (int i = 0; i < 100; i++)
	{
		sum += i+1;
	}
	cout << sum << endl;
	
//1~100까지의 짝수의 합
	int even = 0;

	for (int i = 0; i <= 100; i=i+2)
	{
		even += i;
	}
	
	cout << even << endl;

	//1~100까지의 3의 배수의 합
	int third = 0;

	for (int i = 0; i <= 100; i += 3)
	{
		third += i;
	}

	cout << third << endl;

//별 삼각형 반복문으로 만들기

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
//별 삼각형2 반복문으로 만들기
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