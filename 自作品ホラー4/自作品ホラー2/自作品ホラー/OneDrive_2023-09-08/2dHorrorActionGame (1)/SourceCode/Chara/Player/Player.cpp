#include "Player.h"
#include"../Enemy/Enemy.h"
#include "../../Scene/Scroll/Scroll.h"
#include<DxLib.h>

Player::Player()
	:Handle(0)
	, x(1920/3)
	, y(posY)
	,stamina(4)
	,speed(nomalSpeed)
{
	Handle=LoadGraph("img/Player.png");

}

Player::~Player()
{
	if (Handle = -1)
	{
		DeleteGraph(Handle);
		Handle = -1;
	}
}

void Player::Update(float deltaTime)
{
	

	if (CheckHitKey(KEY_INPUT_A) != 0)
	{
		x -= speed*deltaTime;
		
	}
	if (CheckHitKey(KEY_INPUT_D) != 0)
	{
		x += speed * deltaTime;
	
	}


	if (CheckHitKey(KEY_INPUT_LCONTROL) != 0)
	{
		 speed=squatSpeed ;
	}
	else if (CheckHitKey(KEY_INPUT_LSHIFT) != 0)
	{
		stamina -= deltaTime;

		if (stamina >= 2.0f)
		{
			speed = runSpeed;
		}
		else
		{
			speed = nomalSpeed;
		}
	}
	else
	{
		speed = nomalSpeed;
		stamina = 4;
	}

	if (CheckHitKey(KEY_INPUT_Q) == 0)
	{

	}

	if (CheckHitKey(KEY_INPUT_F)==0)
	{

	}
}

void Player::Draw(Scroll* scroll)
{
	DrawExtendGraph(x-scroll->GetDrawOffSetX(), y, (x + 32 * 4)-scroll->GetDrawOffSetX(), y + 32 * 6, Handle, TRUE);
	
	if (hitFlag)
	{
		DrawFormatString(170, 170, GetColor(255, 255, 255), "HIT");
	}
	DrawFormatString(50, 200, GetColor(255, 255, 255), "%f",stamina);
}

int Player::getPlayerX()
{
	return x;
}

void Player::Playerhit(class Enemy* enemy)
{
	if (x < enemy->GetEmyX())
	{
		hitFlag= false;
	}
	else
	{
		hitFlag= true;
	}
}
