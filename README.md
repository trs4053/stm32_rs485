
#2 stm 32 communication with rs485 module

Purpose: Establish serial communication between 2 stm32.

Hardware requirements:
1. Bluepillf103 * 2
2. rs485 module * 2
3. stlink V2 programmer
4. Jumper wire
5. Twisted copper wire

Software: Arduino ide, Stm32cubeprogrammer 

Documentation: 
1. stm32duino: https://github.com/stm32duino/Arduino_Core_STM32/wiki

Connection:

| rs485 | bluepill |
--------------------
| vcc    | 5V      |
| gnd    | gnd     |
| DI     | PA9(TX  |
| RO     | PA10(RX)|
|DE,RE   | Digital |

DE,RE => high => transmit
DE,RE => low => recieve

Between rs485 module: A to A, B to B.

Code: 
For master node:
For slave node:

Comments:
Range: 4000ft according to google. Tested for 1 gauge copper wire.
Heating: No heating issues detected in testing.

![The-Generic-STM32F103-Pinout-Diagram](https://github.com/trs4053/stm32_rs485/assets/102474740/d3178e46-b70b-4e11-b6b6-ca5eedf3a0ca)


Issues: 
1. All pins of the bluepill does not support 5V. Rs485 supports 5V only.
2. Programmer may not be detected at the pc port.
3. For programming the bluepill for the very first time, Boot0 has to be moved from 0 to 1.



