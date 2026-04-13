#pragma once

struct sBlock {
	int nRow;
	int nCol;
};

struct SPlayer
{
    void setPosition(int x, int y);

    int nRow;
    int nCol;
    //玩家需要存储四个小方块
    sBlock arrPlane[4];
};

