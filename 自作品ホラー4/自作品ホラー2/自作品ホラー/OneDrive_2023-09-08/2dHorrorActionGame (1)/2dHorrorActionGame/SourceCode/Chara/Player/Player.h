#pragma once
class Player
{
public:
	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	Player();
	/// <summary>
	/// �f�X�g���N�^
	/// </summary>
	~Player();


	/// <summary>
	/// �X�V����
	/// </summary>
	void Update();

	/// <summary>
	/// �`�揈��
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

