#include<iostream>

using namespace std;

int main()
{
	//���� ������ ���� ����

	int i = 0;
	cout << &i << endl;
	{
		int i = 0;
		cout << &i << endl; //�� �ּҰ��� �ٸ��� ���´�.
	}
	
	//boll
	
	bool bFirst = false; // 0�� ����, �̿��� ���� ��. �������� b�� �����ϴ� ������ �������Ʈ ��Ģ ����.

	int j = 11;
	bool bLunch = j > 10;

	cout << bLunch << endl; //��� ��� : 1

	//�б⹮ IF

	reinput:// aaaa��� �ص� �ȴ�.
	int Number = 0;
	cin >> Number;

	if (1 <= Number && Number <= 9)
	{
		cout << "������ ������ ��" << endl;
	}
	else
	{
		cout << "���ڸ� �ٽ� �Է�." << endl;
		goto reinput;//goto aaaaa ��� �ص� �ȴ�.
	}

}