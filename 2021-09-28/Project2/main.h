#pragma once
//���� ���� �Լ�
void Intialize();//������ �ʱ�ȭ
void Shuffle();//������ ����
void Display();//ȭ�� ���
void ProcessBingo(char Key);
int Check_Bingo();

//���� ȸ�簡 �����ϴ� �Լ�
char Input();
bool Process(char a);
void Render();

//�����ڰ� �����ϴ� �Լ�
void Cprocess(char Key);
void Crender();
void Terminate();