#pragma once
class BackGround
{
public:
	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	BackGround();
	/// <summary>
	/// �f�X�g���N�^
	/// </summary>
	~BackGround();


	/// <summary>
	/// �X�V����
	/// </summary>
	void Update(class Scroll* scroll);

	/// <summary>
	/// �`�揈��
	/// </summary>
	void Draw();

	

private:
	int Handle;
	int x, y;
	

};

