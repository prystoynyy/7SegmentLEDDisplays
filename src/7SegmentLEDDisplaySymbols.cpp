#include "7SegmentLEDDisplaySymbols.h"

LEDSymbols::LEDSymbols(){
        Symbols.put("A",getArray({1,2,3}));
}

int* LEDSymbols::Get(char* symbol){
        int* result;
        Symbols.get(symbol, result);
        return result;
}

int* LEDSymbols::getArray(int data){
        int* result;
        for(int i= 0; i< data.lenght; i++) {
                result[i] = data[i];
        }
        return result;
}
