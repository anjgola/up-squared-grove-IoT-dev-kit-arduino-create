/*  
*  Copyright (c) 2017 Intel Corporation.
*  Licensed under the MIT license. See LICENSE file in the project root for full license information.
*/

/* 
  System Calls

  Sends a system command of 'ip a' which shows the IP address.
  
  Make sure to connect via the Monitor before running.
  
  https://github.com/intel-iot-devkit/up-squared-grove-IoT-dev-kit-arduino-create/tree/master/examples/SystemCalls 

  This sample can be imported into Intel System Studio 2019 on Linux hosts by using this tutorial
  https://software.intel.com/en-us/developing-projects-with-intel-system-studio-c-importing-arduino-create-projects
*/

#include "Arduino.h" //not strictly required to run, but prevents erros when importing into Intel(r) System Studio

void setup() {
   system("ip a");
   system("whoami");
}
  void loop() {
   printf("hello there");
   delay(5000);
}
