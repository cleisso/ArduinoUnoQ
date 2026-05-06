#include <Arduino_RouterBridge.h>
#include <Modulino.h>

ModulinoMovement imu;

void setup() {
  Bridge.begin();
  Monitor.begin();
  Modulino.begin(Wire1);
  imu.begin();

}

void loop() {
  imu.update();

  float x = imu.getX();
  float y = imu.getY();
  float z = imu.getZ();

  Monitor.println("X: " + String(x));
  Monitor.println("Y: " + String(y));
  Monitor.println("Z: " + String(z));
  Monitor.println();

  delay(1000);
}
