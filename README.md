<div align="center">
  <h1>⏰ CLI Alarm Clock</h1>
  
  <p>
    <strong>A lightweight, efficient, terminal-based Alarm Clock application written in C++.</strong>
  </p>
  
  <!-- Badges -->
  <p>
    <img src="https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="C++" />
    <img src="https://img.shields.io/badge/License-MIT-yellow.svg?style=for-the-badge" alt="License: MIT" />
  </p>
</div>

<br />

## 📖 About
Welcome to the **CLI Alarm Clock** project! This repository contains a robust, console-based alarm clock built entirely in C++. 

As a demonstration of professional software engineering practices, this tool focuses on **efficient resource management** and **clean console UI**. Unlike naive implementations that peg the CPU, this clock utilizes thread pausing to minimize CPU cycles while accurately polling system time. It offers a smooth user experience by updating the console line dynamically without flooding terminal outputs.

## ✨ Features
* **Dynamic Time Display**: Continuously updates the current system time in the terminal on a single line using carriage return (`\r`) for a seamless, flicker-free UI.
* **Precise Time Matching**: Utilizes `<ctime>` for fetching highly accurate local system time to match against the scheduled alarm.
* **Efficient Resource Management**: Implements `std::this_thread::sleep_for` from the `<thread>` and `<chrono>` libraries to optimize CPU utilization during the polling loop.
* **Standardized Input Formatting**: Robust zero-padded time formatting using `<iomanip>` to provide a standard digital clock aesthetic (HH:MM:SS).

## 🚀 Getting Started

### Prerequisites
To build and run this project, you will need a C++ compiler that supports at least the C++11 standard (e.g., GCC, Clang, or MSVC).

### Installation & Compilation
1. **Clone the repository:**
   ```bash
   git clone https://github.com/SehrishMajeed/Alarm-Clock.git
   cd Alarm-Clock
   ```
2. **Compile the source code:**
   ```bash
   g++ -std=c++11 alarm.cpp -o alarm
   ```

### Usage
Run the compiled executable from your terminal:
```bash
./alarm   # On Linux/macOS
alarm.exe # On Windows
```
When prompted, enter your desired alarm time in `HH:MM` format (24-hour clock).
```
Set alarm time (HH:MM): 14:30
Alarm is set for 14:30.
Waiting for alarm...
Current time: 14:28:45
```
Once the current time matches the scheduled time, the application breaks the loop and alerts you!

## 🧠 Technical Architecture
The core logic resides in a single, well-optimized execution loop:
- **Time Polling:** Fetches current epoch time via `time(0)` and converts it to a structured local time object using `localtime()`.
- **Condition Checking:** Evaluates `tm_hour` and `tm_min` against user-provided parameters securely.
- **Thread Sleeping:** Suspends thread execution for exactly 1 second per tick. This non-blocking approach ensures system resources are freed up while waiting.

## 👥 Contributors
Developed by BS(E)-I-A Computer Science students:
- **Group Leader:** Sehrish Majeed (24014119-141)
- **Members:** Saba Ghazanfar (24014119-129), Noor Fatima (24014119-282)

---
*Created as part of the OOP (CS-103) coursework.*