#include "Star1.h"

Star1::Star1() {
	// �ʒu������
	pos_x = (float)WINDOW_W / 2.f - 100.f;
	pos_y = (float)WINDOW_H / 2.f;
	speed = 0.f;
	interval_count = SWIM_INTERVAL;
}

Star1::~Star1() {

}

void Star1::Update() {
	Keybord& kb = Keybord::getInterface();

	++interval_count;

	// �j���i�W�����v�j
	if (kb.press('V') && interval_count >= SWIM_INTERVAL) {
		SwimUp();
		interval_count = 0;
	}
	else {
		// �d�͕���
		AddGravity();
	}

	// ���E�ړ�
	// ��
	if ((kb.on('A'))) {
		XMove(false);
	}
	// �E
	if ((kb.on('D'))) {
		XMove(true);
	}
}

void Star1::Draw() {
	Texture::Draw2D("Texture/starfish_sample1.png", pos_x, pos_y, TEXTURE_SIZE_X, TEXTURE_SIZE_Y, 0.5f, 0.5f);
	// HACK:��Z�����Ŋp�x�ύX
}
