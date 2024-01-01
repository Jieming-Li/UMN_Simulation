#define _USE_MATH_DEFINES
#include "Human.h"

#include <cmath>
#include <limits>

#include "AstarStrategy.h"
#include "SimulationModel.h"

Human::Human(JsonObject& obj) : IEntity(obj) {
  available = true;
}

Human::~Human() {
  if (toFinalDestination) {
    delete toFinalDestination;
  }
}

void Human::getNextDestination() {
  if (available) {
    int x = rand() % 2900 - 1400;
    int y = rand() % 60 + 240;
    int z = rand() % 1600 - 800;
    Vector3 destination = Vector3(x, y, z);
    toFinalDestination = new AstarStrategy(position, destination, model->getGraph());
    available = false;
  }
}

void Human::setDestination(Vector3 desti) {
    toFinalDestination = new AstarStrategy(position, desti, model->getGraph());
    available = false;
}

void Human::setBuying(bool buying) {
  this->buying = buying;
}

void Human::update(double dt) {
  if (available && this->buying == false) {
    getNextDestination();
  }
  if (toFinalDestination) {
    toFinalDestination->move(this, dt);
    if (toFinalDestination->isCompleted() && this->buying == false) {
      toFinalDestination = nullptr;
      available = true;
    }
  }
}
