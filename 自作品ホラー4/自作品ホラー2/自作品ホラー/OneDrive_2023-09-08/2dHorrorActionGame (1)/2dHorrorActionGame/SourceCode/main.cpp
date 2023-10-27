#include<DxLib.h>
#include"Scene/SceneBase/SceneBase.h"
#include"Scene/Title/Title.h"
#include"Time/Time.h"


int WINAPI WinMain(_In_ HINSTANCE,_In_opt_ HINSTANCE,_In_ LPSTR,_In_ int)
{
	//画面モードのセット
	SetGraphMode(1920, 1080, 16);
	ChangeWindowMode(TRUE);
	SetWindowSizeExtendRate(1.0);
	//Dxライブラリー初期化
	if (DxLib_Init() == -1)
	{
		return -1; //エラーが起きたら終わり

	}
	class SceneBase* tmpScene=nullptr;	//一時保存シーン
	SceneBase* nowScene = new Title;			//現在のシーン

	class Time* time = new Time;

	//シーンループ
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)//エスケープキーでループ終了
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

	DxLib_End();//Dxライブラリー終了

	return 0;
}
