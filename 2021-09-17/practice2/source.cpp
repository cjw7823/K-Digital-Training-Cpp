#include<iostream>

using namespace std;

int main()
{
	int Korean = 0, Math = 0, English = 0;
	int sum = 0;
	float avg = 0;

	cout << "����, ����, ���� ������ �Է����ּ���.\n";

	cout << "���������� �Է����ּ���. ";
	cin >> Korean;

	cout << "���������� �Է����ּ���. ";
	cin >> Math;

	cout << "���������� �Է����ּ���. ";
	cin >> English;
	
	sum = Korean + Math + English;
	avg = sum / 3.0;

	cout << "�� ������ ���� " << sum << " �Դϴ�.\n";

	cout << "�� ������ ����� " << avg << " �Դϴ�.\n";

	return 0;
}