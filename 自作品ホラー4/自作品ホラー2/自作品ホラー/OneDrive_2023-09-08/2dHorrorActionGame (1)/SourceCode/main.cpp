#include<DxLib.h>
#include"Scene/SceneBase/SceneBase.h"
#include"Scene/Title/Title.h"
#include"Time/Time.h"


int WINAPI WinMain(_In_ HINSTANCE,_In_opt_ HINSTANCE,_In_ LPSTR,_In_ int)
{
	//��ʃ��[�h�̃Z�b�g
	SetGraphMode(1920, 1080, 16);
	ChangeWindowMode(TRUE);
	SetWindowSizeExtendRate(1.0);
	//Dx���C�u�����[������
	if (DxLib_Init() == -1)
	{
		return -1; //�G���[���N������I���

	}
	class SceneBase* tmpScene=nullptr;	//�ꎞ�ۑ��V�[��
	SceneBase* nowScene = new Title;			//���݂̃V�[��

	class Time* time = new Time;

	//�V�[�����[�v
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)//�G�X�P�[�v�L�[�Ń��[�v�I��
	{
		time->Update();

		tmpScene = nowScene->Update(time->DeltaTime());
		if (nowScene != tmpScene)
		{
			delete nowScene;
			nowScene = tmpScene;
		}

		ClearDrawScreen();
		nowScene->Draw();

		ScreenFlip();
	}

	DxLib_End();//Dx���C�u�����[�I��

	return 0;
}
