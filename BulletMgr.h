#pragma once
#include"Bullet.h"
#include<vector>
using namespace std;
struct SBulletMgr
{
	//添加子弹的函数
	void addBullet(int nRow,int nCol);
	//子弹的数据更新
	void update();
	//容器存储子弹
	vector<SBullet>vecBullet;
	//子弹
	SBullet bullet;
	
	
};

