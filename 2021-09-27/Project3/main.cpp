#include<iostream>

using namespace std;

int main()
{
	//숫자를 입력 받아서 홀수, 짝수를 판별하는 프로그램을 만들어 보세요.
	int Number = 0;

	cout << "숫자를 입력하세요." << endl;
	cin >> Number;

	if (Number % 2 != 0)
	{
		cout << "홀수입니다." << endl;
	}
	else
	{
		cout << "짝수입니다." << endl;
	}

	//성적을 입력 받아 규격에 맞게 출력하시오.
	int score = 0;

	cout << "성적을 입력하세요.\n";
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