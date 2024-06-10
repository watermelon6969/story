#include "Opening.h"
#include <iostream>
#include <windows.h>

using namespace std;

std::string Opening::treasureItem = "";

void Opening::SceneOP(Scene& scene) {
    cout << "一個陰雨連綿的晚上，你為了要躲雨來到一座位於偏僻山脈的神秘莊園" << endl;
    Sleep(2000);
    cout << "這座庄園據說曾是一位富有的藝術家的居所，但在一場大火後變得荒廢......" << endl;
    Sleep(2000);
    cout << "你推開庄園的大門，發現裡面竟然燈火通明，彷彿有人在裡面等著你" << endl;
    Sleep(2000);
    cout << "你感到一絲不安，但還是走了進去......\n" << endl;
    Sleep(2000);
    cout << "您好, " << scene.getName() << "!" << endl;
    cout << "走進大門後，你有三個選項" << endl;
    cout << "1. 探索莊園" << endl;
    cout << "2. 探索外部" << endl;
    cout << "3. 詢問路人" << endl;
}

void Opening::SceneO(int i) {
    bool failChoose = false;
    while (!failChoose) {
        switch (i) {
        case 1:
            cout << "您選擇 探索莊園" << endl;
            failChoose = true;
            break;
        case 2:
            cout << "您選擇 探索外部" << endl;
            failChoose = true;
            break;
        case 3:
            cout << "您選擇 詢問路人" << endl;
            failChoose = true;
            break;
        default:
            cout << "錯誤的選項，請重新輸入" << endl;
            cin >> i;
            break;
        }
    }
}

void Opening::SceneHouse() {
    int choice;
    cout << "進入莊園後，印入眼簾的是超大的客廳" << endl;
    cout << "1. 查看壁爐" << endl;
    cout << "2. 觀察牆上的畫作" << endl;
    cout << "3. 檢查書架的書" << endl;
    cin >> choice;
    SceneHouseChoice(choice);
}

void Opening::SceneHouseChoice(int choice) {
    switch (choice) {
    case 1:
        cout << "你走向壁爐，發現裡面有一個秘密通道。" << endl;
        cout << "1. 進入秘密通道" << endl;
        cout << "2. 繼續探索客廳" << endl;
        cout << "3. 叫來朋友幫忙" << endl;
        cin >> choice;
        HandleHouseSubChoice(choice);
        break;
    case 2:
        cout << "你發現一幅畫作後面藏著一個鑰匙。" << endl;
        cout << "1. 拿走鑰匙" << endl;
        cout << "2. 尋找鑰匙孔" << endl;
        cout << "3. 繼續觀察其他畫作" << endl;
        cin >> choice;
        HandleHouseSubChoice(choice);
        break;
    case 3:
        cout << "你找到一本關於庄園歷史的書。" << endl;
        cout << "1. 閱讀書籍" << endl;
        cout << "2. 將書帶走" << endl;
        cout << "3. 放回書架" << endl;
        cin >> choice;
        HandleHouseSubChoice(choice);
        break;
    default:
        cout << "錯誤的選項，請重新輸入" << endl;
        cin >> choice;
        SceneHouseChoice(choice);
        break;
    }
}

void Opening::HandleHouseSubChoice(int choice) {
    switch (choice) {
    case 1:
        cout << "你進入通道，發現一個隱藏的房間，裡面有一個寶箱。" << endl;
        cout << "1. 打開寶箱" << endl;
        cout << "2. 檢查房間" << endl;
        cout << "3. 返回客廳" << endl;
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "你打開寶箱，發現裡面有一個神秘的寶石。" << endl;
            treasureItem = "神秘的寶石";
            cout << "你獲得了一個 " << treasureItem << "。" << endl;
            Conclusion();
            return;
        case 2:
            cout << "你檢查房間，但沒有發現其他有價值的東西。" << endl;
            Conclusion();
            return;
        case 3:
            SceneHouse();
            return;
        default:
            cout << "錯誤的選項，請重新輸入" << endl;
            cin >> choice;
            HandleHouseSubChoice(choice);
            return;
        }
        break;
    case 2:
        cout << "你發現一幅畫作後面藏著一個鑰匙。" << endl;
        cout << "1. 拿走鑰匙" << endl;
        cout << "2. 尋找鑰匙孔" << endl;
        cout << "3. 繼續觀察其他畫作" << endl;
        cin >> choice;
        HandleHouseSubChoice(choice);
        break;
    case 3:
        cout << "你找到一本關於庄園歷史的書。" << endl;
        cout << "1. 閱讀書籍" << endl;
        cout << "2. 將書帶走" << endl;
        cout << "3. 放回書架" << endl;
        cin >> choice;
        HandleHouseSubChoice(choice);
        break;
    default:
        cout << "錯誤的選項，請重新輸入" << endl;
        cin >> choice;
        HandleHouseSubChoice(choice);
        break;
    }
}

