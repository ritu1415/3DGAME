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
	//���X�N���[��
	if (player->getPlayerX() - 64 < scrollX + scrMinW)
	{
		dx = player->getPlayerX() - 64 - (scrollX + scrMinW);

		
	}

	//�����߂�X
	scrollX += dx;

	//�E�X�N���[�����W�ő�l�܂ł�����
	if (scrollX > scrMaxX)
	{
		//�X�N���[����~
		scrollX = scrMaxX;
	}
	//���X�N���[��
	else if (scrollX < scrMinX)
	{
		scrollX = scrMinX;
	}
}

int Scroll::GetDrawOffSetX()
{
	return static_cast<int>(scrollX);
}
