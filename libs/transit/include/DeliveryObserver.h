#ifndef DELIVERY_OBSERVER_H_
#define DELIVERY_OBSERVER_H_

#include "Drone.h"
#include "Package.h"
#include "Robot.h"
#include "IEntityObserver.h"

class DeliveryObserver : public IEntityObserver {
 public:
  void onEntityUpdate(IEntity* entity) override;
};

#endif

// NEEDS CLARIFICATION