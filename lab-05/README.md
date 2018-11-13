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

### Instructions

You have a choice here. So far, you have practiced Through-Hole Soldering (THT), whereas the microcontroller used on the badge is an Surface Mount (SMD) component. This is somewhat trickier to solder successfully without a bit of practice! Let me know if you are game to give it a go, else I can do it for you and let you get on with the rest of the badge.

Either way, make sure your iron is nice and hot and that all your components are ready!

1. Pick up a resistor and bend the lead wires to each side of the body of the component until they are at 90 degrees to the main body, then insert this into the holes as per the image below, and press the body of the resistor until it is firmly against the front face of the PCB, then using your other hand bend the legs of the resistor outwards to hold it in place.
![First resistor](https://raw.githubusercontent.com/kiwicon-badge/badge/master/lab-05/images/step01.png)
2. Solder both legs of the resistor into place.
3. Snip off the legs, about 1-1.5mm from the PCB.
4. Repeat step 1 for the next four resistors and insert them as per the image below:
![Remaining resistors](https://raw.githubusercontent.com/kiwicon-badge/badge/master/lab-05/images/step03.png)
5. Solder these into place and snip of the legs as per step 3.
6. Next, you will start inserting the LEDs. It is CRITICAL that you make sure that you always, always, always insert the LED legs so that the short leg (cathode / negative) is closest to the dot on the front of the PCB, as per the image below:
![Cathode dot](https://raw.githubusercontent.com/kiwicon-badge/badge/master/lab-05/images/step06.png)
7. You can either insert on LED at a time (probably a good idea to start with) or insert a whole row at a time, but either way, always double check you have your LEDs oriented the correct way. Bend the legs and solder into place.
![Inserting LEDs](https://raw.githubusercontent.com/kiwicon-badge/badge/master/lab-05/images/step07.png)
8. Once you have done a row of LEDs, give me a call to check it out. If it all looks like the below and I am happy, carry on!
![Check LEDs](https://raw.githubusercontent.com/kiwicon-badge/badge/master/lab-05/images/step08.png)
9. Next, you will solder in the header pins. These are a bit tricky, as you cannot simply bend the legs. If there is some bluetac handy, you can use a bit of this to hold them in place while you solder them. First do the two rows of three header pins, then do the single row of three.
![Header pins](https://raw.githubusercontent.com/kiwicon-badge/badge/master/lab-05/images/step09.png)
![Header pins](https://raw.githubusercontent.com/kiwicon-badge/badge/master/lab-05/images/step10.png)
10. Similar to the header pins, the battery holder is a bit fiddly. Use some bluetac to hold it in place if it is available. If not, you will get there ;) The pins are a bit larger, so may take a bit more heat. Try putting the soldering iron on the holder pins for a bit before you then also touch the PCB pads.
![Battery holder](https://raw.githubusercontent.com/kiwicon-badge/badge/master/lab-05/images/step11.png)
11. You are done! The next step is to program it!
![You're done](https://raw.githubusercontent.com/kiwicon-badge/badge/master/lab-05/images/step12.png)


