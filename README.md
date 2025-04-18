# 🚗 Arduino Mecanum Rover 🤖  
> Omnidirectional motion meets open-source control

Welcome to the **Arduino Mecanum Rover**—a DIY robot that can move **forward, backward, sideways, diagonally**, and even **spin like a legend** thanks to its Mecanum wheels.

Powered by an **Arduino Mega**, controlled via **IR remote**, and built to roll in style.

---

## 🔧 Features

- 🎮 IR remote control interface (via `IRremote.h`)
- ⚙️ Omnidirectional movement using 4 Mecanum wheels
- 🧠 Modular code (easy to expand)
- 🔌 Powered by an H-bridge shield
- 🧾 IR command mapping (move, stop, turn)
- 👨‍💻 Beginner-friendly design & clean structure

---

## 🧰 Hardware

| Component          | Description                      |
|--------------------|----------------------------------|
| Arduino Mega       | Brain of the rover               |
| H-Bridge Shield    | Controls motor direction         |
| 4x Mecanum Wheels  | Enables omnidirectional motion   |
| IR Receiver Module | Receives commands from remote    |
| Remote Control     | Any IR TV/DVD remote             |
| Power Supply       | Battery pack or regulated source |

---

## 💻 Software

- **Language**: Arduino C++
- **Library used**: [`IRremote`](https://github.com/Arduino-IRremote/Arduino-IRremote)

### 📦 Install IRremote
In the Arduino IDE:
