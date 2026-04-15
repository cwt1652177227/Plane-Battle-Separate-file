#include "BulletMgr.h"

void SBulletMgr::addBullet(int nRow, int nCol)
{
	bullet.nRow = nRow;
	bullet.nCol = nCol;
	//¥Ê»Î»›∆˜÷–
	vecBullet.push_back(bullet);
}
