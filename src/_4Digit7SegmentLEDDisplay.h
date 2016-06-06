#ifndef __4Digit7SegmentLEDDisplay_H__
#define __4Digit7SegmentLEDDisplay_H__



class _4Digit7SegmentLEDDisplay {
public:
  _4Digit7SegmentLEDDisplay(int digitPins[4], int segmentsPins[8]);
private:
        const static bool DigitOn;
        const static bool DigitOff;
        const static bool SegOn;
        const static bool SegOff;
        int DigitPins[];
        int SegmentPins[];
};

#endif
