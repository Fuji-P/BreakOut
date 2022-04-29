/*
* �T�C�g��	�F�v���O���~���O����T�C�g �`bituse�`
* �����N	�Fhttps://bituse.info/
*/

#include "pch.h"
#include "bar.h"
#include "ball.h"
#include "block.h"

class CONTROL{
private:

	BAR* bar;				//�o�[�N���X�̃|�C���^
	BALL* ball;				//�{�[���N���X�̃|�C���^
	BLOCK* block[12];		//�u���b�N�N���X�̃|�C���^

	int		bdx;			//�{�[���̍��W
	int		bdy;			//�{�[���̍��W
	int		blx;			//�o�[�̍��W
	int		bly;			//�o�[�̍��W
	int		bkx;			//�u���b�N�̍��W
	int		bky;			//�u���b�N�̍��W
	int		bdwidth;		//�{�[���̉摜�̕��ƍ���
	int		bdheight;		//�{�[���̉摜�̕��ƍ���
	int		blwidth;		//�o�[�̉摜�̕��ƍ���
	int		blheight;		//�o�[�̉摜�̕��ƍ���
	int		bkwidth;		//�u���b�N�̉摜�̕��ƍ���
	int		bkheight;		//�u���b�N�̉摜�̕��ƍ���
	int		bh;				//�o�E���h���̃T�E���h�n���h��
	int		dh;				//�Ԃ��艹�̃T�E���h�n���h��
	bool	boundflag;		//�o�E���h���ƂԂ��艹�̃t���O
	bool	demolishflag;	//�o�E���h���ƂԂ��艹�̃t���O

private:
	void HitCheckBallAndBar();
	void HitCheckBallAndBlock();
	void SoundPlay();

public:
	CONTROL();
	~CONTROL();
	bool All();
};


	