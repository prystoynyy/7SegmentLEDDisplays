#include "7SegmentLEDDisplaySymbols.h"

int LOW = 0;
int HIGH = 1;

//looks terrible, but I didn't find a way to copy Arrays or merge them from parts
//N is for numbers and NxP is a number with a decimal point behind
int BLANK[] = {LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW};
int N0[]    = {HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, LOW, LOW};
int N0P[]   = {HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, LOW, HIGH};
int N1[]    = {LOW, HIGH, HIGH, LOW, LOW, LOW, LOW, LOW};
int N1P[]   = {LOW, HIGH, HIGH, LOW, LOW, LOW, LOW, HIGH};
int N2[]    = {HIGH, HIGH, LOW, HIGH, HIGH, LOW, HIGH, LOW};
int N2P[]   = {HIGH, HIGH, LOW, HIGH, HIGH, LOW, HIGH, HIGH};
int N3[]    = {HIGH, HIGH, HIGH, HIGH, LOW, LOW, HIGH, LOW};
int N3P[]   = {HIGH, HIGH, HIGH, HIGH, LOW, LOW, HIGH, HIGH};
int N4[]    = {LOW, HIGH, HIGH, LOW, LOW, HIGH, HIGH, LOW};
int N4P[]   = {LOW, HIGH, HIGH, LOW, LOW, HIGH, HIGH, HIGH};
int N5[]    = {HIGH, LOW, HIGH, HIGH, LOW, HIGH, HIGH, LOW};
int N5P[]   = {HIGH, LOW, HIGH, HIGH, LOW, HIGH, HIGH, HIGH};
int N6[]    = {HIGH, LOW, HIGH, HIGH, HIGH, HIGH, HIGH, LOW};
int N6P[]   = {HIGH, LOW, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH};
int N7[]    = {HIGH, HIGH, HIGH, LOW, LOW, LOW, LOW, LOW};
int N7P[]   = {HIGH, HIGH, HIGH, LOW, LOW, LOW, LOW, HIGH};
int N8[]    = {HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, LOW};
int N8P[]   = {HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH};
int N9[]    = {HIGH, HIGH, HIGH, HIGH, LOW, HIGH, HIGH, LOW};
int N9P[]   = {HIGH, HIGH, HIGH, HIGH, LOW, HIGH, HIGH, HIGH};
int MIN[]   = {LOW, LOW, LOW, LOW, LOW, LOW, HIGH, LOW};
//The letters K, M, N, T, V, W, Z are off limits with a 7 segment display
//Some letters like D, G, Q are hard to recognize, as D is like O and G like 6
int A[] = {HIGH, HIGH, HIGH, LOW, HIGH, HIGH, HIGH, LOW};
int B[] = {HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, LOW};
int C[] = {HIGH, LOW, LOW, HIGH, HIGH, HIGH, LOW, LOW};
int D[] = {HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, LOW, LOW};
int E[] = {HIGH, LOW, LOW, HIGH, HIGH, HIGH, HIGH, LOW};
int F[] = {HIGH, LOW, LOW, LOW, HIGH, HIGH, HIGH, LOW};
int G[] = {HIGH, LOW, HIGH, HIGH, HIGH, HIGH, HIGH, LOW};
int H[] = {LOW, HIGH, HIGH, LOW, HIGH, HIGH, HIGH, LOW};
int I[] = {LOW, HIGH, HIGH, LOW, LOW, LOW, LOW, LOW};
int J[] = {LOW, HIGH, HIGH, HIGH, HIGH, LOW, LOW, LOW};
int L[] = {LOW, LOW, LOW, HIGH, HIGH, HIGH, LOW, LOW};
int O[] = {HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, LOW, LOW};
int P[] = {HIGH, HIGH, LOW, LOW, HIGH, HIGH, HIGH, LOW};
int Q[] = {HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, LOW, HIGH};
int R[] = {HIGH, HIGH, HIGH, LOW, HIGH, HIGH, HIGH, LOW};
int S[] = {HIGH, LOW, HIGH, HIGH, LOW, HIGH, HIGH, LOW};
int U[] = {LOW, HIGH, HIGH, HIGH, HIGH, HIGH, LOW, LOW};
int Y[] = {LOW, HIGH, HIGH, HIGH, LOW, HIGH, HIGH, LOW};

LEDSymbols::LEDSymbols(){
        Symbols.put("", BLANK);
        Symbols.put("-", MIN);
        Symbols.put("0", N0);
        Symbols.put("0.", N0P);
        Symbols.put("1", N1);
        Symbols.put("1.", N1P);
        Symbols.put("2", N2);
        Symbols.put("2.", N2P);
        Symbols.put("3", N3);
        Symbols.put("3.", N3P);
        Symbols.put("4", N4);
        Symbols.put("4.", N4P);
        Symbols.put("5", N5);
        Symbols.put("5.", N5P);
        Symbols.put("6", N6);
        Symbols.put("6.", N6P);
        Symbols.put("7", N7);
        Symbols.put("7.", N7P);
        Symbols.put("8", N8);
        Symbols.put("8.", N8P);
        Symbols.put("9", N9);
        Symbols.put("9.", N9P);

        Symbols.put("A", A);
        Symbols.put("B", B);
        Symbols.put("C", C);
        Symbols.put("D", D);
        Symbols.put("E", E);
        Symbols.put("F", F);
        Symbols.put("G", G);
        Symbols.put("H", H);
        Symbols.put("I", I);
        Symbols.put("J", J);
        Symbols.put("L", L);
        Symbols.put("O", O);
        Symbols.put("P", P);
        Symbols.put("Q", Q);
        Symbols.put("R", R);
        Symbols.put("S", S);
        Symbols.put("U", U);
        Symbols.put("Y", Y);
}

int* LEDSymbols::Get(char* symbol){
        int* result;
        bool resultOp = Symbols.get(symbol, result);
        if(!resultOp){
          return BLANK;
        }
        return result;
}

/*int* LEDSymbols::getArray(int data[]){
        int* result;
        for(int i= 0; i< data.lenght; i++) {
                result[i] = data[i];
        }
        return result;
}*/
