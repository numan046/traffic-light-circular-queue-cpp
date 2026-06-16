# 🚦 Traffic Light Simulation Using Circular Queue (C++ Project)

## 📌 Description
A console-based C++ program that simulates a traffic light system using a **Circular Queue data structure**. The program cycles through Red, Yellow, and Green signals with time intervals, demonstrating queue operations in a real-world scenario.

This project helps in understanding how circular queues work in scheduling and system simulation.

---

## ✨ Features
- Circular Queue implementation using arrays
- Enqueue and Dequeue operations
- Continuous traffic light cycle simulation
- Red → Yellow → Green signal rotation
- Time-based delay simulation using sleep function
- Real-world traffic system behavior simulation

---

## 🚦 Traffic Light Logic
The system follows this cycle:
- 🔴 Red → Stop
- 🟡 Yellow → Ready
- 🟢 Green → Go

Each signal is processed in a circular queue and repeats continuously.

---

## 🧠 Data Structure Used
- Circular Queue (Array-based implementation)

---

## 🛠️ Technologies Used
- C++ Programming Language  
- Circular Queue Logic  
- Arrays  
- Linux sleep function (`unistd.h`)  
- Console Application  

---

## 📚 Learning Outcomes
- Understanding Circular Queue implementation
- Practical use of queue in real-life systems
- Process scheduling simulation
- Handling cyclic data structures
- Working with delays in C++

---

## 🚀 How to Run

### Step 1: Compile the program
```bash
g++ traffic_light.cpp -o traffic_light
