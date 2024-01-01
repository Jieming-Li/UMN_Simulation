#ifndef FOOD_TRUCK_FACTORY_H_
#define FOOD_TRUCK_FACTORY_H_

#include <vector>

#include "IEntityFactory.h"
#include "FoodTruck.h"

/**
 *@brief FoodTruck Factory to produce FoodTruck class.
 **/
class FoodTruckFactory : public IEntityFactory {
 public:
  /**
   * @brief Destructor for FoodTruckFactory class.
   **/
  virtual ~FoodTruckFactory() {}

  /**
   * @brief Creates entity using the given JSON object, if possible.
   * @param entity - JsonObject to be used to create the new entity.
   * @return Entity that was created if it was created successfully, or a
   *nullpointer if creation failed.
   **/
  IEntity* CreateEntity(JsonObject& entity);
};

#endif