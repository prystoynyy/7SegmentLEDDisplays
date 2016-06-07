#include <Arduino.h>
#include "7SegmentLEDDisplaySymbols.h"

#ifndef __1Digit7SegmentLEDDisplay_H__
#define __1Digit7SegmentLEDDisplay_H__

#define INPUT 0
#define OUTPUT 1

class _1Digit7SegmentLEDDisplay {
public:
  _1Digit7SegmentLEDDisplay(int segmentsPins[8]);
  void ShowText(char* symbol);
private:
        const static int SEGMENT_PINS_COUNT;
        const static int CHAR_COUNT;
        const static int SYMBOLS_COUNT;
        int* SegmentPins;
        int* sympol;
        LEDSymbols LEDSymbol;
};

#endif
