Overview
========

The lwip_udpecho demo application demonstrates a UDP echo demo on the lwIP TCP/IP stack with bare metal KSDK or
FreeRTOS, which uses the UDP protocol and acts as an echo server. The application sends back the received UDP packets
from the PC, which can be used to test whether a UDP connection is available.

Supported Hardware

These Freescale Freedom development platforms and Tower System modules are supported by KSDK lwip_udpecho demo.

- FRDM-K64F
- FRDM-K66F
- TWR-K60D100M
- TWR-K64F120M
- TWR-K65F180M
- TWR-KV58F220M

Note, The RMII mode is used as the default setting to initialize the ENET interface between MAC and the external PHY. It can be changed 
to MII mode if you want. Ensure the MII Mode setting in the MAC is synchronized to the setting
in TWR-SERIAL board for the external PHY.

Toolchain supported
===================
- IAR embedded Workbench 7.50.1
- Keil MDK 5.17
- GCC ARM Embedded 2015-4.9-q3
- Kinetis Development Studio IDE 3.0.0
- Atollic TrueSTUDIO 5.4.0

Hardware requirements
=====================
- Mini/micro USB cable
- RJ45 Network cable
- FRDM-K66F board
- Personal Computer

Board settings
==============
No special settings are required.

Prepare the Demo
================
1.  Connect the USB cable between the host PC and the OpenSDA USB port on the target board.
2.  Open a command window (cmd) or git bash (any terminal) and navigate to the folder that contains echotool.exe.
3.  Insert the Ethernet Cable into the target board's RJ45 port and connect it to your PC network adapter.
4.  Configure the host PC IP address to 192.168.1.100.
5.  Download the program to the target board.
7.  Either press the reset button on your board or launch the debugger in your IDE to begin running the demo.

Running the demo
================
With the demo running, from the command window, type echotool 192.168.1.102 /p udp /r 7 /d hello
The board should respond with:
Hostname 192.168.1.102 resolved as 192.168.1.102
Reply from 192.168.1.102:7, time 1 ms OK
Reply from 192.168.1.102:7, time 0 ms OK
Reply from 192.168.1.102:7, time 0 ms OK
Reply from 192.168.1.102:7, time 0 ms OK
Reply from 192.168.1.102:7, time 0 ms OK
Statistics: Received=5, Corupted=0, Lost=0

Customization options
=====================


