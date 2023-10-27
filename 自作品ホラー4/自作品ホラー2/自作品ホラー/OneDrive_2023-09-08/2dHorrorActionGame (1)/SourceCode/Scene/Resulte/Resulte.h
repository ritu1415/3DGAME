#pragma once
#include"../SceneBase/SceneBase.h"

class Resulte :public SceneBase
{
public:
	/// <summary>
/// コンストラクタ
/// </summary>
	Resulte();

	/// <summary>
/// デストラクタ
/// </summary>
	~Resulte();

	/// <summary>
///更新処理
/// </summary>
	SceneBase* Update(float _deltaTime)override;

	/// <summary>
/// 描画処理
/// </summary>
	void Draw()override;


};

