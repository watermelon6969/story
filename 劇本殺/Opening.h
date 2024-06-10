#ifndef OPENING_H
#define OPENING_H

#include "Scene.h"

class Opening {
public:
    static void SceneOP(Scene&);
    static void SceneO(int);
    static void SceneHouse();
    static void SceneOut();
    static void ScenePeople();
    static void Conclusion();

private:
    static void SceneHouseChoice(int);
    static void SceneOutChoice(int);
    static void ScenePeopleChoice(int);

    static void HandleHouseSubChoice(int);
    static void HandleOutSubChoice(int);
    static void HandlePeopleSubChoice(int);

    static std::string treasureItem;
};

#endif // OPENING_H
