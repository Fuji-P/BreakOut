/*
* サイト名	：プログラミング入門サイト ～bituse～
* リンク	：https://bituse.info/
*/

#include "pch.h"

class BALL{
private:

	int		gh;			//グラフィックハンドル
	int		x;			//x座標
	int		y;			//y座標
	int		dx;			//xの移動量
	int		dy;			//yの移動量
	int		width;		//画像の横幅
	int		height;		//画像の縦幅
	bool	endflag;	//ゲームーオーバーフラグ
	bool	soundflag;	//音を鳴らすかどうかのフラグ

private:
	void Draw();
	void Destroy();
	void Move();

public:
	BALL();
	~BALL();
	bool All();
	bool GetSoundflag();
	int GetX();
	int GetY();
	int GetDX();
	int GetDY();
	int GetWidth();
	int GetHeight();
	void SetDX(
		int	x
	);
	void SetDY(
		int	y
	);
};
