#pragma once
class Enemy
{
public:
	///<summary>
	///コンストラクタ
	///</summary>
	Enemy();

	///<summary>
	///デストラクタ
	///</summary>
	~Enemy();

	///<summary>
	///更新処理
	///</summary>
	void Update(int num);

	///<summary>
	///描画処理
	///</summary>
	void Draw(class Scroll*scroll);

	int GetEmyX() { return x; }

private:
	const int posY = 830;
	int Handle;
	int x, y;
	int speed;
	

};

