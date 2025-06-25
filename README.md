# Arduino_project1
📌 Project Description:
This project demonstrates a simple yet effective temperature-based automatic control system using an Arduino microcontroller and a servo motor. The system reads real-time ambient temperature using an analog temperature sensor (e.g., LM35), processes it, and adjusts the servo motor's motion accordingly.

The servo motor's sweep speed is dynamically adjusted based on the temperature levels. This simulates how actuators can respond to environmental changes in real-world applications such as automatic vents, cooling systems, or smart HVAC mechanisms.

🎯 Features:
Reads and converts analog temperature data into degrees Celsius.

Controls a servo motor based on temperature thresholds.

Implements dynamic speed control using delay adjustments.

Includes an optional LED as a temperature activity indicator.

Logs real-time temperature and control status to the serial monitor.

⚙️ Components Used:
Arduino UNO/Nano

LM35 Temperature Sensor (or compatible analog sensor)

Servo Motor (SG90 / MG996R)

1x LED (Optional for visual feedback)

Resistors, Breadboard, Jumper Wires

Power Supply or USB cable

🧠 Working Principle:
The LM35 sensor outputs an analog voltage proportional to the ambient temperature.

The Arduino reads this analog value and converts it into Celsius.

Depending on the temperature range:

Below 27°C → Motor is idle.

Between 27°C and 32°C → Servo sweeps slowly.

Between 32°C and 36°C → Servo sweeps faster.

The servo sweeps back and forth from 0° to 180° based on the current speed mode.

An LED turns on when the system is active (temperature above 27°C).

📁 Repository Structure:
bash
Copy
Edit
/code              → Arduino sketch file (.ino)
/docs              → Circuit diagram, sensor info
README.md          → Project overview and setup guide
🚀 Possible Extensions:
Replace servo with a DC fan and use PWM for speed control.

Add an OLED/LCD display for live temperature feedback.

Integrate a buzzer for overheat alerts.

Make the system wireless using Bluetooth/Wi-Fi.

Log temperature over time to an SD card or cloud service.
