#ifndef FOODTRUCK_H_
#define FOODTRUCK_H_

#include <vector>

#include "IEntity.h"
#include "IStrategy.h"
#include "Human.h"
#include "math/vector3.h"

/**
 * @class FoodTruck
 * @brief Represents a food truck in a physical system
 *
 * food trucks move using euler integration based on a specified
 * velocity and direction.
 */
class FoodTruck : public IEntity {
 public:
  /**
   * @brief food trucks are created with a name
   * @param obj JSON object containing the food truck's information
   */
  FoodTruck(JsonObject& obj);

  /**
   * @brief Destructor
   */
  ~FoodTruck();

  /**
   * @brief Gets the next destination in the scheduler
   */
  void getNextDestination();

  /**
   * @brief Updates the food truck's position
   * @param dt Delta time
   */
  void update(double dt);

  /**
   * @brief Removing the copy constructor operator
   * so that food trucks cannot be copied.
   */
  FoodTruck(const FoodTruck& foodtruck) = delete;

  /**
   * @brief Removing the assignment operator
   * so that food trucks cannot be copied.
   */
  FoodTruck& operator=(const FoodTruck& foodtruck) = delete;

  double getGlizzyPrice();

  void addHuman(IEntity* human);

 private:
  bool available = false;
  IStrategy* toFinalDestination = nullptr;
  double stopTime = 0;
  double glizzyPrice;
  std::vector<IEntity*> human_list;
};

#endif