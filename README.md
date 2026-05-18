# All_Electronic_Projects
1###
Operational Amplifier - https://www.slideshare.net/slideshow/comprehensive-physics-guide-on-electronic-amplifiers-and-their-applications-ab2e/287037877?utm_source=clipboard_share_button&utm_campaign=slideshare_make_sharing_viral_v2&utm_variation=variant&utm_medium=share
Academia edu- https://www.academia.edu/165715367/Physics_Guide_Amplifiers_and_Applications_Lesson_Presentation_and_Practical_Insights?source=swp_share

Explore the fundamentals, internal structure, configurations, feedback principles, and practical applications of operational amplifiers in analog circuit design.
Authors: Khanverdi Chalabiyev

Verified by: physics teacher azerbaijan telman askeraliyev (fizika muellimi) – contact: https://www.linkedin.com/in/physics-teacher-azerbaijan-telman-askeraliyev/
https://www.instagram.com/physics_teacher_azerbaijan


2###
Voltage Divider - https://www.slideshare.net/slideshow/technical-laboratory-report-voltage-dividers-khanverdi-chalabiyev-emin-rahimov-ruslan-qasimov-xeqani-ceferli-verified-by-physics-teacher-azerbaijan-telman-askeraliyev-fizika-muellimi-azerbaijan-baku/287278692?utm_source=clipboard_share_button&utm_campaign=slideshare_make_sharing_viral_v2&utm_variation=variant&utm_medium=share
Khanverdi Chalabiyev 
Academia Edu- https://www.academia.edu/165908187/Technical_Laboratory_Report_Automatic_Light_Sensing_and_Voltage_Divider_Circuit_Khanverdi_Chalabiyev_Emin_Rahimov_Ruslan_Qasimov_Vasif_Sarifzade_Kamran_Aliquliyev_Verified_by_Physics_Teacher_Azerbaijan_Telman_Askeraliyev_Fizika_Muellimi_Azerbaijan_Baku_?source=swp_share

Verified by: physics teacher azerbaijan telman askeraliyev (fizika muellimi) – contact: https://www.linkedin.com/in/physics-teacher-azerbaijan-telman-askeraliyev/
https://www.instagram.com/physics_teacher_azerbaijan


3###
Technical Laboratory Report: Automatic Light Sensing and Voltage Divider Circuit:https://www.academia.edu/165908187/Technical_Laboratory_Report_Automatic_Light_Sensing_and_Voltage_Divider_Circuit_Khanverdi_Chalabiyev_Emin_Rahimov_Ruslan_Qasimov_Vasif_Sarifzade_Kamran_Aliquliyev_Verified_by_Physics_Teacher_Azerbaijan_Telman_Askeraliyev_Fizika_Muellimi_Azerbaijan_Baku_

Technical Laboratory Report: DC Motor Directional Control via Polarity Inversion Khanverdi Chalabiyev
Verified by: physics teacher azerbaijan telman askeraliyev (fizika muellimi) – contact: https://www.linkedin.com/in/physics-teacher-azerbaijan-telman-askeraliyev/
https://www.instagram.com/physics_teacher_azerbaijan


4###
The Light-Sensitive Switch (LDR+ Voltage Divider): https://www.academia.edu/166125872/Technical_Laboratory_Report_The_Light_Sensitive_Switch_LDR_Voltage_Divider?source=swp_share

Inductor Khanverdi Chalabiyev Dilara Rzazade
Verified by: physics teacher azerbaijan telman askeraliyev (fizika muellimi) – contact: https://www.linkedin.com/in/physics-teacher-azerbaijan-telman-askeraliyev/
https://www.instagram.com/physics_teacher_azerbaijan


5###
ELECTRONIC TASK: An analysis of Azerbaijan's electronics market focusing on sales: https://www.slideshare.net/slideshow/physics-guide-an-analysis-of-azerbaijan-s-electronics-market-focusing-on-sales-authors-dilara-rzazada-sabina-qarakishiyeva-verified-by-physics-teacher-azerbaijan-telman-askeraliyev-fizika-muellimi-azerbaijan-baku/287388423?utm_source=clipboard_share_button&utm_campaign=slideshare_make_sharing_viral_v2&utm_variation=control&utm_medium=share

Verified by: physics teacher azerbaijan telman askeraliyev (fizika muellimi) – contact: https://www.linkedin.com/in/physics-teacher-azerbaijan-telman-askeraliyev/
https://www.instagram.com/physics_teacher_azerbaijan


6###
Voltage Regulators: https://www.slideshare.net/slideshow/physics-guide-an-analysis-of-azerbaijan-s-electronics-market-focusing-on-sales-authors-ruslan-qasimov-xanverdi-celebiyev-emin-rehimov-kamran-aliquliyev-verified-by-physics-teacher-azerbaijan-telman-askeraliyev-fizika-muellimi-azerbaijan-baku/287505084?utm_source=clipboard_share_button&utm_campaign=slideshare_make_sharing_viral_v2&utm_variation=control&utm_medium=share

What is Voltage Regulators |Khanverdi Chalabiyev  Verified by: Physics Teacher Telman Askeraliyev (Fizika Muellimi)

# Smart Solar-Aware Automatic Irrigation Pump Controller

