#pragma once
class Actor
{
public:
	Actor();	//Actor 생성
	~Actor();

	void Input();			//입력 처리
	void BeginOverlap();	//충돌 처리
	void Render();			//그림 그리기

	void BeingPlay();		//Actor최초 실행시 이벤트
	void Tick();			//매 프레임 실행 이벤트
};

