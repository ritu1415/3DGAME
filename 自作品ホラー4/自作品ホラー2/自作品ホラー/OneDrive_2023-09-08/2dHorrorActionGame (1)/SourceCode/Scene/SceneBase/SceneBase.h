#pragma once
#include<DxLib.h>

class SceneBase
{
public:

	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	SceneBase();

	/// <summary>
	/// �f�X�g���N�^
	/// </summary>
	virtual ~SceneBase() {};

	/// <summary>
	/// �X�V����
	/// </summary>
	virtual SceneBase* Update(float _deltaTime)=0;

	/// <summary>
	/// �`�揈��
	/// </summary>
	virtual void Draw()=0;


protected:
	int Handle;
	int x, y;

};

