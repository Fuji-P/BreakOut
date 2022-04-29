/*
* サイト名	：プログラミング入門サイト ～bituse～
* リンク	：https://bituse.info/
*/

#include "pch.h"

class BAR{
private:

	int		gh;			//グラフィックハンドル
	int		x;			//x座標
	int		y;			//y座標
	int		width;		//画像の横幅
	int		height;		//画像の縦幅
	bool	endflag;	//終了フラグ。終了ならtrue

private:
	void Draw();
	void KeyGet();
	void Destroy();

public:
	BAR();
	~BAR();
	bool All();
	int GetX();
	int GetY();
	int GetWidth();
	int GetHeight();
};
	