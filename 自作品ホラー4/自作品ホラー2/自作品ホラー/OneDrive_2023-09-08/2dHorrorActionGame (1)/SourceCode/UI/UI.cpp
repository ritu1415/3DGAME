#include "UI.h"
#include<DxLib.h>

UI::UI()
	:Handle(0)
	,x(345)
	,y(345)
{
	Handle = LoadGraph("../img/Door.png");
}

UI::~UI()
{
	if (Handle = -1)
	{
		DeleteGraph(Handle);
		Handle = -1;
	}
}

void UI::Update()
{

}
