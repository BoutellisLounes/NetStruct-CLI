# 🌐 NetStruct-CLI: Network Subnetting & Topology Tool

![Language](https://img.shields.io/badge/Language-C-blue.svg)
![Build](https://img.shields.io/badge/Build-Makefile-orange.svg)
![Status](https://img.shields.io/badge/Status-In_Development-yellow.svg)

## 📌 About The Project

**NetStruct-CLI** is a command-line interface tool written entirely in C. Developed during my 1st year of Computer Science Engineering, it acts as a bridge between low-level programming (memory management, bitwise operations) and networking theory (Cisco CCNA concepts).

The goal of this tool is to automate IP addressing calculations, subnetting, and eventually simulate basic network topologies using dynamic data structures.

## 🚀 Features (Roadmap)

Currently in development, the tool aims to support the following features:
- [ ] **IPv4 Parser:** Convert standard IP strings (e.g., `192.168.1.1`) into 32-bit integers.
- [ ] **Subnet Calculator:** Calculate Network Address, Broadcast Address, and valid host ranges based on a CIDR mask (e.g., `/24`).
- [ ] **VLSM Support:** (Variable Length Subnet Masking) logic for efficient IP distribution.
- [ ] **CLI Menus:** A clean, interactive terminal interface for the user.

## 🗂️ Project Architecture

This project follows a professional modular C architecture:
*   `src/`: Contains the actual source code (`.c` files) separated by logic (IP calculations, CLI menus).
*   `include/`: Contains the header files (`.h`) exposing the functions to other modules.
*   `build/`: Used for compiled object files.
*   `Makefile`: Automates the compilation process.

## ⚙️ How to Compile

*Instructions will be updated once the Makefile is fully configured.*
