#include <Arduino.h>
#include "7SegmentLEDDisplaySymbols.h"

#ifndef __4Digit7SegmentLEDDisplay_H__
#define __4Digit7SegmentLEDDisplay_H__

#define INPUT 0
#define OUTPUT 1

class _4Digit7SegmentLEDDisplay {
public:
  _4Digit7SegmentLEDDisplay(int digitPins[4], int segmentsPins[8]);
  void ShowText(char* symbols[4]);
private:
        const static bool DigitOn;
        const static bool DigitOff;
        const static bool SegOn;
        const static bool SegOff;
        const static int DIGIT_PINS_COUNT;
        const static int SEGMENT_PINS_COUNT;
        const static int CHAR_COUNT;
        const static int SYMBOLS_COUNT;
        int* DigitPins;
        int* SegmentPins;
        int* sympols[4];
        LEDSymbols LEDSymbol;
};

#endif
