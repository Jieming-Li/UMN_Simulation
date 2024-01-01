#ifndef GLIZZY_FACTORY_H_
#define GLIZZY_FACTORY_H_

#include <vector>

#include "IEntityFactory.h"
#include "Glizzy.h"

/**
 *@brief Glizzy Factory to produce Glizzy class.
 **/
class GlizzyFactory : public IEntityFactory {
 public:
  /**
   * @brief Destructor for GlizzyFactory class.
   **/
  virtual ~GlizzyFactory() {}

  /**
   * @brief Creates entity using the given JSON object, if possible.
   * @param entity - JsonObject to be used to create the new entity.
   * @return Entity that was created if it was created successfully, or a
   *nullpointer if creation failed.
   **/
  IEntity* CreateEntity(JsonObject& entity);
};

#endif
