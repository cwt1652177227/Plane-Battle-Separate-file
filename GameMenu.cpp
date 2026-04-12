#include "GameMenu.h"
#include"stdafx.h"


SGameMenu::SGameMenu()
{
    //菜单初始界面
    nState = E_GAME_START;
}
void SGameMenu::update()
{
    //箭头的移动
    if (KEY_DOWN(VK_UP)) {
        //“↑”
        nState--;
        if (nState < E_GAME_START)
        {
            nState = E_GAME_EXIT;
            Sleep(800);
        }
        
    }
    else if (KEY_DOWN(VK_DOWN)) {
        //“↓”
        nState++;
        if (nState > E_GAME_EXIT)
        {
            nState = E_GAME_START;
            Sleep(800);
        }
    }
    //菜单转换为地图
    if (KEY_DOWN(VK_RETURN)) {
        if (E_GAME_START == nState) {
           g_gameMgr.nScene = E_GAME_MAP;
           g_gameMgr.bClear = true;
        }
       
    }
}

void SGameMenu::render()
{
    //画菜单
    if (E_GAME_START == nState) {
        cout << "口口口口口口口口口口口口口" << endl;
        cout << "口                      口" << endl;
        cout << "口    游  戏  菜  单    口" << endl;
        cout << "口                      口" << endl;
        cout << "口     -> 游戏开始      口" << endl;
        cout << "口        游戏设置      口" << endl;
        cout << "口        游戏退出      口" << endl;
        cout << "口                      口" << endl;
        cout << "口口口口口口口口口口口口口" << endl;
    }
    else if (E_GAME_SET == nState) {
        cout << "口口口口口口口口口口口口口" << endl;
        cout << "口                      口" << endl;
        cout << "口    游  戏  菜  单    口" << endl;
        cout << "口                      口" << endl;
        cout << "口        游戏开始      口" << endl;
        cout << "口     -> 游戏设置      口" << endl;
        cout << "口        游戏退出      口" << endl;
        cout << "口                      口" << endl;
        cout << "口口口口口口口口口口口口口" << endl;
    }
    else if(E_GAME_EXIT == nState){
        cout << "口口口口口口口口口口口口口" << endl;
        cout << "口                      口" << endl;
        cout << "口    游  戏  菜  单    口" << endl;
        cout << "口                      口" << endl;
        cout << "口        游戏开始      口" << endl;
        cout << "口        游戏设置      口" << endl;
        cout << "口     -> 游戏退出      口" << endl;
        cout << "口                      口" << endl;
        cout << "口口口口口口口口口口口口口" << endl;
    }
    
}
