/*
* サイト名	：プログラミング入門サイト 〜bituse〜
* リンク	：https://bituse.info/
*/

#include "pch.h"
#include "block.h"

int BLOCK::gh = -1;

BLOCK::BLOCK(
	const	char*	filename,
			int		x,
			int		y
)
{
	//最初しか読み込まない。
	if (gh == -1) {
		gh = LoadGraph("block.bmp");
	}

	GetGraphSize(gh, &width, &height);

	endflag = false;

	this->x = x;
	this->y = y;

	count = 0;
}

void BLOCK::All()
{
	Draw();
}

void BLOCK::Draw()
{
	//ブロックが壊れてないときだけ描画
	if (!endflag) {
		DrawGraph(x - width / 2, y - height / 2, gh, FALSE);
	}
	else {
		if (count < 40) {
			//透過度を指定
			SetDrawBlendMode(DX_BLENDMODE_ALPHA, (255 / 40) * (40 - count));
			//描画
			DrawGraph(x - width / 2, y - height / 2, gh, FALSE);
			//設定を戻す
			SetDrawBlendMode(DX_BLENDMODE_NOBLEND, 0);
			++count;
		}
	}
}

int BLOCK::GetX()
{
	return x;
}
int BLOCK::GetY()
{
	return y;
}
int BLOCK::GetWidth()
{
	return width;
}
int BLOCK::GetHeight()
{
	return height;
}

void BLOCK::SetFlag(
	bool flag
)
{
	endflag = flag;
}

bool BLOCK::GetFlag()
{
	return endflag;
}