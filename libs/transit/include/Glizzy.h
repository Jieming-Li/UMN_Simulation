#ifndef GLIZZY_H_
#define GLIZZY_H_

#include "IEntity.h"
#include "IStrategy.h"


/**
 * @class Glizzy
 * @brief Represents a hotdog in a physical system
 *
 * Glizzys can be bought by Humans through Food Trucks
 * 
 */
class Glizzy : public IEntity {
 public:
  /**
   * @brief Constructor
   * @param obj JSON object containing the glizzy's information
   */
  Glizzy(JsonObject& obj);

  /**
   * @brief Destructor
   */
  ~Glizzy();

  // /**
  //  * @brief Gets the Glizzy's destination
  //  * @return The Glizzy's destination
  //  */
  // Vector3 getDestination() const;

  /**
   * @brief Updates the Glizzy
   * 
   * @param dt difference in time since last update
  */
  void update(double dt);

  /**
   * @brief Removing the copy constructor operator
   * so that humans cannot be copied.
   */
  // Glizzy(const Glizzy& glizzy) = delete;

  /**
   * @brief Removing the assignment operator
   * so that humans cannot be copied.
   */
  // Glizzy& operator=(const Glizzy& glizzy) = delete;

  // private:
  // Vector3 destination;
};

#endif