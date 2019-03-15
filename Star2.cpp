#include "Star2.h"

Star2::Star2() {
	// �ʒu������
	pos_x = (float)WINDOW_W / 2.f + 100.f;
	pos_y = (float)WINDOW_H / 2.f;
	speed = 0.f;
	interval_count = SWIM_INTERVAL;
}

Star2::~Star2() {

}


void Star2::Update() {
	Keybord& kb = Keybord::getInterface();

	++interval_count;
	
	// �j���i�W�����v�j
	if (kb.press('N')&& interval_count >= SWIM_INTERVAL) {
		SwimUp();
		interval_count = 0;
	}
	else {
		// �d�͕���
		AddGravity();
	}

	// ���E�ړ�
	// ��
	if (kb.on(VK_LEFT)) {
		XMove(false);
	}
	// �E
	if (kb.on(VK_RIGHT)) {
		XMove(true);
	}
}

void Star2::Draw() {
	Texture::Draw2D("Texture/starfish_sample2.png", pos_x, pos_y, TEXTURE_SIZE_X, TEXTURE_SIZE_Y, 0.f, 0.5f, 0.5f);
	// HACK:��Z�����Ŋp�x�ύX
}
