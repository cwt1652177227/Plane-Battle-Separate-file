#include "BulletMgr.h"

void SBulletMgr::addBullet(int nRow, int nCol)
{
	bullet.nRow = nRow;
	bullet.nCol = nCol;
	//¥Ê»Î»›∆˜÷–
	vecBullet.push_back(bullet);
}

void SBulletMgr::update()
{
	for (int n = 0; n < vecBullet.size(); n++) {
		vecBullet[n].update();
	}
	

	
}