void Opening::SceneOut() {
    int choice;
    cout << "你決定在雨中探索莊園的花園" << endl;
    cout << "1. 檢查溫室" << endl;
    cout << "2. 檢查雕像" << endl;
    cout << "3. 探索迷宮花園" << endl;
    cin >> choice;
    SceneOutChoice(choice);
}

void Opening::SceneOutChoice(int choice) {
    switch (choice) {
    case 1:
        cout << "你發現溫室裡有一些奇異的植物。" << endl;
        cout << "1. 研究植物" << endl;
        cout << "2. 繼續探索溫室" << endl;
        cout << "3. 拿走一株植物" << endl;
        cin >> choice;
        HandleOutSubChoice(choice);
        break;
    case 2:
        cout << "你發現雕像底座上有一個隱藏的機關。" << endl;
        cout << "1. 觸動機關" << endl;
        cout << "2. 繼續觀察雕像" << endl;
        cout << "3. 尋找其他雕像" << endl;
        cin >> choice;
        HandleOutSubChoice(choice);
        break;
    case 3:
        cout << "你在迷宮中迷路，發現了一個隱藏的地下入口。" << endl;
        cout << "1. 進入地下入口" << endl;
        cout << "2. 嘗試找到出口" << endl;
        cout << "3. 尋求幫助" << endl;
        cin >> choice;
        HandleOutSubChoice(choice);
        break;
    default:
        cout << "錯誤的選項，請重新輸入" << endl;
        cin >> choice;
        SceneOutChoice(choice);
        break;
    }
}

void Opening::HandleOutSubChoice(int choice) {
    switch (choice) {
    case 1:
        cout << "你發現植物有治療的效果，並找到了一本古老的筆記本。" << endl;
        cout << "1. 帶走筆記本" << endl;
        cout << "2. 繼續研究植物" << endl;
        cout << "3. 返回庄園內部" << endl;
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "你帶走了筆記本。" << endl;
            Conclusion();
            return;
        case 2:
            cout << "你繼續研究植物，但沒有發現其他特別的東西。" << endl;
            Conclusion();
            return;
        case 3:
            SceneHouse();
            return;
        default:
            cout << "錯誤的選項，請重新輸入" << endl;
            cin >> choice;
            HandleOutSubChoice(choice);
            return;
        }
        break;
    case 2:
        cout << "你發現了一條通往地下室的秘密通道。" << endl;
        cout << "1. 進入地下室" << endl;
        cout << "2. 繼續觀察周圍" << endl;
        cout << "3. 返回庄園內部" << endl;
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "你進入地下室，發現了一個寶藏。" << endl;
            cout << "1. 打開寶藏" << endl;
            cout << "2. 繼續探索地下室" << endl;
            cout << "3. 返回地面" << endl;
            cin >> choice;
            switch (choice) {
            case 1:
                cout << "你打開寶藏，發現了一個古老的手稿。" << endl;
                Conclusion();
                return;
            case 2:
                cout << "你繼續探索地下室，但沒有發現其他特別的東西。" << endl;
                Conclusion();
                return;
            case 3:
                SceneHouse();
                return;
            default:
                cout << "錯誤的選項，請重新輸入" << endl;
                cin >> choice;
                HandleOutSubChoice(choice);
                return;
            }
            break;
        case 2:
            cout << "你繼續觀察周圍，但沒有發現其他特別的東西。" << endl;
            Conclusion();
            return;
        case 3:
            SceneHouse();
            return;
        default:
            cout << "錯誤的選項，請重新輸入" << endl;
            cin >> choice;
            HandleOutSubChoice(choice);
            return;
        }
        break;
    case 3:
        cout << "你發現一個古老的寶藏藏在地下室。" << endl;
        cout << "1. 打開寶藏" << endl;
        cout << "2. 繼續探索地下室" << endl;
        cout << "3. 返回地面" << endl;
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "你打開寶藏，發現了一個古老的手稿。" << endl;
            Conclusion();
            return;
        case 2:
            cout << "你繼續探索地下室，但沒有發現其他特別的東西。" << endl;
            Conclusion();
            return;
        case 3:
            SceneOut();
            return;
        default:
            cout << "錯誤的選項，請重新輸入" << endl;
            cin >> choice;
            HandleOutSubChoice(choice);
            return;
        }
        break;
    default:
        cout << "錯誤的選項，請重新輸入" << endl;
        cin >> choice;
        HandleOutSubChoice(choice);
        break;
    }
}

void Opening::ScenePeople() {
    int choice;
    cout << "你在莊園中遇到了一個神秘的守衛" << endl;
    cout << "1. 問他有關庄園的事" << endl;
    cout << "2. 嘗試說服他讓你進入更多房間" << endl;
    cout << "3. 跟隨守衛" << endl;
    cin >> choice;
    ScenePeopleChoice(choice);
}

