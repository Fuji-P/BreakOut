/*
* �T�C�g��	�F�v���O���~���O����T�C�g �`bituse�`
* �����N	�Fhttps://bituse.info/
*/

#include "pch.h"

class BLOCK{
private:

	static	int		gh;			//�O���t�B�b�N�n���h��(�S�������摜�Ȃ̂ŐÓI�ϐ��ɂ��ċ��L)
			int		x;			//���W
			int		y;			//���W
			int		width;		//�c
			int		height;		//����
			int		count;		//�t�F�[�h�`��p�J�E���g
			bool	endflag;	//�u���b�N�����Ă邩���ĂȂ����̃t���O�B

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
