#pragma once
#include"../SceneBase/SceneBase.h"

class Play:public SceneBase
{
	class Player* player;
	class Enemy* enemy;
	class BackGround* background;
	class Scroll* scroll;
public:
/// <summary>
/// コンストラクタ
/// </summary>
	Play();

	/// <summary>
   /// デストラクタ
   /// </summary>
	~Play();

	/// <summary>
   /// 更新処理
   /// </summary>
	SceneBase* Update(float _deltaTime)override;

	/// <summary>
   /// 描画処理
   /// </summary>
	void Draw()override;




};

