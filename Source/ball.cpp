/*
* サイト名	：プログラミング入門サイト 〜bituse〜
* リンク	：https://bituse.info/
*/

#include "pch.h"
#include "ball.h"

BALL::BALL()
{
	gh = LoadGraph("ball.bmp");

	GetGraphSize(gh, &width, &height);

	//y座標は固定なのでここで設定
	y = 410 - height / 2;

	//最初は真ん中
	x = WIDTH / 2;

	//最初の係数
	dx = 2;
	dy = -2;

	endflag = false;

	soundflag = false;

}

BALL::~BALL()
{
	Destroy();
}

bool BALL::All()
{

	Move();

	//描画処理
	Draw();

	return endflag;
}

void BALL::Draw()
{
	DrawGraph(x - width / 2, y - height / 2, gh, TRUE);
}

void BALL::Move()
{

	//まず音はOFFにしとく
	soundflag = false;

	//移動量を加算
	x += dx;
	y += dy;

	//画面はみ出し処理
	if (x < width / 2) {
		x = width / 2;
		dx *= -1;
		//当たったのでサウンドフラグを立てる
		soundflag = true;
	}
	if (x > WIDTH - width / 2) {
		x = WIDTH - width / 2;
		dx *= -1;
		//当たったのでサウンドフラグを立てる
		soundflag = true;
	}

	if (y < height / 2) {
		y = height / 2;
		dy *= -1;
		//当たったのでサウンドフラグを立てる
		soundflag = true;
	}

	//下にはみ出たらゲームオーバー
	if (y > HEIGHT) {
		endflag = true;
	}
}

int BALL::GetX()
{
	return x;
}

int BALL::GetY()
{
	return y;
}

void BALL::SetDX(
	int	x
)
{
	dx = x;
}

void BALL::SetDY(
	int	y
)
{
	dy= y;
}

int BALL::GetDX()
{
	return dx;
}


int BALL::GetDY()
{
	return dy;
}


int BALL::GetWidth()
{
	return width;
}

int BALL::GetHeight()
{
	return height;
}

bool BALL::GetSoundflag()
{
	return soundflag;
}

void BALL::Destroy()
{

}