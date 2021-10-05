#include<iostream>

using namespace std;

int main()
{
	//전역 변수와 지역 변수

	int i = 0;
	cout << &i << endl;
	{
		int i = 0;
		cout << &i << endl; //두 주소값이 다르게 나온다.
	}
	
	//boll
	
	bool bFirst = false; // 0은 거짓, 이외의 값은 참. 변수명이 b로 시작하는 이유는 블루프린트 규칙 때문.

	int j = 11;
	bool bLunch = j > 10;

	cout << bLunch << endl; //출력 결과 : 1

	//분기문 IF

	reinput:// aaaa라고 해도 된다.
	int Number = 0;
	cin >> Number;

	if (1 <= Number && Number <= 9)
	{
		cout << "구구단 적합한 수" << endl;
	}
	else
	{
		cout << "숫자를 다시 입력." << endl;
		goto reinput;//goto aaaaa 라고 해도 된다.
	}

}