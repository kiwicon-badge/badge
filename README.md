# Kiwicon Intro to Badge Hacking

This repo is to host the instructions and code for the Kiwicon 2038 Intro to Badge Hacking course (https://www.kiwicon.org/the-con/training/intro-to-badge-hacking/).

## Electrical Circuits

In the first part of the course, we are going to learn a bit about the laws which govern how electricity behaves and about the components we will utilise to put it to work.

Electrical circuits are all about electrons (the ‘charge’) flowing through a conductive path (the 'current') from a low potential area to a high potential area (the ‘voltage’). There are many components we can use to modify how that charge flows, including interrupting it (‘switches’), limiting it (‘resistors’), storing it (‘capacitors’), and transforming its energy to another form (‘LEDs’).

The key equation to learn which governs how this charge moves is:
```voltage = current * resistance (V = IR)```

In the first lab, we will use a battery (changing chemical energy to potential energy) and some simple components to create some simple circuit and measure the differences in voltage and current at various points and learn the differences in between series and parallel circuits.

### Tools

| Item &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; | &nbsp; &nbsp; &nbsp; &nbsp; Count |
| --------------------------------- |-------:|
| Multimeter                        | Shared |

### Components

| Item &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; | &nbsp; &nbsp; &nbsp; &nbsp; Count |
| --------------------------------- |-------:|
| Breadboard                        |     x1 |
| LED                               |     x2 |
| 100 Ohm resister                  |     x2 |
| Button battery holder             |     x1 |
| Button battery (CR2025 or CR2032) |     x1 |
| Jumper wires                      |     x2 |

### Instructions

1. Assemble the components into a circuit based on the following diagram.
```TODO: Insert diagram...```
2. Put the multimeter into `Voltage - DC` mode and measure the voltage across various components (touch each leg).
3. Add the second resistor to the circuit in series (i.e. one after the other in a circuit) as per the diagram below. Observe the changes in the LED brightness and use the multimeter to measure the differing voltage drops.
```TODO: Insert diagram...```
4. Add the second resistor to the circuit in parallel (i.e. both starting at the same point and finishing at the same point). Observe the changes in the LED brightness and use the multimeter to measure the differing voltage drops.
```TODO: Insert diagram...```

### Additional Resources
+ https://www.electronics-tutorials.ws/


## Soldering
Now you have built a circuit, lets learn how to make something more permanent using solder to weld components.

Soldering is a key skill when working with electronics. However, the only way to become skilled at soldering is to practice!

*Note:*

+ *Soldering irons are hot! Always be aware of where you soldering iron is, especially the tip. Never lay it on the table, always put it back in the holder.*
+ *Solder and solder flux creates fumes which may irritate. Alway solder in a well ventilated area.*
+ *Solder contains lead (Pb), a toxic substance. Do not ingest it! Wash your hands after soldering and make sure you do not hold components in your mouth to prevent this!*

### Tools

| Item &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; | &nbsp; &nbsp; &nbsp; &nbsp; Count |
| --------------------------------- |-------:|
| Soldering iron                    |     x1 |
| Multimeter                        | Shared |

### Components

| Item &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; | &nbsp; &nbsp; &nbsp; &nbsp; Count |
| --------------------------------- |-------:|
| PCB Perfboard                     |     x1 |
| Solder                            |     x1 |
| Resistor / Solid core wire        |    x10 |

### Instructions



### Additional Resources
+ https://learn.sparkfun.com/tutorials/how-to-solder-through-hole-soldering/all
+ EEVblog #180 - Soldering Tutorial Part 1 - Tools https://www.youtube.com/watch?v=J5Sb21qbpEQ
+ EEVblog #183 - Soldering Tutorial Part 2 https://www.youtube.com/watch?v=fYz5nIHH0iY


## Badge Assembly
The fun bit! 

## Badge Programming

## Circuit and PCB Design

Unlike times past, designing and building your own PCBs is now super easy and inexpensive. Tools like Kicad, Eagle, and Fritzing make circuit and PCB design significantly easier and the various online vendors in China make it super simple to get your prototypes realised as actual products.

There are also heaps of libraries of components available for download, meaning you can easily to turn your circuit design into a physical model and to create a bill of materials (BOM).

### Tools

Grab `Eagle` off the webserver and install it.
```TODO: Add link```

### Components

Grab the following files off the webserver:
+ ```TODO: Add link to sch file```

### Further Reading
+ Tutorial 1 for Eagle: Schematic Design - https://www.youtube.com/watch?v=1AXwjZoyNno
+ https://www.allpcb.com/sns/Gerber+File/2017-02-24_1_10_4819_Create+a+Gerber+File+with+Eagle/rpllst.html
+ https://www.snapeda.com/eagle/


## Sourcing Components

Sourcing compoents for projects can be time consuming and expensive. Various tools will let you automate the process somewhat, but mostly you will still find it is a manual process of reading specs / datasheets, weighing up differences in pricing, reliability of the vendor, time for delivery, cost of delivery, etc.

### Instructions

1. Compore the different prices / delivery times / products when trying to source 20x 100 Ohm resistors and 80x green LEDs at:
  + www.aliexpress.com
  + www.jaycar.co.nz
  + www.digikey.co.nz
  + www.element14.co.nz

