#pragma once
#include"../SceneBase/SceneBase.h"

class Play:public SceneBase
{
	class Player* player;
	class Enemy* enemy;
	class BackGround* background;
	class Scroll* scroll;
public:
/// <summary>
/// �R���X�g���N�^
/// </summary>
	Play();

	/// <summary>
   /// �f�X�g���N�^
   /// </summary>
	~Play();

	/// <summary>
   /// �X�V����
   /// </summary>
	SceneBase* Update(float _deltaTime)override;

	/// <summary>
   /// �`�揈��
   /// </summary>
	void Draw()override;




};

