## Loading a Program

The Attiny13a is a fairly limited device, with only 1024 bytes of flash storage in which to store your program, and 64 bytes of RAM (it also has 64 bytes of EEPROM, but we won't be using that today). However, it is still a great platform to learn with and, as a quick web search shows, what you can do with it may only limited by your imagination.

In this lab, we will run through how to use the Arduino IDE and the USBAsp programmer to create and upload new code to the device. (If we're running on schedule, we'll also use the command line tools available.)

Annoyingly, USBAsp devices number their pins different to what is used on microcontrollers (this caused me a LOT of frustration at one point). Instead of starting on one side and going around, the pinouts jump from side to side:
![USBAsp pinouts](https://raw.githubusercontent.com/kiwicon-badge/badge/master/lab-03/images/usbasp_pinout.png)

Make sure you use the above pinouts!

### Tools

| Item &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; | &nbsp; &nbsp; &nbsp; &nbsp; Count |
| --------------------------------- |-------:|
| USBAsp programmer                 |     x1 |
| Female to male jumper wires       |     x6 |
| Laptop, with Arduino installed    |     x1 |
| Breadboard setup from Lab-02      |     x1 |

### Instructions

0. Make sure you have your breadboard setup as per [Lab-02](https://github.com/kiwicon-badge/badge/blob/master/lab-02/README.md). Remove the battery and set it aside.
1. Make sure your Arduino IDE is installed.
2. Open the IDE settings (File->Settings) and paste the URL below in “Additional URLs for the board manager”, then click “OK”:
https://mcudude.github.io/MicroCore/package_MCUdude_MicroCore_index.json
3. Open the Boards manager (Tools->Board->Boards manager), search for and install the “MicroCore” package. This will enable programming the ATtiny13a microcontroller.
4. In tools, select the right options. Board: “ATtiny13”; Clock: “1.2MHz internal oscillator”; BOD: “Disabled”; Complier LTO: "Disabled".
5. In tools, select the "USBAsp" programmer.
6. Connect the programmer to your breadboard as per below:

7. In tools hit Burn the bootloader (actually it's not a true bootloader, just AVR fuses), you should see some LEDs flashing, if you don't encounter any problem you can go ahead.
8. Download the ["Blinky lights"](https://raw.githubusercontent.com/kiwicon-badge/badge/master/lab-03/files/attiny13a_blink.ino) sketch.
9. Upload this to the badge (Sketch -> Upload). While uploading the sketch, you should see some LEDs flashing. If the Arduino IDE doesn't throw any error you can go ahead, else ask for help.
10. The breadboard should now be drawing power via the USBAsp, so the microcontroller should be powered up and start the sketch.
11. Use the Arduino IDE to change the timeouts (i.e. the "500" millisecond wait) and reupload your code to see the changes take effect.
12. Disconnect the jumpers to the USBAsp and plug in the battery.

### Additional Resources
+ https://quadmeup.com/programming-attiny85-and-attiny45-with-arduino-ide/
