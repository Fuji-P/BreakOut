/*
* �T�C�g��	�F�v���O���~���O����T�C�g �`bituse�`
* �����N	�Fhttps://bituse.info/
*/

#include "pch.h"
#include "control.h"

//�L�[�擾�p�z��
char key[256];

int main() {
}

// �v���O������ WinMain ����n�܂�܂�
int WINAPI WinMain(
	HINSTANCE	hInstance,
	HINSTANCE	hPrevInstance,
	LPSTR		lpCmdLine,
	int			nCmdShow
)
{
#ifdef _DEBUG
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	//_CrtSetBreakAlloc( 70 );
#endif

	ChangeWindowMode(TRUE);

	//DX���C�u����������
	if(DxLib_Init() == -1){
		// �G���[���N�����璼���ɏI��
		return -1;
	}

	//����ʂɕ`��
	SetDrawScreen(DX_SCREEN_BACK);

	//�L�[�{�[�h�̏�Ԃ��擾
	CONTROL *control = new CONTROL;

	while(
		ScreenFlip() == 0 &&
		ProcessMessage() == 0 &&
		ClearDrawScreen() == 0 &&
		GetHitKeyStateAll(key) == 0
		){

		//�Q�[���I�[�o�[��true��Ԃ�
		if(control->All()){
			break;
		}
	}

	//DX���C�u�����I��
	DxLib_End();

	delete control;

	// �\�t�g�̏I��
	return 0;
}

