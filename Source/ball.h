/*
* �T�C�g��	�F�v���O���~���O����T�C�g �`bituse�`
* �����N	�Fhttps://bituse.info/
*/

#include "pch.h"

class BALL{
private:

	int		gh;			//�O���t�B�b�N�n���h��
	int		x;			//x���W
	int		y;			//y���W
	int		dx;			//x�̈ړ���
	int		dy;			//y�̈ړ���
	int		width;		//�摜�̉���
	int		height;		//�摜�̏c��
	bool	endflag;	//�Q�[���[�I�[�o�[�t���O
	bool	soundflag;	//����炷���ǂ����̃t���O

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
