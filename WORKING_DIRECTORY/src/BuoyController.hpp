
#ifndef _BUOYCONTROLLER
#define _BUOYCONTROLLER

#include "TYPEDEF.hpp"
#include "MissionController.hpp"

class BuoyController : public MissionController
{

private:
  typedef float (BuoyController::*fnPtr_float)(void);
  std::map <std::string, fnPtr_float> function_float_void;

// Constructor
public:
  BuoyController(STATE* state);

public:
  void Task(std::string taskName);
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------

  float Sink();

  float Surge();

  float Sway();

  float Target();
};

#endif