void Opening::ScenePeopleChoice(int choice) {
    switch (choice) {
    case 1:
        cout << "守衛告訴你庄園的主人曾經藏有一筆巨額財富。" << endl;
        cout << "1. 詢問財富的具體位置" << endl;
        cout << "2. 詢問庄園歷史" << endl;
        cout << "3. 向守衛尋求幫助" << endl;
        cin >> choice;
        HandlePeopleSubChoice(choice);
        break;
    case 2:
        cout << "守衛被說服，給你一把鑰匙。" << endl;
        cout << "1. 使用鑰匙" << endl;
        cout << "2. 保存鑰匙" << endl;
        cout << "3. 讓守衛陪同" << endl;
        cin >> choice;
        HandlePeopleSubChoice(choice);
        break;
    case 3:
        cout << "守衛帶你進入一個秘密房間。" << endl;
        cout << "1. 觀察房間" << endl;
        cout << "2. 詢問守衛" << endl;
        cout << "3. 搜索房間" << endl;
        cin >> choice;
        HandlePeopleSubChoice(choice);
        break;
    default:
        cout << "錯誤的選項，請重新輸入" << endl;
        cin >> choice;
        ScenePeopleChoice(choice);
        break;
    }
}

void Opening::HandlePeopleSubChoice(int choice) {
    switch (choice) {
    case 1:
        cout << "守衛告訴你財富藏在地下室的一個寶箱裡。" << endl;
        cout << "1. 前往地下室" << endl;
        cout << "2. 繼續與守衛交談" << endl;
        cout << "3. 讓守衛帶路" << endl;
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "你前往地下室，發現了一個寶藏。" << endl;
            cout << "1. 打開寶藏" << endl;
            cout << "2. 繼續探索地下室" << endl;
            cout << "3. 返回地面" << endl;
            cin >> choice;
            switch (choice) {
            case 1:
                cout << "你打開寶藏，發現了一個古老的手稿。" << endl;
                Conclusion();
                return;
            case 2:
                cout << "你繼續探索地下室，但沒有發現其他特別的東西。" << endl;
                Conclusion();
                return;
            case 3:
                SceneHouse();
                return;
            default:
                cout << "錯誤的選項，請重新輸入" << endl;
                cin >> choice;
                HandlePeopleSubChoice(choice);
                return;
            }
            break;
        case 2:
            cout << "你繼續與守衛交談，但他似乎不願多說。" << endl;
            Conclusion();
            return;
        case 3:
            cout << "守衛帶你前往地下室，發現了一個寶藏。" << endl;
            cout << "1. 打開寶藏" << endl;
            cout << "2. 繼續探索地下室" << endl;
            cout << "3. 返回地面" << endl;
            cin >> choice;
            switch (choice) {
            case 1:
                cout << "你打開寶藏，發現了一個古老的手稿。" << endl;
                Conclusion();
                return;
            case 2:
                cout << "你繼續探索地下室，但沒有發現其他特別的東西。" << endl;
                Conclusion();
                return;
            case 3:
                SceneHouse();
                return;
            default:
                cout << "錯誤的選項，請重新輸入" << endl;
                cin >> choice;
                HandlePeopleSubChoice(choice);
                return;
            }
            break;
        default:
            cout << "錯誤的選項，請重新輸入" << endl;
            cin >> choice;
            HandlePeopleSubChoice(choice);
            return;
        }
        break;
    case 2:
        cout << "你打開一個秘密房間，裡面有一個神秘的箱子。" << endl;
        cout << "1. 打開箱子" << endl;
        cout << "2. 檢查周圍" << endl;
        cout << "3. 返回庄園大廳" << endl;
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "你打開箱子，發現了一個古老的手稿。" << endl;
            Conclusion();
            return;
        case 2:
            cout << "你檢查周圍，但沒有發現其他特別的東西。" << endl;
            Conclusion();
            return;
        case 3:
            SceneHouse();
            return;
        default:
            cout << "錯誤的選項，請重新輸入" << endl;
            cin >> choice;
            HandlePeopleSubChoice(choice);
            return;
        }
        break;
    case 3:
        cout << "你發現房間裡有一幅畫，畫中似乎隱藏著某些信息。" << endl;
        cout << "1. 仔細研究畫作" << endl;
        cout << "2. 檢查其他物品" << endl;
        cout << "3. 詢問守衛畫作的來歷" << endl;
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "你仔細研究畫作，發現了一些隱藏的符號。" << endl;
            Conclusion();
            return;
        case 2:
            cout << "你檢查其他物品，但沒有發現其他特別的東西。" << endl;
            Conclusion();
            return;
        case 3:
            cout << "你詢問守衛畫作的來歷，但他似乎不願多說。" << endl;
            Conclusion();
            return;
        default:
            cout << "錯誤的選項，請重新輸入" << endl;
            cin >> choice;
            HandlePeopleSubChoice(choice);
            return;
        }
        break;
    default:
        cout << "錯誤的選項，請重新輸入" << endl;
        cin >> choice;
        HandlePeopleSubChoice(choice);
        break;
    }
}

void Opening::Conclusion() {
    cout << "你在庄園中的冒險結束了。" << endl;
    cout << "你獲得了：" << treasureItem << endl;
    cout << "感謝你遊玩這個遊戲！" << endl;
    exit(0);
}
