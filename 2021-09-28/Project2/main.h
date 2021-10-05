#pragma once
//빙고 게임 함수
void Intialize();//빙고판 초기화
void Shuffle();//빙고판 셔플
void Display();//화면 출력
void ProcessBingo(char Key);
int Check_Bingo();

//엔진 회사가 제공하는 함수
char Input();
bool Process(char a);
void Render();

//개발자가 구현하는 함수
void Cprocess(char Key);
void Crender();
void Terminate();