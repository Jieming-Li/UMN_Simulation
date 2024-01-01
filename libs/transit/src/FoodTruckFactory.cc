#include "FoodTruckFactory.h"

IEntity* FoodTruckFactory::CreateEntity(JsonObject& entity) {
  std::string type = entity["type"];
  if (type.compare("foodtruck") == 0) {
    std::cout << "FoodTruck Created" << std::endl;
    return new FoodTruck(entity);
  }
  return nullptr;
}