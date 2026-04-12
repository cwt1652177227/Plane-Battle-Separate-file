#include"stdafx.h"


void setCursor()
{
	CONSOLE_CURSOR_INFO cursor_info = { 1, 0 }; //第一个值表示光标大小，1表示2个字节大小；第二个值为bool型，0表示隐藏不显示
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0, 0 }); //设置光标在起始位置
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info); //设置光标隐藏不显示
	Sleep(100);
}
//游戏管理者
SGameMgr g_gameMgr;

int main() {

	

	
	while (true) {

		//光标覆盖
		setCursor();

		//数据更新
		g_gameMgr.update();
		//数据渲染
		g_gameMgr.render();

		//清屏
		if (g_gameMgr.bClear) {
			system("cls");
			g_gameMgr.bClear = false;
		}
	}
	
	return 0;
}