#include "Play.h"
#include"../../Chara/Player/Player.h"
#include"../../Chara/Enemy/Enemy.h"
#include"../../Scene/background/background.h"
#include"../../Time/Time.h"
#include "../../Scene/Scroll/Scroll.h"

class Scroll;

Play::Play()
	:SceneBase()
{  
	LoadGraph("");
	player = new Player;
	enemy = new Enemy;
	background = new BackGround;
	scroll = new Scroll;
}

Play::~Play()
{
	if (Handle != -1)
	{
		DeleteGraph(Handle);
		Handle = -1;
	}
	else if(Handle != -1)
	{
		DeleteGraph(Handle);
		Handle = -1;
	}
	else if (Handle != -1)
	{
		DeleteGraph(Handle);
		Handle = -1;
	}
	
	
}

SceneBase* Play::Update(float _deltaTime)
{
	player->Update(_deltaTime);
	enemy->Update(player->getPlayerX());
	background->Update(scroll);
	scroll->Update(_deltaTime, player);
	player->Playerhit(enemy);

	return this;
}


void Play::Draw()
{
	background->Draw();
	player->Draw(scroll);
	enemy->Draw(scroll);

	DrawGraph(x, y, Handle, TRUE);
	DrawGraph(x, y, Handle, TRUE);
	DrawFormatString(0, 0, GetColor(255, 255, 255), "プレイシーン\n操作方法\nD右移動\nA左移動\nShift走る\nCtrlゆっくり歩く");
}