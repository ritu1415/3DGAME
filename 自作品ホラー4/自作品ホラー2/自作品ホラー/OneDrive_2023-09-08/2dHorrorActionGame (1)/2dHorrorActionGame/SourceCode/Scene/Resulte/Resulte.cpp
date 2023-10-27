#include "Resulte.h"

Resulte::Resulte()
	:SceneBase()
{
	LoadGraph("");
}

Resulte::~Resulte()
{
	if (Handle != -1)
	{
		DeleteGraph(Handle);

		Handle = -1;
	}
}

SceneBase* Resulte::Update(float _deltaTime)
{
	return this;
}

void Resulte::Draw()
{
	DrawGraph(x, y, Handle, TRUE);
	DrawFormatString(0, 0, GetColor(255, 255, 255), "リザルトシーン");
}