#include <Control_Surface.h> // Include the Control Surface library
 
// Instantiate a MIDI over USB interface.
USBMIDI_Interface midi;
 
// Instantiate a CCRotaryEncoder object
CCRotaryEncoder enc {
  {3, 4},       // pins
  // General Purpose Controller #1 on MIDI channel 1:
  {MIDI_CC::General_Purpose_Controller_1, Channel_1},
  1,            // optional multiplier if the control isn't fast enough
};

// Rotary Encoder pushbutton
CCButton enc_button {
  2,
  {MIDI_CC::General_Purpose_Controller_2, Channel_1},
};
 
CCButton switch_1 {
  5,
  {MIDI_CC::General_Purpose_Controller_3, Channel_1},
};

CCButton switch_2 {
  6,
  {MIDI_CC::General_Purpose_Controller_4, Channel_1},
};

CCButton switch_3 {
  23,
  {MIDI_CC::General_Purpose_Controller_5, Channel_1},
};

CCButton switch_4 {
  22,
  {MIDI_CC::General_Purpose_Controller_6, Channel_1},
};

CCButton switch_5 {
  21,
  {MIDI_CC::General_Purpose_Controller_7, Channel_1},
};

CCButton switch_6 {
  20,
  {MIDI_CC::General_Purpose_Controller_8, Channel_1},
};

// Instantiate a CCPotentiometer object
CCPotentiometer potentiometer {
  A0,                                   // Analog pin connected to potentiometer
  {MIDI_CC::Pan, Channel_1}, // Channel Pan of channel 1
};
 
void setup() {
  // Select the correct relative MIDI CC mode.
  // Options:
  //   - TWOS_COMPLEMENT (default)
  //   - BINARY_OFFSET
  //   - SIGN_MAGNITUDE
  //   - NEXT_ADDRESS
  // Aliases:
  //   - REAPER_RELATIVE_1
  //   - REAPER_RELATIVE_2
  //   - REAPER_RELATIVE_3
  //   - TRACKTION_RELATIVE
  //   - MACKIE_CONTROL_RELATIVE
  //   - KORG_KONTROL_INC_DEC_1
  RelativeCCSender::setMode(relativeCCmode::TRACKTION_RELATIVE);
  Control_Surface.begin(); // Initialize Control Surface
}
 
void loop() {
  Control_Surface.loop(); // Update the Control Surface
}
