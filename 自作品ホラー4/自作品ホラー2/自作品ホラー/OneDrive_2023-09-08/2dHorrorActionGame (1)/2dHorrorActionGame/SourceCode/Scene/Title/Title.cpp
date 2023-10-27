#include "Title.h"
#include"../Play/Play.h"

Title::Title()
//変数の初期化
	:SceneBase()
	
{
	Handle = LoadGraph("../img/Title1.jpg");
}

Title::~Title()
{
	//ハンドルに中身が入っていたら
	if (Handle != -1)
	{
		//中身を削除
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
	DrawFormatString(x, y, GetColor(255, 255, 255), "タイトルシーン");
}

