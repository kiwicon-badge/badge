## Programming Your Badge

Similar to the earlier lab, you will now program the badge!

Use the following pinout when connecting the USBAsp to the badge:

![USBAsp pinouts](https://raw.githubusercontent.com/kiwicon-badge/badge/master/lab-06/images/badge_pinout.png)

Once final complication is that the badge uses a feature that is called "charlieplexing". As a microcontroller can have three states - input, output, and high impedance - designers can leverage this and the property of LEDs - that current can only flow forward through the component - to make up for the fact that they only have a limited number of pins. For example, the following schematic shows how to control 6 LEDs with only 3 pins:

![Charlieplexing](https://raw.githubusercontent.com/kiwicon-badge/badge/master/lab-06/images/6with3.png)

(*Rather than using charlieplexing, you can also use additional components. I have some shift registers here, which you can breadboard with if you choose.*)

In this case, the badge uses only 5 pins to control 20 LEDs individually.

![Badge Charlieplexing](https://raw.githubusercontent.com/kiwicon-badge/badge/master/lab-06/images/charlieplexing.png)

This means that to turn on a specific LED, you have to follow the below table:

| LED (ROW/COLUMN) | HIGH PIN | LOW PIN&nbsp; |
| ------|--:|--:|
| R1/C1 | 4 | 0 |
| R1/C2 | 3 | 0 |
| R1/C3 | 2 | 0 |
| R1/C4 | 1 | 0 |
| R2/C1 | 4 | 1 |
| R2/C2 | 3 | 1 |
| R2/C3 | 2 | 1 |
| R2/C4 | 0 | 1 |
| R3/C1 | 4 | 2 |
| R3/C2 | 3 | 2 |
| R3/C3 | 1 | 2 |
| R3/C4 | 0 | 2 |
| R4/C1 | 4 | 3 |
| R4/C2 | 2 | 3 |
| R4/C3 | 1 | 3 |
| R4/C3 | 0 | 3 |
| R5/C1 | 3 | 4 |
| R5/C2 | 2 | 4 |
| R5/C3 | 1 | 4 |
| R5/C4 | 0 | 4 |

### Tools

| Item &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; | &nbsp; &nbsp; &nbsp; &nbsp; Count |
| --------------------------------- |-------:|
| USBAsp programmer                 |     x1 |
| Female to male jumper wires       |     x6 |
| Laptop, with Arduino installed    |     x1 |
| Completed badge                   |     x1 |

### Instructions

1. Remove the battery from your badge.
2. Grab the [basic code](https://raw.githubusercontent.com/kiwicon-badge/badge/master/lab-03/files/attiny13a_blink.ino) sketch.
3. Open this in your Arduino IDE, and upload this to the badge (Sketch -> Upload). While uploading the sketch, you should see some LEDs flashing. If the Arduino IDE doesn't throw any error you can go ahead, else ask for help.
4. The breadboard should now be drawing power via the USBAsp, so the microcontroller should be powered up and start the sketch.

From here on is hacking time! Come up with some new ideas and see what you can create!

### Additional Resources
+ https://en.wikipedia.org/wiki/Charlieplexing
