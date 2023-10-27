#pragma once
class Player
{
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	Player();
	/// <summary>
	/// デストラクタ
	/// </summary>
	~Player();


	/// <summary>
	/// 更新処理
	/// </summary>
	void Update();

	/// <summary>
	/// 描画処理
	/// </summary>
	void Draw(class Scroll* scroll);

	int getPlayerX();

	void Playerhit(class Enemy* enemy);

private:
	const int posY = 730;
	int Handle;
	int x, y;
	int speed;
	const int squatSpeed=3;
	const int nomalSpeed=5;
	const int runSpeed = 8;
	bool hitFlag;


	
	
};

