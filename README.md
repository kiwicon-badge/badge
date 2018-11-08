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
*TODO: Insert diagram...*
2. Put the multimeter into `Voltage - DC` mode and measure the voltage across various components (touch each leg).
3. Add the second resistor to the circuit in series (i.e. one after the other in a circuit) as per the diagram below. Observe the changes in the LED brightness and use the multimeter to measure the differing voltage drops.
*TODO: Insert diagram...*
4. Add the second resistor to the circuit in parallel (i.e. both starting at the same point and finishing at the same point). Observe the changes in the LED brightness and use the multimeter to measure the differing voltage drops.
*TODO: Insert diagram...*

### Additional Resources
+ https://www.electronics-tutorials.ws/
+ https://learn.sparkfun.com/tutorials/how-to-use-a-breadboard
+ https://learn.sparkfun.com/tutorials/voltage-current-resistance-and-ohms-law
+ https://learn.sparkfun.com/tutorials/what-is-a-circuit


## Microcontrollers
This lab will teach the basics of constructing a circuit which includes a microcontroller.

Microcontrollers are cheap devices which allow you to introduce programmable behaviour to a system. This can be used for pretty much anything you can imagine, from simply telling a LED to blink, to controlling the lights in your home, and even to creating a conference badge of blinky LEDs. Of course, you can do more than turning lights on and off, too ;)

The badge uses the relatively simple and inexpensive Atmel AVR Attiny13A chip. The Attiny family of microcontrollers includes a range of minimal very low power devices which are great for small projects. Other common microcontrollers you may come across include the Atmel Atmega range, commonly used in Arduino devices.

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
1. Assemble the components into a circuit based on the following diagram:
*TODO: Insert diagram*
2. Once all is connected, insert the battery into the battery holder. Make sure the flat side with writing is up.
3. All going well, the preprogrammed microcontroller should alternately flash both LEDs.


## Loading a Program

