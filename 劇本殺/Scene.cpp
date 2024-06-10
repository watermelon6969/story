#include "Scene.h"
#include "Opening.h"

Scene::Scene(const string& name) : name(name) {}

string Scene::getName() const {
    return name;
}

void Scene::SceneZ(int c) {
    Opening::SceneO(c);
}

void Scene::SceneHouse() {
    Opening::SceneHouse();
}

void Scene::SceneOut() {
    Opening::SceneOut();
}

void Scene::ScenePeople() {
    Opening::ScenePeople();
}
