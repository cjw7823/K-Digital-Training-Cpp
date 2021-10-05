#include<iostream>

using namespace std;

int main()
{
	int Korean = 0, Math = 0, English = 0;
	int sum = 0;
	float avg = 0;

	cout << "국어, 수학, 영어 점수를 입력해주세요.\n";

	cout << "국어점수를 입력해주세요. ";
	cin >> Korean;

	cout << "국어점수를 입력해주세요. ";
	cin >> Math;

	cout << "국어점수를 입력해주세요. ";
	cin >> English;
	
	sum = Korean + Math + English;
	avg = sum / 3.0;

	cout << "세 과목의 합은 " << sum << " 입니다.\n";

	cout << "세 과목의 평균은 " << avg << " 입니다.\n";

	return 0;
}