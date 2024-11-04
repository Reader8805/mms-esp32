/*Include*/
#include <gyro.hpp>
#include <encoder.hpp>
#include <sensor.hpp>
#include <motor.hpp>
#include <pid.hpp>
/*Define*/

/*Global Variables*/

/*Function*/
void setup() 
{

  encoder_setup();
  gyro_setup();
  motor_setup();
  Serial.begin(115200); // Initialize serial communication
}

void loop() 
{
  sensor_read();
  encoder_read();
  gyro_read();
  delay(500);
}