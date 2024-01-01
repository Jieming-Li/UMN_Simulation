#include "FoodTruck.h"

#include <cmath>
#include <vector>

#include "DijkstraStrategy.h"
#include "SimulationModel.h"
#include "math/vector3.h"

FoodTruck::FoodTruck(JsonObject& obj) : IEntity(obj) {
  available = true;
  if (obj.contains("glizzyPrice")) {
    glizzyPrice = obj["glizzyPrice"];
  }
}

FoodTruck::~FoodTruck() {
  if (toFinalDestination) {
    delete toFinalDestination;
  }
  for (int i = 0; i < human_list.size(); i++) {
    delete human_list.at(i);
  }
}

void FoodTruck::getNextDestination() {
  if (available) {
    int x = rand() % 2900 - 1400;
    int y = rand() % 60 + 240;
    int z = rand() % 1600 - 800;
    Vector3 destination = Vector3(x, y, z);
    toFinalDestination =
        new DijkstraStrategy(position, destination, model->getGraph());
    available = false;
  }
}

void FoodTruck::update(double dt) {
  if (available) {
    getNextDestination();
  }
  if (toFinalDestination) {
    toFinalDestination->move(this, dt);
    if (toFinalDestination->isCompleted()) {
      if (stopTime == 0) {
        for (int i = 0; i < human_list.size(); i++) {
          static_cast<Human*>(human_list.at(i))->setDestination(this->position);
          static_cast<Human*>(human_list.at(i))->setBuying(true);
        }
      }
      stopTime += dt;
      if (stopTime >= 150) {
        stopTime = 0;
        toFinalDestination = nullptr;
        available = true;
        for (int i = 0; i < human_list.size(); i++) {
          static_cast<Human*>(human_list.at(i))->setBuying(false);
        }
      }
    }
  }
}

double FoodTruck::getGlizzyPrice() { return this->glizzyPrice; }

void FoodTruck::addHuman(IEntity* human) {
  this->human_list.push_back(human);
}