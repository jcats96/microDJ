# microDJ
A minimal MIDI DJ controller that fits in an Altoids tin, using the wonderful [Control Surface library](https://github.com/tttapa/Control-Surface).

I started laptop DJing with [Mixxx](https://www.mixxx.org/) and I wanted a controller, but most commercially available controllers are too full featured. I wanted to start with the bare minimum, a crossfader, and work my way up from there. I've since realized that I need a few more controls. The handheld size makes it fun to pass around at a party.

## Features

One crossfader.

One jog wheel for seeking on a track.

2 push buttons to pause/play deck 1 and 2.

4 push buttons for samples.

MIDI over Micro USB for connecting to your computer. 

### MIDI Channel Mapping

| Control          | MIDI Channel |
|------------------|--------------|
| Jog Wheel        | 16           |
| Jog Wheel Button | 17           |
| Crossfader       | 10           |
| Button 1         | 18           |
| Button 2         | 19           |
| Button 3         | 80           |
| Button 4         | 81           |
| Button 5         | 82           |
| Button 6         | 83           |

## Mixxx Mapping

Controls are mapped for Mixxx in an xml file. You'll also need the javascript file for handling the jog wheel. Use the instructions here to place the files in the right location for your Mixxx installation.

## Parts Needed
You'll need the following:
- Altoids tin
- Arduino Micro 

I used an Arduino Micro with headers, and I also needed: 
- 170 point mini breadboard

Make sure all of these parts have mounting screws.
- slide potentiometer, =<75mm length
- rotary encoder
- knob for the rotary encoder
- 6 push buttons, SPST Normally Open diameter <9mm

## Build Guide
coming soon

## Future Improvements

It would be nice to have the jog wheel in a bank so it can also map to another MIDI channel to seek on deck 2.

It would also be nice to use a Raspberry Pi Pico - it's much cheaper. It's been a few years since I last developed with microcontrollers, and I'm most familiar with Arduinos. But the Pi Pico is way cheaper at $4 instead of the $25 for an Arduino Micro.