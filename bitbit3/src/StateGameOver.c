#include "Banks/SetBank2.h"
#include "main.h"

#include <gb/gb.h>
#include "ZGBMain.h"
#include "Scroll.h"
#include "Keys.h"
#include "Music.h"

#include "../res/src/gameovertiles.h"
#include "../res/src/gameovermap.h"

DECLARE_MUSIC(gameover);

void Start_StateGameOver() {
	InitScroll(&gameover, 0, 0);
	SHOW_BKG;

	PlayMusic(gameover, 0);
}

void Update_StateGameOver() {
	if(KEY_TICKED(J_START)) {
		SetState(StateMenu);
	}
}