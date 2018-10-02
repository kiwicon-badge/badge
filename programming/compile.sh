#!/bin/bash

AVRDUDE="/Applications/Arduino.app/Contents/Java/hardware/tools/avr/bin/avrdude -C /Applications/Arduino.app/Contents/Java/hardware/tools/avr/etc/avrdude.conf"
AVRGCC="/Applications/Arduino.app/Contents/Java/hardware/tools/avr/bin/avr-gcc"
AVRSIZE="/Applications/Arduino.app/Contents/Java/hardware/tools/avr/bin/avr-size"
AVROBJCOPY="/Applications/Arduino.app/Contents/Java/hardware/tools/avr/bin/avr-objcopy"

if [ $# -ne 1 ]; then
  echo "usage: compile.sh filename.c" >&2
  exit 0
fi

if [ ! -f "$1" ]; then
  echo "error: file not found: \"$1\"" >&2
  exit 2
fi

if [ "$(echo $1 | grep -c "\.c$")" -ne 1 ]; then
  echo "error: filename must be .c file" >&2
  exit 2
fi

OBJFILE="$(echo "$1" | sed -e "s/\.c$/.o/")"
ELFFILE="$(echo "$1" | sed -e "s/\.c$/.elf/")"
HEXFILE="$(echo "$1" | sed -e "s/\.c$/.hex/")"

avr-gcc -g -DF_CPU=9600000 -Wall -Os -mmcu=attiny13a -c -o ${OBJFILE} ${1}
avr-gcc -g -DF_CPU=9600000 -Wall -Os -mmcu=attiny13a -o ${ELFFILE} ${OBJFILE}
avr-size ${ELFFILE}
avr-objcopy -j .text -j .data -O ihex ${ELFFILE} ${HEXFILE}
