# Alarm System with ATtiny85
This project implements a simple alarm system using an ATtiny85 microcontroller, a door opening sensor, a relay module, a car siren, and an indicator LED. The alarm activates when the door is opened, triggering the sensor, and it can be deactivated using a switch in the power line.

## Components Needed
- **ATtiny85:** Microcontroller to control the alarm system.
- **Door Opening Sensor:** Detects door opening and triggers the alarm.
- **Relay Module:** Controls the activation of the car siren.
- **Car Siren:** Emits sound when activated by the relay.
- **Indicator LED:** Provides visual feedback on alarm status.
- **12V Power Supply:** Powers the entire system.
- **Reset/Off Switch:** Used to reset or turn off the alarm.

## System Operation
1. **Door Opening Detection:**
   - The sensor detects door opening and sends a signal to ATtiny85.
   - ATtiny85 triggers the alarm when it receives the door open signal.

2. **Alarm Activation:**
   - ATtiny85 activates the relay module.
   - The relay module powers the car siren.
   - Indicator LED turns on to show the alarm is active.

3. **Alarm Deactivation:**
   - Alarm can be deactivated using the switch in the power line.
   - Switch cuts off power to the relay and siren, turning off the alarm.
   - Indicator LED turns off to indicate alarm deactivation.

## ATtiny85 Code and Logic
- Use `loop()` function to monitor door opening sensor.
- When door opens and alarm is inactive, trigger the alarm.
- Activate the relay to power the siren and turn on the LED indicator.

## Additional Notes
- Ensure correct electrical connections to avoid damage.
- Customize the project by adding SMS/email notifications or other features.

## License
These projects are open-source and available under the [MIT License](LICENSE).
