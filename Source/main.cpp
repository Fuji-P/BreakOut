/*
* サイト名	：プログラミング入門サイト ～bituse～
* リンク	：https://bituse.info/
*/

#include "pch.h"
#include "control.h"

//キー取得用配列
char key[256];

int main() {
}

// プログラムは WinMain から始まります
int WINAPI WinMain(
	HINSTANCE	hInstance,
	HINSTANCE	hPrevInstance,
	LPSTR		lpCmdLine,
	int			nCmdShow
)
{
#ifdef _DEBUG
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	//_CrtSetBreakAlloc( 70 );
#endif

	ChangeWindowMode(TRUE);

	//DXライブラリ初期化
	if(DxLib_Init() == -1){
		// エラーが起きたら直ちに終了
		return -1;
	}

	//裏画面に描画
	SetDrawScreen(DX_SCREEN_BACK);

	//キーボードの状態を取得
	CONTROL *control = new CONTROL;

	while(
		ScreenFlip() == 0 &&
		ProcessMessage() == 0 &&
		ClearDrawScreen() == 0 &&
		GetHitKeyStateAll(key) == 0
		){

		//ゲームオーバーでtrueを返す
		if(control->All()){
			break;
		}
	}

	//DXライブラリ終了
	DxLib_End();

	delete control;

	// ソフトの終了
	return 0;
}

