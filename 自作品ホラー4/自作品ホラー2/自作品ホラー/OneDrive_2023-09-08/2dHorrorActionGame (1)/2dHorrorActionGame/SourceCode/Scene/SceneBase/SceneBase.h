#pragma once
#include<DxLib.h>

class SceneBase
{
public:

	/// <summary>
	/// コンストラクタ
	/// </summary>
	SceneBase();

	/// <summary>
	/// デストラクタ
	/// </summary>
	virtual ~SceneBase() {};

	/// <summary>
	/// 更新処理
	/// </summary>
	virtual SceneBase* Update(float _deltaTime)=0;

	/// <summary>
	/// 描画処理
	/// </summary>
	virtual void Draw()=0;


protected:
	int Handle;
	int x, y;

};

