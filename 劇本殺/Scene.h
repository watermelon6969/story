#ifndef SCENE_H
#define SCENE_H

#include <iostream>
#include <string>

using namespace std;

class Scene {
private:
    string name;

public:
    Scene(const string& name);
    string getName() const;
    void SceneZ(int choice);
    void SceneHouse();
    void SceneOut();
    void ScenePeople();
};

#endif // SCENE_H
