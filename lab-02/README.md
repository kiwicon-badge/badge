## Microcontrollers
This lab will teach the basics of constructing a circuit which includes a microcontroller.

Microcontrollers are cheap devices which allow you to introduce programmable behaviour to a system. This can be used for pretty much anything you can imagine, from simply telling a LED to blink, to controlling the lights in your home, and even to creating a conference badge of blinky LEDs. Of course, you can do more than turning lights on and off, too ;)

Microcontrollers generally have several major components:
+ Central Processing Unit (CPU)
+ Random Access Memory (RAM)
+ Read Only Memory (ROM)
+ Input/Output Ports (IO ports)
+ Timers and Counters
+ Interrupt Controls
+ Analog to digital converters / Digital analog converters (maybe)

The badge uses the relatively simple and inexpensive Atmel AVR Attiny13A chip. The Attiny family of microcontrollers includes a range of minimal very low power devices which are great for small projects. Other common microcontrollers you may come across include the Atmel Atmega range, commonly used in Arduino devices.

![ATtiny13A pinouts](https://raw.githubusercontent.com/kiwicon-badge/badge/master/lab-02/images/attiny_pinout.jpeg)

IO ports are what is called tri-state. They can be set to in (current sink / 0), out (current source / 1), or high impedance (no in or out, effectively removed from the circuit). In the pinout diagram above, the IO pins themselves are given various names, depending on the functions they can be used for. All you need to know for today are the green names (PB0-5, VCC, and GND). When dealing with microcontrollers, VCC is another name for positive, i.e. connect the positive side of the battery to this pin.

### Components
| Item &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; | &nbsp; &nbsp; &nbsp; &nbsp; Count |
| --------------------------------- |-------:|
| Breadboard                        |     x1 |
| LED                               |     x2 |
| 100 Ohm resister                  |     x2 |
| Button battery holder             |     x1 |
| Button battery (CR2025 or CR2032) |     x1 |
| Jumper wires                      |     x3 |

### Instructions
1. Assemble the components into a circuit based on the following diagram (note: UC dot to the left):
![UC and LED circuit](https://raw.githubusercontent.com/kiwicon-badge/badge/master/lab-02/images/uc01-breadboard.png)
2. Once all is connected, insert the battery into the battery holder. Make sure the flat side with writing is up.
3. All going well, the preprogrammed microcontroller should alternately flash both LEDs (as long as I have had time to upload [the code](https://raw.githubusercontent.com/kiwicon-badge/badge/master/lab-02/files/attiny13a_blink.ino), if not, we will get to that in a minute).

### Additional References

+ https://learn.sparkfun.com/tutorials/logic-levels/all
+ https://en.wikipedia.org/wiki/ATtiny_microcontroller_comparison_chart
+ https://www.microchip.com/wwwproducts/en/ATtiny13A

