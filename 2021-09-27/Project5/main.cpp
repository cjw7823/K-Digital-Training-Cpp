#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int Number[100];
void Initialize();
void Shuffle();
void Display();


int main()
{
	Initialize();
	Shuffle();
	Display();

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









//int main()
//{
//	int Score = 0;
//	char Grade = 'F';
//
//
//
//		cin >> Score;
//		switch (Score / 10)
//		{
//			case 10:
//			case 9:
//			{
//				Grade = 'A';
//				break;
//			}
//			case 8:
//			{
//				Grade = 'B';
//				break;
//			}
//			case 7:
//			{
//				Grade = 'C';
//				break;
//			}
//			case 6:
//			{
//				Grade = 'D';
//				break;
//			}
//			default:
//			{
//				Grade = 'F';
//			}
//		}
//		cout << Grade << endl;
//
//}

//int main()
//{
	//int Number[10];

	//for (int i = 0; i < 10; i++)
	//{
	//	Number[i] = i + 1;
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << Number[i] << endl;
	//}

	//int A = 10;
	//int B = 20;
	//int C = 0;

	//C = A;
	//A = B;
	//B = C;


	//cout << A << endl << B << endl;

	//srand(time(NULL));

	//for (int i = 0; i < 10; i++)
	//{
	//	int R = rand();
	//	cout << R << endl;
	//}
//}