#include "Player.h"
#include"stdafx.h"

void SPlayer::setPosition(int x, int y)
{
	arrPlane[0].nRow = x;
	arrPlane[0].nCol = y;
	arrPlane[1].nRow = x;
	arrPlane[1].nCol = y+1;
	arrPlane[2].nRow = x;
	arrPlane[2].nCol = y-1;
	arrPlane[3].nRow = x-1;
	arrPlane[3].nCol = y;
	nRow = x;
	nCol = y;
}
