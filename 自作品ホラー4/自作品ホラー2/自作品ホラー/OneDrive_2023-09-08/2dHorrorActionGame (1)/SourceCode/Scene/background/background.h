#pragma once
class BackGround
{
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	BackGround();
	/// <summary>
	/// デストラクタ
	/// </summary>
	~BackGround();


	/// <summary>
	/// 更新処理
	/// </summary>
	void Update(class Scroll* scroll);

	/// <summary>
	/// 描画処理
	/// </summary>
	void Draw();

	

private:
	int Handle;
	int x, y;
	

};

