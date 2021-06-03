#include "global.h"
#include "func.h"
#include "setup.h"

void loop() {
  // 11,9,8,7,6
  if(sensorState() == B00100){ goForward();}
  if(sensorState() == B00111){ rightTurn90();}
  if(sensorState() == B11100){ leftTurn90();}
  
  if(sensorState() == B00011){ rightTurn();}
  if(sensorState() == B00010){ rightTurn();}
  if(sensorState() == B00001){ rightTurn();}
  if(sensorState() == B00110){ rightTurn();}
  
  if(sensorState() == B11000){ leftTurn();}
  if(sensorState() == B01000){ leftTurn();}
  if(sensorState() == B10000){ leftTurn();}
  if(sensorState() == B01100){ leftTurn();}

}
