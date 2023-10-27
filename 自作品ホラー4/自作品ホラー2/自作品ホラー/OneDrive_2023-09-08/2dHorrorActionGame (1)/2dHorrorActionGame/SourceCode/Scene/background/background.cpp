#include "BackGround.h"
#include "../Scroll/Scroll.h"
#include"DxLib.h"

BackGround::BackGround()
	:Handle(-1)
	,x(0)
	,y(0)
{
	Handle = LoadGraph("../img/map1.png");
	
}

BackGround::~BackGround()
{
	if (Handle = -1)
	{
		DeleteGraph(Handle);
		Handle = -1;
	}
}

void BackGround::Update(Scroll* scroll)
{
	x = -scroll->GetDrawOffSetX();
}



void BackGround::Draw()
{
	
		DrawGraph(x, y, Handle, TRUE);
		DrawGraph(x+1920, y, Handle, TRUE);
}