#pragma once
class Actor
{
public:
	Actor();	//Actor ����
	~Actor();

	void Input();			//�Է� ó��
	void BeginOverlap();	//�浹 ó��
	void Render();			//�׸� �׸���

	void BeingPlay();		//Actor���� ����� �̺�Ʈ
	void Tick();			//�� ������ ���� �̺�Ʈ
};

