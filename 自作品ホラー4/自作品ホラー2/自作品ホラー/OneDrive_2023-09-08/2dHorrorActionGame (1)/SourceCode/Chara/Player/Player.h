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
	void Update(float deltatime);

	/// <summary>
	/// �`�揈��
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

