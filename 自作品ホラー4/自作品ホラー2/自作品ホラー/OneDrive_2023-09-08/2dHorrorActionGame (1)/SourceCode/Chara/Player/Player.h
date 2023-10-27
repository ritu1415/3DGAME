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
	void Update(float deltatime);

	/// <summary>
	/// 描画処理
	/// </summary>
	void Draw(class Scroll* scroll);

	int getPlayerX();

	void Playerhit(class Enemy* enemy);

private:
	const int posY = 730;
	float stamina;
	int Handle;
	int x, y;
	float speed;
	const float squatSpeed=40;
	const float nomalSpeed=80;
	const float runSpeed = 200;
	bool hitFlag;


	
	
};

