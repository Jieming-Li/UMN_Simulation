#ifndef HUMAN_OBSERVER_H_
#define HUMAN_OBSERVER_H_

#include "Human.h"
#include "IEntityObserver.h"

class HumanObserver : public IEntityObserver {
 public:
  void onEntityUpdate(IEntity* entity) override;
};

#endif