#include <iostream>
#include <windows.h>
#include "Opening.h"
#include "Scene.h"

using namespace std;

int main() {
    // 定義場景和角色
    cout << "請輸入您的名字" << endl;
    string setName;
    cin >> setName;
    Scene entrance(setName);
    Opening::SceneOP(entrance);

    // 選擇下一步行動
    int choice;
    cin >> choice;
    entrance.SceneZ(choice);

    switch (choice) {
    case 1:
        entrance.SceneHouse();
        break;
    case 2:
        entrance.SceneOut();
        break;
    case 3:
        entrance.ScenePeople();
        break;
    default:
        cout << "錯誤的選項，請重新輸入" << endl;
        break;
    }

    return 0;
}
