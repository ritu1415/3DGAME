#pragma once
#include"../SceneBase/SceneBase.h"

class Title :public SceneBase
{
public:
/// <summary>
/// コンストラクタ
/// </summary>
	Title();

/// <summary>
/// デストラクタ
/// </summary>
	~Title();

/// <summary>
/// 更新処理
/// </summary>
	SceneBase* Update(float _deltaTime)override;

/// <summary>
/// 描画処理
/// </summary>
	void Draw()override;


	
};

