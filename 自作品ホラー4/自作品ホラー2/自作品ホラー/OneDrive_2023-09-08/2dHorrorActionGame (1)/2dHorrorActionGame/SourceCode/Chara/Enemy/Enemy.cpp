#include"Enemy.h"
#include"../Player/Player.h"
#include"../../Scene/Scroll/Scroll.h"
#include"DxLib.h"
#include<math.h>

Enemy::Enemy()
	:Handle(-1)
	,x(50)
	, y(posY)
	, speed(15)
{
	Handle = LoadGraph("../img/è¨à´ñÇ.png");
}

Enemy::~Enemy()
{
	if (Handle = -1)
	{
		DeleteGraph(Handle);
		Handle = -1;
	}
}

void Enemy::Update(int num)
{


		if (abs(x - num) < 850)
		{
			
			if (x < num)
			{
				x += 6;
			}
			else
			{
				x -= 6;
			}
		}

	
	

}

void Enemy::Draw(Scroll* scroll)
{
	DrawExtendGraph(x - scroll->GetDrawOffSetX() , y, (x + 32 * 3)-scroll->GetDrawOffSetX(), y + 32 * 3, Handle, TRUE);
	
}


