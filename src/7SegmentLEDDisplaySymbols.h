#ifndef __7SegmentLEDDisplaySymbols_H__
#define __7SegmentLEDDisplaySymbols_H__

#include <HashMap.h>

class LEDSymbols {
public:
        LEDSymbols();
        int* Get(char* symbol);
private:
        HashMap<char*, int*> Symbols;
        int* getArray(int data[]);
};

#endif