### Project 2.6 — Individual Portfolio Submission

An intelligent extension of **Project 2.5 — The Power Driver (Relay & Isolation)**, designed and simulated in Autodesk Tinkercad.

**Author:** ____________________  
**Verified by:** physics teacher azerbaijan telman askeraliyev (fizika muellimi)  
Contact: <https://www.linkedin.com/in/physics-teacher-azerbaijan-telman-askeraliyev/> · <https://www.instagram.com/physics_teacher_azerbaijan>

---

## 🔗 Links

| Resource | Link |
|----------|------|
| 📄 Academia.edu publication | https://www.academia.edu/167308147/Smart_Solar_Aware_Automatic_Irrigation_Pump_Controller_Khanverdi_Chalabiyev_Verified_by_Physics_Teacher_Azerbaijan_Telman_Askeraliyev_Fizika_Muellimi_Azerbaijan_Baku_?source=swp_share |
| ![YouTube](https://img.shields.io/badge/YouTube-Watch_Video-red?logo=youtube&logoColor=white) Video explanation (5+ min) | https://youtu.be/aH_fLAwDhcQ |
| 🛠️ Tinkercad simulation | https://www.tinkercad.com/things/a6c6zuvMMN1/editel |

---

## 📌 Overview

This project is a smart, solar-aware automatic irrigation pump controller. It is the direct continuation and upgrade of Project 2.5, in which a low-power circuit switched a high-power load through a relay.

The system keeps the **entire core of Project 2.5** — the relay, the flyback diode, the electrical isolation between the control and load sides, the transistor driver, and the LDR light sensor — and adds an **Arduino Uno brain, a soil-moisture input, a combined decision algorithm, an LCD interface, and an audible alarm**.

The controller reads soil moisture and ambient light, and runs the pump **only when the soil is dry and the sun is low**, conserving water by preventing irrigation during the high-evaporation hours of the day. A passive electromechanical switch becomes an autonomous, application-specific control system.

---

## ⚙️ How It Works

The Arduino reads two sensors every cycle and applies the logic in strict priority order:

| Light | Soil moisture | Pump | Buzzer | LCD message |
|-------|---------------|------|--------|-------------|
| > 50 % (sun up) | Any | **OFF** | On if < 20 % | `Sun up: No water` |
| ≤ 50 % (dark) | < 40 % (dry) | **ON** | On if < 20 % | `Status: Pump ON` |
| ≤ 50 % (dark) | > 70 % (wet) | **OFF** | Off | `Status: Pump OFF` |
| ≤ 50 % (dark) | 40–70 % | Holds last state | Off | Last status shown |
| Any | < 20 % (critical) | Per rules above | **ON (alarm)** | Per rules above |

The pump runs **only when it is dark (Light ≤ 50 %) AND the soil is dry (Moisture < 40 %)**. The absolute solar rule can never be overridden by the moisture logic.

---

## 🧩 Components

| Component | Function |
|-----------|----------|
| Arduino Uno | Controller — reads sensors, runs logic, drives relay/buzzer, updates LCD |
| Potentiometer (A0) | Simulates the soil-moisture sensor |
| LDR + 10 kΩ resistor (A1) | Light sensor (voltage divider) — the sensor inherited from Project 2.5 |
| NPN transistor + 1 kΩ resistor | Driver stage for the relay coil |
| Relay (SPDT) | Electromagnetic switch — isolates and switches the high-power side |
| Flyback diode | Suppresses the inductive kick when the relay turns off |
| DC motor + 9 V battery | Represents the water pump and its isolated power source |
| LCD 16x2 + contrast potentiometer | Real-time display of moisture % and pump status |
| Piezo buzzer (D10) | Critical-dryness alarm |

---

## 🔄 Connection to Project 2.5

| Element from 2.5 | Role retained in 2.6 |
|------------------|----------------------|
| Relay | Electromagnetic switching of a high-power load by a 5 V signal |
| Flyback diode | Catches the inductive kick (direct 2.5 lesson) |
| Isolation principle | Motor on a separate 9 V supply, not tied to Arduino ground |
| Transistor driver | Amplifies the weak control signal to the relay coil |
| LDR | The 2.5 sensor — kept and again given control over the relay |

**Added in 2.6:** Arduino brain · second sensor · combined smart logic with an absolute solar rule · LCD interface · audible alarm.

---

## 💻 Source Code

The full Arduino sketch is in [`irrigation_controller.ino`](irrigation_controller.ino). It is written for the Arduino Uno and the standard `LiquidCrystal` library, and runs directly in the Tinkercad code editor. Serial output is kept so live sensor values can be observed on the Serial Monitor during the demonstration.

---

## 📂 Repository Contents

```
├── README.md                              This file
├── irrigation_controller.ino              Arduino source code
├── Project_2.6_Irrigation_Controller.docx Full technical report (academia.edu)
├── schematic.png                          Tinkercad schematic diagram
└── final_circuit.png                      Final assembled circuit screenshot
```

---

Verified by physics teacher azerbaijan telman askeraliyev (fizika muellimi)  
LinkedIn: <https://www.linkedin.com/in/physics-teacher-azerbaijan-telman-askeraliyev/>  
Instagram: <https://www.instagram.com/physics_teacher_azerbaijan>




