
# 2 stm 32 communication with rs485 module

Purpose: Establish serial communication between 2 stm32.

Work status: Done.

How it works:

A master node sends info to the slave node. The slave node recieves the info and prints it in serial monitor.

Hardware requirements:
1. Bluepillf103 * 2
2. rs485 module * 2
3. stlink V2 programmer
4. Jumper wire
5. Twisted copper wire
6. Micro usb 

Software: Arduino ide, Stm32cubeprogrammer 

Documentation: 

1. stm32duino: https://github.com/stm32duino/Arduino_Core_STM32/wiki

Connection:

| rs485  | bluepill    |
|--------|-------------|
| vcc    | 5V          |
| gnd    | gnd         |
| DI     | PA9(TX)     |
| RO     | PA10(RX)    |
|DE,RE   | Digital pin |

DE,RE => high => transmit

DE,RE => low => recieve

Between rs485 module: A to A, B to B.

Code: 

For master node: Masternode.ino

For slave node: Slave_node.ino

Comments:

Range: 4000ft(~850 gauge) according to google. Tested for 1 gauge copper wire.

Heating: No heating issues detected in testing. Tested for 30 minutes.

![The-Generic-STM32F103-Pinout-Diagram](https://github.com/trs4053/stm32_rs485/assets/102474740/d3178e46-b70b-4e11-b6b6-ca5eedf3a0ca)


Issues: 
1. All pins of the bluepill does not support 5V. Rs485 supports 5V only. Check the pinout diagram for info.
2. Programmer may not be detected at the pc port. To solve this in linux open cmd line and type "ls -l /dev/bus/usb/00*". It will show you the usb devices connected to the pc and each will be assigned a 3 digit number. Then type "sudo chmod o+w /dev/bus/usb/001/***". Replace the *** with the 3 digit of the programmer.
4. For programming the bluepill for the very first time, Boot0 has to be moved from 0 to 1.




