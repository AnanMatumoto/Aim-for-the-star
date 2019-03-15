#pragma once
#include "Common.h"


// �e�N�X�`���T�C�Y����X���W�p
const float TEXTURE_SIZE_X = 1.f;
// �e�N�X�`���T�C�Y����Y���W�p
const float TEXTURE_SIZE_Y = 1.f;

// �d�͕���
const float GRAVITY = 0.01f;
// X�����̈ړ��ʁi���E�ړ��j
const float X_ADD = 2.f;
// Y�����̈ړ��ʁi�W�����v�j
const float Y_ADD = -1.5f;
// �j���C���^�[�o��
const float SWIM_INTERVAL = 90.f;

class PlayerBase {
public:
	// �R���X�g���N�^
	PlayerBase();
	// �f�X�g���N�^
	virtual ~PlayerBase() {}

	// �X�V����
	virtual void Update() = 0;
	// HACK�F���@�P�A�Q�̏��������Ă���̂Ŋ��N���X�ł܂Ƃ߂���

	// �`�揈��
	virtual void Draw() = 0;
	
protected:
	// ���@����
	//virtual void Control() = 0;

	// �d�͕���
	void AddGravity();

	// �j���i�W�����v�j
	void SwimUp();

	// X�����ړ��ATRUE�ŉE�ֈړ�
	void XMove(bool move_right);
	
	// �v���C���[X���W
	float pos_x;
	// �v���C���[Y���W
	float pos_y;
	// HACK�Fpos_x,y��private�ɂ�����
	float speed;

	float interval_count;
private:
	
};
