# NetStruct-CLI 🌐

A lightweight, fast, and robust Command-Line Interface (CLI) tool written in C for IPv4 subnetting and network calculations. 

Built to simulate how enterprise routers process IP addresses at the binary level, this tool avoids heavy math libraries in favor of highly optimized bitwise operations.

## 🚀 Features

*   **Strict IPv4 Validation:** Parses and validates user input, preventing buffer overflows or invalid IP formats.
*   **Subnet Mask Generation:** Dynamically calculates masks from CIDR notation using bit-shifting (`<<`).
*   **Network Address Routing:** Uses Bitwise AND (`&`) to isolate the network portion of the IP.
*   **Broadcast Address Calculation:** Combines the binary inverter (`~`) and Bitwise OR (`|`) to find the subnet's broadcast address.
*   **Host Capacity:** Computes total usable hosts per subnet.

## 🛠️ Technical Stack

*   **Language:** C (Standard library only)
*   **Compiler:** GCC
*   **Build Automation:** Make / Bash Shell scripting
*   **Environment:** Cross-platform (Windows/Linux/macOS)

## ⚙️ Build & Run

Clone the repository and compile the project using the provided build tools.

**Option 1: Using Make (Standard)**
```bash
make
./netstruct.exe
```
**Option 2: Using the Bash Fallback Script**
```bash
./build.sh
./netstruct.exe
```

## What I Learned
This project was built to master low-level memory management and binary operations in C:
* **Bitwise Operations:** Real-world application of `&`, `|`, `~`, and `<<` for subnet masking.
* **Input Buffer Management:** Handling `stdin` correctly with `sscanf` and clearing leftover characters to prevent infinite loops.
* **Build Systems:** Writing a `Makefile` to automate the `GCC` compilation pipeline.
