/*
* �T�C�g��	�F�v���O���~���O����T�C�g �`bituse�`
* �����N	�Fhttps://bituse.info/
*/

#include <windows.h>

#define MSG(m) {\
	MessageBox(NULL,m,"���b�Z�[�W",MB_OK);}

#define MSGPLUS(m,...) {\
	char buf[100];\
	sprintf(buf,m,__VA_ARGS__);\
	MessageBox(NULL,buf,"���b�Z�[�W",MB_OK);}

#define WIDTH	640
#define HEIGHT	480
#define SPEED	4

//�L�[������Ԋi�[�ϐ�
extern char key[256];