#include "Scroll.h"
#include"../../Chara/Player/Player.h"

Scroll::Scroll()
	:scrollX(0)
	, dx(0)
{
	scrMaxX = 1920;
	scrMinX = 0;
}

Scroll::~Scroll()
{

}

void Scroll::Update(float _deltaTime, Player* player)
{
	dx = 0;
	if (player->getPlayerX() + 64 > scrollX + scrMaxW)
	{
		dx = player->getPlayerX() + 64 - (scrollX + scrMaxW);
	}
	//左スクロール
	if (player->getPlayerX() - 64 < scrollX + scrMinW)
	{
		dx = player->getPlayerX() - 64 - (scrollX + scrMinW);

		
	}

	//押し戻しX
	scrollX += dx;

	//右スクロール座標最大値まできたら
	if (scrollX > scrMaxX)
	{
		//スクロール停止
		scrollX = scrMaxX;
	}
	//左スクロール
	else if (scrollX < scrMinX)
	{
		scrollX = scrMinX;
	}
}

int Scroll::GetDrawOffSetX()
{
	return static_cast<int>(scrollX);
}
