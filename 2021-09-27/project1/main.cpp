#include<iostream>

using namespace std;

int main()
{
	//�Է� ���� ������ �������� ��� �غ�����.
	int row = 0, colum = 0;

	cin >> row >> colum;

	cout << row << "X" << colum << "=" << row * colum << endl;

	cout << "------------------------------" << endl;

	//1-9�ܱ��� �������� ��� �غ�����.

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