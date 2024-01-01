#ifndef HUMAN_H_
#define HUMAN_H_

#include <vector>

#include "IEntity.h"
#include "IStrategy.h"
#include "Wallet.h"
#include "math/vector3.h"

/**
 * @class Human
 * @brief Represents a human in a physical system
 *
 * humans move using euler integration based on a specified
 * velocity and direction.
 */
class Human : public IEntity {
 public:
  /**
   * @brief humans are created with a name
   * @param obj JSON object containing the human's information
   */
  Human(JsonObject& obj);

  /**
   * @brief Destructor
   */
  ~Human();

  /**
   * @brief Gets the next destination in the scheduler
   */
  void getNextDestination();

  /**
   * @brief set the next destination
   */
  void setDestination(Vector3 destination);

  /**
   * @brief Updates the human's position
   * @param dt Delta time
   */
  void update(double dt);

  /**
   * @brief Removing the copy constructor operator
   * so that humans cannot be copied.
   */
  Human(const Human& human) = delete;

  /**
   * @brief Removing the assignment operator
   * so that humans cannot be copied.
   */
  Human& operator=(const Human& human) = delete;

  void setBuying(bool buying);

 private:
    bool available = false;
    IStrategy* toFinalDestination = nullptr;
    bool buying = false;
};

#endif