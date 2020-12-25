/*!
 * Real-time sampling and ECG output
 * @file HeartRateMonitor.ino
 * @copyright GNU Lesser General Public License
 * @author oguzhan.ince@ogr.sakarya.edu.tr
 * @version  V1.0
 * @date  24.12.2020
 */

/*!
 * @brief Library for DFRobot's IR Position Graphics & RAW_DATA
 * @author [jianghao](hao.jiang@dfrobot.com)
 */
 
const int heartPin = A1;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}
void loop() {
  // put your main code here, to run repeatedly:
  int heartValue = analogRead(heartPin);
  Serial.println(heartValue);
  delay(5);
}
