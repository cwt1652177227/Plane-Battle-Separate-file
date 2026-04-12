#pragma once
#include<iostream>
#include<windows.h>
#include"GameMgr.h"


#define KEY_DOWN(vk_code)(GetAsyncKeyState(vk_code)&0x8000?1:0)
using namespace std;
//介绍游戏管理者
extern SGameMgr g_gameMgr;

