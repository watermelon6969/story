#ifndef SCENE_H
#define SCENE_H

#include <iostream>
#include <string>

using namespace std;

class Scene {
private:
    string name;

public:
    Scene(const string&);
    string getName() const;
    void SceneZ(int);
    void SceneHouse();
    void SceneOut();
    void ScenePeople();
};

#endif // SCENE_H
