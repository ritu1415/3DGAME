#pragma once
#include"../SceneBase/SceneBase.h"

class Resulte :public SceneBase
{
public:
	/// <summary>
/// �R���X�g���N�^
/// </summary>
	Resulte();

	/// <summary>
/// �f�X�g���N�^
/// </summary>
	~Resulte();

	/// <summary>
///�X�V����
/// </summary>
	SceneBase* Update(float _deltaTime)override;

	/// <summary>
/// �`�揈��
/// </summary>
	void Draw()override;


};

