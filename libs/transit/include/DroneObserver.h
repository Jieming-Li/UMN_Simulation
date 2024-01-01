#ifndef DRONE_OBSERVER_H_
#define DRONE_OBSERVER_H_

#include "Drone.h"
#include "IEntityObserver.h"

class DroneObserver : public IEntityObserver {
 public:
  void onEntityUpdate(IEntity* entity) override;
};

#endif