The Attiny13a is a fairly limited device, with only 1024 bytes of flash storage in which to store your program, and 64 bytes of RAM (it also has 64 bytes of EEPROM, but we won't be using that today). However, it is still a great platform to learn with and, as a quick web search shows, what you can do with it may only limited by your imagination.

In this lab, we will run through how to use the Arduino IDE to create and upload new code to the device. (If we're running on schedule, we'll also use the command line tools available.)

### Tools

| Item &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; | &nbsp; &nbsp; &nbsp; &nbsp; Count |
| --------------------------------- |-------:|
| USBAsp programmer                 |     x1 |
| Female jumper wires               |     x6 |
| Laptop, with Arduino installed    |     x1 |

### Instructions

1. Make sure your Arduino IDE is installed.
2. Open the IDE settings (File->Settings) and paste the URL below in “Additional URLs for the board manager”, then click “OK”:
https://mcudude.github.io/MicroCore/package_MCUdude_MicroCore_index.json
3. Open the Boards manager (Tools->Board->Boards manager), search and install the “MicroCore” package.
4. In tools, select the right options. Board: “ATtiny13”; Clock: “1.2MHz internal oscillator”; BOD: “Disabled”; Complier LTO: "Disabled".
5. In tools,  the "USBAsp" programmer.
6. Connect the programmer and the badge, the small dot near the 6-pin connector is the first pin (MISO), see the photos for alternative connections.
7. In tools hit Burn the bootloader (actually it's not a true bootloader, just AVR fuses), you should see some LEDs flashing, if you don't encounter any problem you can go ahead.
8. Download the "Blinky lights" sketch *TODO: Insert link to sketch*
9. Upload this to the badge (Sketch -> Upload). While uploading the sketch, you should see some LEDs flashing. If the Arduino IDE doesn't throw any error you can go ahead, else ask for help.
10. Connect the jumper to the right-hand two header pins to power on the badge (powered by the USBAsp). You should now see blinky lights.

### Additional Resources
+ https://quadmeup.com/programming-attiny85-and-attiny45-with-arduino-ide/


## Soldering
Now you have built a circuit, lets learn how to make something more permanent using solder to weld components together.

Soldering is a key skill when working with electronics. However, the only way to become skilled at soldering is to practice!

*Note:*

+ *Soldering irons are hot! Always be aware of where you soldering iron is, especially the tip. Never lay it on the table, always put it back in the holder.*
+ *Solder and solder flux creates fumes which may irritate. Alway solder in a well ventilated area.*
+ *Solder contains lead (Pb), a toxic substance. Do not ingest it! Wash your hands after soldering and make sure you do not hold components in your mouth to prevent this!*

### Tools

| Item &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; | &nbsp; &nbsp; &nbsp; &nbsp; Count |
| --------------------------------- |-------:|
| Soldering iron kit (wand, cradle, brass sponge) |     x1 |
| Multimeter                        | Shared |
| Flush cutters                     |     x1 |

### Components

| Item &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; | &nbsp; &nbsp; &nbsp; &nbsp; Count |
| --------------------------------- |-------:|
| PCB Perfboard                     |     x1 |
| Solder                            |     x1 |
| Resistor / Solid core wire        |    x10 |

### Instructions
1. Plug in your soldering iron, set it to 325 degrees, and place it on the cradle to warm up. Make sure you are always aware of you iron and its cable!
2. Prep your first item to solder. Insert each leg of a resistor through a hole on the perfboard, then bend the wires away from the component, holding it in place. TODO: Insert image of resistor in perfboard.
3. Place the perfboard in the helping holder.
4. Test your soldering irons tempurature by gently touching the end of the solder to the iron, about 1-2mm back from the tip. This is the hottest part of the iron, not the tip. If the solder melts, you're good to go. This is called "tinning" the iron. Wipe off the excess solder using the brass sponge.
5. Gently press the side of your soldering iron, about 1-2mm back from the tip, against the leg of the resistor, also touching the metal pad of the perfboard hole. Let both heat up for a couple of seconds, then gently touch the end of the solder to the soldering iron near where it touches the component.
6. The solder wire should melt and wick into the gap between the resistor and the perfboard. When it does, pull away the solder, then the iron.
7. Et voila! You've made your first solder joint.

*Note:
+ You are not trying to wipe solder from the iron onto the components. You should instead heat the components up and let capilliary action work its magic. As long as everything is up to temperature, solder will quickly wick into the joint.
+ Use the side of the tip (aka the sweet spot), not the very tip of the iron. This is the hottest part and works the best to quickly get the components up to temperature. That said, if you need to get into a tight spot or are doing SMD work on small traces, use the tip,.
+ Aim to heat both the pad and the part you want to solder evenly and at the same time. Be aware that larger components will take more heat, so you will have to press the iron against those first before also touching the pad.
+ Regularly tin your soldering iron and clean it off in the brass sponge. A clean tip works much better than a dirty one!*

### Additional Resources
+ https://learn.sparkfun.com/tutorials/how-to-solder-through-hole-soldering/all
+ EEVblog #180 - Soldering Tutorial Part 1 - Tools https://www.youtube.com/watch?v=J5Sb21qbpEQ
+ EEVblog #183 - Soldering Tutorial Part 2 https://www.youtube.com/watch?v=fYz5nIHH0iY


## Badge Assembly
The fun bit! Now you have the skills, we're going to put them all together to construct something useful. Take your time and make sure you get it right, less speed is more haste when it comes to assembly!

### Tools

| Item &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; | &nbsp; &nbsp; &nbsp; &nbsp; Count |
| --------------------------------- |-------:|
| Soldering iron kit (wand, cradle, brass sponge) |     x1 |
| Multimeter                        | Shared |
| Flush cutters                     |     x1 |

### Components

| Item &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; | &nbsp; &nbsp; &nbsp; &nbsp; Count |
| --------------------------------- |-------:|
| Badge PCB                     |     x1 |
| Coin cell battery holder |     x1 |
| Headers, male (pin) |     x9 |
| Jumper |     x1 |
| 100 Ohm resistor                     |     x5 |
| Green LED                    |     x20 |
| Solder                            |     x1 |
| Resistor / Solid core wire        |    x10 |


## Circuit and PCB Design

The availability of Tools like Kicad, Eagle, and Fritzing make circuit and PCB design easier than ever.  Add to that the various online vendors in China and you can quickly get your prototypes realised as actual products.

There are also heaps of libraries of components available for download, meaning you can easily to turn your circuit design into a physical model and to create a bill of materials (BOM).

### Tools

Grab `Eagle` install files off the webserver.

### Instructions

1. Install AutoDesk Eagle.
2. Start Eagle and create an Autodesk account.
3.  Grab the SCH files:
*TODO: Insert link to files*
4. Open the files in Eagle

### Additional Resources

+ Tutorial 1 for Eagle: Schematic Design https://www.youtube.com/watch?v=1AXwjZoyNno
+ https://www.snapeda.com/search/?csrfmiddlewaretoken=isH0OevEUKxVNXRyAFfQ1jB1RUK12JNG&q=led+matrix&search-type=parts
+ AllPCB, PCB manufacturer - https://allpcb.com
+ How to export your files from Eagle - https://www.allpcb.com/sns/Gerber+File/2017-02-24_1_10_4819_Create+a+Gerber+File+with+Eagle/rpllst.html

