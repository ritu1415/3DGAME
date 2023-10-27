#pragma once

#include"DxLib.h"
class Scroll
{
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	Scroll();
	/// <summary>
	/// デストラクタ
	/// </summary>
	~Scroll();

	// <summary>
	/// スクロールの更新処理
	/// </summary>
	/// <param name="_deltaTime">1フレームの経過時間</param>
	/// <param name="plyPos">プレイヤーの座標</param>
	void Update(float _delegateTime,class Player* player);

	/// <summary>
	/// スクロールの描画オフセットXを取得
	/// </summary>
	/// <returns>X方向オフセット</returns>
	int GetDrawOffSetX();

private:

	//スクロールX
	float scrollX;
	//右スクロール
	const float scrMaxW = 1920 / 40 * 20;

	//左スクロール
	const float scrMinW = 1920 / 40 * 15;

	//X方向スクロール最大値
	float scrMaxX;

	//X方向スクロール最小値
	float scrMinX;

	//押し戻し座標
	float dx;

};

