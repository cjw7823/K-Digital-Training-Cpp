#include<iostream>

using namespace std;

int main()
{
	//입력 받은 숫자의 구구단을 출력 해보세요.
	int row = 0, colum = 0;

	cin >> row >> colum;

	cout << row << "X" << colum << "=" << row * colum << endl;

	cout << "------------------------------" << endl;

	//1-9단까지 구구단을 출력 해보세요.

	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			if (i * j < 10)
			{
				cout << j << "X" << i << "=" << i * j << "  ";
			}
			else
			{
				cout << j << "X" << i << "=" << i * j << " ";
			}

		}
		cout << endl;
	}
	return 0;
}