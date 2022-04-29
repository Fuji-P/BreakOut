/*
* サイト名	：プログラミング入門サイト ～bituse～
* リンク	：https://bituse.info/
*/

#include "pch.h"
#include "bar.h"
#include "ball.h"
#include "block.h"

class CONTROL{
private:

	BAR* bar;				//バークラスのポインタ
	BALL* ball;				//ボールクラスのポインタ
	BLOCK* block[12];		//ブロッククラスのポインタ

	int		bdx;			//ボールの座標
	int		bdy;			//ボールの座標
	int		blx;			//バーの座標
	int		bly;			//バーの座標
	int		bkx;			//ブロックの座標
	int		bky;			//ブロックの座標
	int		bdwidth;		//ボールの画像の幅と高さ
	int		bdheight;		//ボールの画像の幅と高さ
	int		blwidth;		//バーの画像の幅と高さ
	int		blheight;		//バーの画像の幅と高さ
	int		bkwidth;		//ブロックの画像の幅と高さ
	int		bkheight;		//ブロックの画像の幅と高さ
	int		bh;				//バウンド音のサウンドハンドル
	int		dh;				//ぶつかり音のサウンドハンドル
	bool	boundflag;		//バウンド音とぶつかり音のフラグ
	bool	demolishflag;	//バウンド音とぶつかり音のフラグ

private:
	void HitCheckBallAndBar();
	void HitCheckBallAndBlock();
	void SoundPlay();

public:
	CONTROL();
	~CONTROL();
	bool All();
};


	