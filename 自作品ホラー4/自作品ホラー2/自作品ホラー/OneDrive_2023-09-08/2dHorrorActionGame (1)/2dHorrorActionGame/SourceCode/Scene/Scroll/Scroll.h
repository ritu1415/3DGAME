#pragma once

#include"DxLib.h"
class Scroll
{
public:
	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	Scroll();
	/// <summary>
	/// �f�X�g���N�^
	/// </summary>
	~Scroll();

	// <summary>
	/// �X�N���[���̍X�V����
	/// </summary>
	/// <param name="_deltaTime">1�t���[���̌o�ߎ���</param>
	/// <param name="plyPos">�v���C���[�̍��W</param>
	void Update(float _delegateTime,class Player* player);

	/// <summary>
	/// �X�N���[���̕`��I�t�Z�b�gX���擾
	/// </summary>
	/// <returns>X�����I�t�Z�b�g</returns>
	int GetDrawOffSetX();

private:

	//�X�N���[��X
	float scrollX;
	//�E�X�N���[��
	const float scrMaxW = 1920 / 40 * 20;

	//���X�N���[��
	const float scrMinW = 1920 / 40 * 15;

	//X�����X�N���[���ő�l
	float scrMaxX;

	//X�����X�N���[���ŏ��l
	float scrMinX;

	//�����߂����W
	float dx;

};

