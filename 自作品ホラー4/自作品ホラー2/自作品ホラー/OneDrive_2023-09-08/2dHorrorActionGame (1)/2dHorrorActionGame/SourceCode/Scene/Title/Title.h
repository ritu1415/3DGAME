#pragma once
#include"../SceneBase/SceneBase.h"

class Title :public SceneBase
{
public:
/// <summary>
/// �R���X�g���N�^
/// </summary>
	Title();

/// <summary>
/// �f�X�g���N�^
/// </summary>
	~Title();

/// <summary>
/// �X�V����
/// </summary>
	SceneBase* Update(float _deltaTime)override;

/// <summary>
/// �`�揈��
/// </summary>
	void Draw()override;


	
};

