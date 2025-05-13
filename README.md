# Operating System Assignment – macOS Sonoma

This repository contains my Operating System course assignment focused on macOS Sonoma. It is divided into two main parts:

- OS Documentation: A detailed technical report on the macOS architecture, virtualization, file systems, and system calls.
- System Call Implementation: A C program demonstrating the use of the sendto() system call through a simple UDP client.

## Table of Contents

1. Project Overview  
2. Part 1: OS Documentation  
3. Part 2: System Call Implementation – sendto  
4. How to Run  

## Project Overview

This project investigates macOS Sonoma (version 14) from both a theoretical and hands-on perspective. It covers:

- Virtualization using VMware and Unlocker
- File system support including APFS, exFAT, and HFS+
- System call architecture with a focus on sendto()
- Real-world installation and configuration issues with solutions
- Basic shell scripting for automation and system management

## Part 1: OS Documentation

This part consists of a detailed report covering the following topics:

- Introduction to macOS Sonoma
- Installation on VMware (x86-based systems)
- File system comparison (APFS vs. exFAT vs. HFS+)
- Security architecture and system integrity
- Virtualization technologies and limitations
- System call theory and deep-dive into sendto()

View Full Report: OS-Documentation.pdf

## Part 2: System Call Implementation – sendto

This part demonstrates how to implement a UDP client using the sendto() system call in C.

### Files Included

- systemcall_implementation/udp_sendto_client.c – A simple UDP client that sends a "Hello" message to a local server using sendto().

### How It Works

1. A UDP socket is created.
2. The sendto() function is used to send a datagram to a local server (localhost).
3. The message and destination are configured using the sockaddr_in structure.

This demonstrates how user-space applications communicate with the kernel networking stack via system calls.

## How to Run

To compile and run the UDP client on macOS:

### Step 1: Install Xcode Command Line Tools  
xcode-select --install

### Step 2: Compile the Program  
clang systemcall_implementation/udp_sendto_client.c -o udp_client

### Step 3: Run the Program  
./udp_client

### Expected Output

If successful, the program sends a "Hello" message to 127.0.0.1:8080 and prints:
Message sent to server: Hello

Ensure that a UDP server is running on port 8080 to receive the message.

## Author

Robel Yihelu  
Software Engineering Student  
Bahir Dar Institute of Technology  
ID: BDU1602340

## License

This project is submitted for educational purposes and complies with academic integrity guidelines. Third-party software (e.g., macOS, VMware) are subject to their own licenses.

