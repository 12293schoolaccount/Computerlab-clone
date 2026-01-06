/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       tshua                                                     */
/*    Created:      1/5/2026, 9:27:40 PM                                      */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

#include "vex.h"

using namespace vex;


competition Competition;



void pre_auton(void) {


}



void autonomous(void) {

}



void usercontrol(void) {

  while (1) {

    wait(20, msec); 
                    
  }
}


int main() {
  
  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);

  
  pre_auton();

  
  while (true) {
    wait(100, msec);
  }
}
