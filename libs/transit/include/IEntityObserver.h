#ifndef IENTITY_OBSERVER_H_
#define IENTITY_OBSERVER_H_

#include "IEntity.h"

class IEntityObserver {
 public:
  virtual ~IEntityObserver() = default;
  virtual void onEntityUpdate(IEntity* entity) = 0;
};

#endif
