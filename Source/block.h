/*
* サイト名	：プログラミング入門サイト ～bituse～
* リンク	：https://bituse.info/
*/

#include "pch.h"

class BLOCK{
private:

	static	int		gh;			//グラフィックハンドル(全部同じ画像なので静的変数にして共有)
			int		x;			//座標
			int		y;			//座標
			int		width;		//縦
			int		height;		//横幅
			int		count;		//フェード描画用カウント
			bool	endflag;	//ブロックが壊れてるか壊れてないかのフラグ。

private:
	void Draw();

public:
	BLOCK(
		const	char*	filename,
				int		x,
				int		y
	);
	void All();
	void SetFlag(
				bool	flag
	);
	int GetX();
	int GetY();
	int GetWidth();
	int GetHeight();
	bool GetFlag();
};
