#ifndef FOOD_TRUCK_OBSERVER_H_
#define FOOD_TRUCK_OBSERVER_H_

#include "FoodTruck.h"
#include "IEntityObserver.h"

class FoodTruckObserver : public IEntityObserver {
 public:
  void onEntityUpdate(IEntity* entity) override;
};

#endif
