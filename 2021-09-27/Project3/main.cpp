#include<iostream>

using namespace std;

int main()
{
	//���ڸ� �Է� �޾Ƽ� Ȧ��, ¦���� �Ǻ��ϴ� ���α׷��� ����� ������.
	int Number = 0;

	cout << "���ڸ� �Է��ϼ���." << endl;
	cin >> Number;

	if (Number % 2 != 0)
	{
		cout << "Ȧ���Դϴ�." << endl;
	}
	else
	{
		cout << "¦���Դϴ�." << endl;
	}

	//������ �Է� �޾� �԰ݿ� �°� ����Ͻÿ�.
	int score = 0;

	cout << "������ �Է��ϼ���.\n";
	cin >> score;
	if (score>=90)
	{
		cout << "A\n";
	}
	else if (score >= 80)
	{
		cout << "B\n";
	}
	else if (score >= 70)
	{
		cout << "V\n";
	}
	else if (score >= 60)
	{
		cout << "D\n";
	}
	else if (score >=50)
	{
		cout << "E\n";
	}
	else
	{
		cout << "F\n";
	}
		
}