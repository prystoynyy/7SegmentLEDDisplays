#include "_1Digit7SegmentLEDDisplay.h"

const int _1Digit7SegmentLEDDisplay::SEGMENT_PINS_COUNT = 8;
const int _1Digit7SegmentLEDDisplay::CHAR_COUNT = 4;
const int _1Digit7SegmentLEDDisplay::SYMBOLS_COUNT = 8;

_1Digit7SegmentLEDDisplay::_1Digit7SegmentLEDDisplay(int segmentsPins[8]){
        this->SegmentPins = segmentsPins;
        for (int seg=0; seg<SEGMENT_PINS_COUNT; seg++) {
                pinMode(SegmentPins[seg], OUTPUT);
        }
        this->LEDSymbol = LEDSymbols();
}


void _1Digit7SegmentLEDDisplay::ShowText(char* symbol){

        this->sympol = this->LEDSymbol.Get(symbol);

        for (int seg=0; seg<SEGMENT_PINS_COUNT; seg++) {
                //Turn the relevant segment on
                digitalWrite(SegmentPins[seg],this->sympol[seg]);

        }
}
