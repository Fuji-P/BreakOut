/*
* �T�C�g��	�F�v���O���~���O����T�C�g �`bituse�`
* �����N	�Fhttps://bituse.info/
*/

#include "pch.h"

class BAR{
private:

	int		gh;			//�O���t�B�b�N�n���h��
	int		x;			//x���W
	int		y;			//y���W
	int		width;		//�摜�̉���
	int		height;		//�摜�̏c��
	bool	endflag;	//�I���t���O�B�I���Ȃ�true

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
	