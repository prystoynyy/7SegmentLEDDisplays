#include "_4Digit7SegmentLEDDisplay.h"


const bool _4Digit7SegmentLEDDisplay::DigitOff = 1;
const bool _4Digit7SegmentLEDDisplay::DigitOn = 0;
const bool _4Digit7SegmentLEDDisplay::SegOff = 0;
const bool _4Digit7SegmentLEDDisplay::SegOn = 1;
const int _4Digit7SegmentLEDDisplay::DIGIT_PINS_COUNT = 4;
const int _4Digit7SegmentLEDDisplay::SEGMENT_PINS_COUNT = 8;
const int _4Digit7SegmentLEDDisplay::CHAR_COUNT = 4;
const int _4Digit7SegmentLEDDisplay::SYMBOLS_COUNT = 8;

_4Digit7SegmentLEDDisplay::_4Digit7SegmentLEDDisplay(int digitPins[4], int segmentsPins[8]){
        this->DigitPins = digitPins;
        this->SegmentPins = segmentsPins;
        for (int digit=0; digit<DIGIT_PINS_COUNT; digit++) {
                pinMode(DigitPins[digit], OUTPUT);
        }
        for (int seg=0; seg<SEGMENT_PINS_COUNT; seg++) {
                pinMode(SegmentPins[seg], OUTPUT);
        }
        this->LEDSymbol = LEDSymbols();
}


void _4Digit7SegmentLEDDisplay::ShowText(char* symbols[4]){
        for(int i=0; i< CHAR_COUNT; i++) {
                this->sympols[i] = this->LEDSymbol.Get(symbols[i]);
        }

        for (int seg=0; seg<SEGMENT_PINS_COUNT; seg++) {
                //Turn the relevant segment on
                digitalWrite(SegmentPins[seg],SegOn);

                //For each digit, turn relevant digits on
                for (int digit=0; digit<DIGIT_PINS_COUNT; digit++) {
                        if (this->sympols[digit][seg]==1) {
                                digitalWrite(DigitPins[digit],DigitOn);
                        }
                        //delay(200); //Uncomment this to see it in slow motion
                }
                //Turn all digits off
                for (int digit=0; digit<DIGIT_PINS_COUNT; digit++) {
                        digitalWrite(DigitPins[digit],DigitOff);
                }

                //Turn the relevant segment off
                digitalWrite(SegmentPins[seg],SegOff);
        } //end of for
}
