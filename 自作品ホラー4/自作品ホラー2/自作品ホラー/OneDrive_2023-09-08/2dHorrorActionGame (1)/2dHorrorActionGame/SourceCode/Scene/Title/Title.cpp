#include "Title.h"
#include"../Play/Play.h"

Title::Title()
//�ϐ��̏�����
	:SceneBase()
	
{
	Handle = LoadGraph("../img/Title1.jpg");
}

Title::~Title()
{
	//�n���h���ɒ��g�������Ă�����
	if (Handle != -1)
	{
		//���g���폜
		DeleteGraph(Handle);

		Handle = -1;
	}
}

SceneBase* Title::Update(float _deltaTime)
{
	if (CheckHitKey(KEY_INPUT_1) == 1)
	{
		return new Play;
	}

	return this;
}

void Title::Draw()
{
	DrawGraph(x, y, Handle, TRUE);
	DrawFormatString(x, y, GetColor(255, 255, 255), "�^�C�g���V�[��");
}

