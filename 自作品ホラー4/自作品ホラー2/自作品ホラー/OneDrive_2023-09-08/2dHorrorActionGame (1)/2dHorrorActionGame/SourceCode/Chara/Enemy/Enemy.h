#pragma once
class Enemy
{
public:
	///<summary>
	///�R���X�g���N�^
	///</summary>
	Enemy();

	///<summary>
	///�f�X�g���N�^
	///</summary>
	~Enemy();

	///<summary>
	///�X�V����
	///</summary>
	void Update(int num);

	///<summary>
	///�`�揈��
	///</summary>
	void Draw(class Scroll*scroll);

	int GetEmyX() { return x; }

private:
	const int posY = 830;
	int Handle;
	int x, y;
	int speed;
	

};

