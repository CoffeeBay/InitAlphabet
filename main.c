#include <stdio.h>

typedef struct {
    unsigned long long b0:1, b1:1, b2:1, b3:1, b4:1, b5:1, b6:1;
    unsigned long long b7:1, b8:1, b9:1, b10:1, b11:1, b12:1, b13:1;
    unsigned long long b14:1, b15:1, b16:1, b17:1, b18:1, b19:1, b20:1;
    unsigned long long b21:1, b22:1, b23:1, b24:1, b25:1, b26:1, b27:1;
    unsigned long long b28:1, b29:1, b30:1, b31:1, b32:1, b33:1, b34:1;
} Alphabet;

Alphabet alphabet[52];

void setE();
void setF();
void setG();
void setH();
void setI();
void setJ();
void setK();
void setL();
void setM();
void setN();
void printAlphabet(Alphabet a);


int main() {
	setE();
	setF();
	setG();
	setH();
	setI();
	setJ();
	setK();
	setL();
	setM();
	setN();
    printAlphabet(alphabet[30]);
    printAlphabet(alphabet[31]);
    printAlphabet(alphabet[32]);
    printAlphabet(alphabet[33]);
    printAlphabet(alphabet[34]);
    printAlphabet(alphabet[35]);
    printAlphabet(alphabet[36]);
    printAlphabet(alphabet[37]);
    printAlphabet(alphabet[38]);
    printAlphabet(alphabet[39]);
    return 0;
}

// E
void setE() {
    alphabet[30].b0 = 1;
    alphabet[30].b1 = 1;
    alphabet[30].b2 = 1;
    alphabet[30].b3 = 1;
    alphabet[30].b4 = 1;
    alphabet[30].b5 = 1;
    alphabet[30].b6 = 1;

    alphabet[30].b7 = 1;
    alphabet[30].b8 = 0;
    alphabet[30].b9 = 0;
    alphabet[30].b10 = 1;
    alphabet[30].b11 = 0;
    alphabet[30].b12 = 0;
    alphabet[30].b13 = 1;

    alphabet[30].b14 = 1;
    alphabet[30].b15 = 0;
    alphabet[30].b16 = 0;
    alphabet[30].b17 = 1;
    alphabet[30].b18 = 0;
    alphabet[30].b19 = 0;
    alphabet[30].b20 = 1;

    alphabet[30].b21 = 1;
    alphabet[30].b22 = 0;
    alphabet[30].b23 = 0;
    alphabet[30].b24 = 1;
    alphabet[30].b25 = 0;
    alphabet[30].b26 = 0;
    alphabet[30].b27 = 1;
    
	 alphabet[30].b28 = 1;
    alphabet[30].b29 = 0;
    alphabet[30].b30 = 0;
    alphabet[30].b31 = 1;
    alphabet[30].b32 = 0;
    alphabet[30].b33 = 0;
    alphabet[30].b34 = 1;
}
// F
void setF() {
    alphabet[31].b0 = 1;
    alphabet[31].b1 = 1;
    alphabet[31].b2 = 1;
    alphabet[31].b3 = 1;
    alphabet[31].b4 = 1;
    alphabet[31].b5 = 1;
    alphabet[31].b6 = 1;

    alphabet[31].b7 = 1;
    alphabet[31].b8 = 0;
    alphabet[31].b9 = 0;
    alphabet[31].b10 = 1;
    alphabet[31].b11 = 0;
    alphabet[31].b12 = 0;
    alphabet[31].b13 = 0;

    alphabet[31].b14 = 1;
    alphabet[31].b15 = 0;
    alphabet[31].b16 = 0;
    alphabet[31].b17 = 1;
    alphabet[31].b18 = 0;
    alphabet[31].b19 = 0;
    alphabet[31].b20 = 0;

    alphabet[31].b21 = 1;
    alphabet[31].b22 = 0;
    alphabet[31].b23 = 0;
    alphabet[31].b24 = 1;
    alphabet[31].b25 = 0;
    alphabet[31].b26 = 0;
    alphabet[31].b27 = 0;
    
	 alphabet[31].b28 = 1;
    alphabet[31].b29 = 0;
    alphabet[31].b30 = 0;
    alphabet[31].b31 = 1;
    alphabet[31].b32 = 0;
    alphabet[31].b33 = 0;
    alphabet[31].b34 = 0;
}
// G
void setG() {
    alphabet[32].b0 = 1;
    alphabet[32].b1 = 1;
    alphabet[32].b2 = 1;
    alphabet[32].b3 = 1;
    alphabet[32].b4 = 1;
    alphabet[32].b5 = 1;
    alphabet[32].b6 = 1;

    alphabet[32].b7 = 1;
    alphabet[32].b8 = 0;
    alphabet[32].b9 = 0;
    alphabet[32].b10 = 0;
    alphabet[32].b11 = 0;
    alphabet[32].b12 = 0;
    alphabet[32].b13 = 1;

    alphabet[32].b14 = 1;
    alphabet[32].b15 = 0;
    alphabet[32].b16 = 0;
    alphabet[32].b17 = 1;
    alphabet[32].b18 = 0;
    alphabet[32].b19 = 0;
    alphabet[32].b20 = 1;

    alphabet[32].b21 = 1;
    alphabet[32].b22 = 0;
    alphabet[32].b23 = 0;
    alphabet[32].b24 = 1;
    alphabet[32].b25 = 0;
    alphabet[32].b26 = 0;
    alphabet[32].b27 = 1;
    
	 alphabet[32].b28 = 1;
    alphabet[32].b29 = 0;
    alphabet[32].b30 = 0;
    alphabet[32].b31 = 1;
    alphabet[32].b32 = 1;
    alphabet[32].b33 = 1;
    alphabet[32].b34 = 1;
}
// H
void setH() {
    alphabet[33].b0 = 1;
    alphabet[33].b1 = 1;
    alphabet[33].b2 = 1;
    alphabet[33].b3 = 1;
    alphabet[33].b4 = 1;
    alphabet[33].b5 = 1;
    alphabet[33].b6 = 1;

    alphabet[33].b7 = 0;
    alphabet[33].b8 = 0;
    alphabet[33].b9 = 0;
    alphabet[33].b10 = 1;
    alphabet[33].b11 = 0;
    alphabet[33].b12 = 0;
    alphabet[33].b13 = 0;

    alphabet[33].b14 = 0;
    alphabet[33].b15 = 0;
    alphabet[33].b16 = 0;
    alphabet[33].b17 = 1;
    alphabet[33].b18 = 0;
    alphabet[33].b19 = 0;
    alphabet[33].b20 = 0;

    alphabet[33].b21 = 0;
    alphabet[33].b22 = 0;
    alphabet[33].b23 = 0;
    alphabet[33].b24 = 1;
    alphabet[33].b25 = 0;
    alphabet[33].b26 = 0;
    alphabet[33].b27 = 0;
    
	 alphabet[33].b28 = 1;
    alphabet[33].b29 = 1;
    alphabet[33].b30 = 1;
    alphabet[33].b31 = 1;
    alphabet[33].b32 = 1;
    alphabet[33].b33 = 1;
    alphabet[33].b34 = 1;
}
//I	 
void setI() {
    alphabet[34].b0 = 1;
    alphabet[34].b1 = 0;
    alphabet[34].b2 = 0;
    alphabet[34].b3 = 0;
    alphabet[34].b4 = 0;
    alphabet[34].b5 = 0;
    alphabet[34].b6 = 1;

    alphabet[34].b7 = 1;
    alphabet[34].b8 = 0;
    alphabet[34].b9 = 0;
    alphabet[34].b10 = 0;
    alphabet[34].b11 = 0;
    alphabet[34].b12 = 0;
    alphabet[34].b13 = 1;

    alphabet[34].b14 = 1;
    alphabet[34].b15 = 1;
    alphabet[34].b16 = 1;
    alphabet[34].b17 = 1;
    alphabet[34].b18 = 1;
    alphabet[34].b19 = 1;
    alphabet[34].b20 = 1;

    alphabet[34].b21 = 1;
    alphabet[34].b22 = 0;
    alphabet[34].b23 = 0;
    alphabet[34].b24 = 0;
    alphabet[34].b25 = 0;
    alphabet[34].b26 = 0;
    alphabet[34].b27 = 1;
    
	 alphabet[34].b28 = 1;
    alphabet[34].b29 = 0;
    alphabet[34].b30 = 0;
    alphabet[34].b31 = 0;
    alphabet[34].b32 = 0;
    alphabet[34].b33 = 0;
    alphabet[34].b34 = 1;
}

// J
void setJ() {
    alphabet[35].b0 = 1;
    alphabet[35].b1 = 0;
    alphabet[35].b2 = 0;
    alphabet[35].b3 = 0;
    alphabet[35].b4 = 0;
    alphabet[35].b5 = 1;
    alphabet[35].b6 = 1;

    alphabet[35].b7 = 1;
    alphabet[35].b8 = 0;
    alphabet[35].b9 = 0;
    alphabet[35].b10 = 0;
    alphabet[35].b11 = 0;
    alphabet[35].b12 = 0;
    alphabet[35].b13 = 1;

    alphabet[35].b14 = 1;
    alphabet[35].b15 = 0;
    alphabet[35].b16 = 0;
    alphabet[35].b17 = 0;
    alphabet[35].b18 = 0;
    alphabet[35].b19 = 0;
    alphabet[35].b20 = 1;

    alphabet[35].b21 = 1;
    alphabet[35].b22 = 1;
    alphabet[35].b23 = 1;
    alphabet[35].b24 = 1;
    alphabet[35].b25 = 1;
    alphabet[35].b26 = 1;
    alphabet[35].b27 = 1;
    
	 alphabet[35].b28 = 1;
    alphabet[35].b29 = 0;
    alphabet[35].b30 = 0;
    alphabet[35].b31 = 0;
    alphabet[35].b32 = 0;
    alphabet[35].b33 = 0;
    alphabet[35].b34 = 0;
}

//K	 
void setK() {
    alphabet[36].b0 = 1;
    alphabet[36].b1 = 1;
    alphabet[36].b2 = 1;
    alphabet[36].b3 = 1;
    alphabet[36].b4 = 1;
    alphabet[36].b5 = 1;
    alphabet[36].b6 = 1;

    alphabet[36].b7 = 0;
    alphabet[36].b8 = 0;
    alphabet[36].b9 = 0;
    alphabet[36].b10 = 1;
    alphabet[36].b11 = 0;
    alphabet[36].b12 = 0;
    alphabet[36].b13 = 0;

    alphabet[36].b14 = 0;
    alphabet[36].b15 = 0;
    alphabet[36].b16 = 1;
    alphabet[36].b17 = 0;
    alphabet[36].b18 = 1;
    alphabet[36].b19 = 0;
    alphabet[36].b20 = 0;

    alphabet[36].b21 = 0;
    alphabet[36].b22 = 1;
    alphabet[36].b23 = 0;
    alphabet[36].b24 = 0;
    alphabet[36].b25 = 0;
    alphabet[36].b26 = 1;
    alphabet[36].b27 = 0;
    
	 alphabet[36].b28 = 1;
    alphabet[36].b29 = 0;
    alphabet[36].b30 = 0;
    alphabet[36].b31 = 0;
    alphabet[36].b32 = 0;
    alphabet[36].b33 = 0;
    alphabet[36].b34 = 1;
}

//L	 
void setL() {
    alphabet[37].b0 = 1;
    alphabet[37].b1 = 1;
    alphabet[37].b2 = 1;
    alphabet[37].b3 = 1;
    alphabet[37].b4 = 1;
    alphabet[37].b5 = 1;
    alphabet[37].b6 = 1;

    alphabet[37].b7 = 0;
    alphabet[37].b8 = 0;
    alphabet[37].b9 = 0;
    alphabet[37].b10 = 0;
    alphabet[37].b11 = 0;
    alphabet[37].b12 = 0;
    alphabet[37].b13 = 1;

    alphabet[37].b14 = 0;
    alphabet[37].b15 = 0;
    alphabet[37].b16 = 0;
    alphabet[37].b17 = 0;
    alphabet[37].b18 = 0;
    alphabet[37].b19 = 0;
    alphabet[37].b20 = 1;

    alphabet[37].b21 = 0;
    alphabet[37].b22 = 0;
    alphabet[37].b23 = 0;
    alphabet[37].b24 = 0;
    alphabet[37].b25 = 0;
    alphabet[37].b26 = 0;
    alphabet[37].b27 = 1;
    
	 alphabet[37].b28 = 0;
    alphabet[37].b29 = 0;
    alphabet[37].b30 = 0;
    alphabet[37].b31 = 0;
    alphabet[37].b32 = 0;
    alphabet[37].b33 = 0;
    alphabet[37].b34 = 1;
}
//M 
void setM() {
    alphabet[38].b0 = 1;
    alphabet[38].b1 = 1;
    alphabet[38].b2 = 1;
    alphabet[38].b3 = 1;
    alphabet[38].b4 = 1;
    alphabet[38].b5 = 1;
    alphabet[38].b6 = 1;

    alphabet[38].b7 = 0;
    alphabet[38].b8 = 1;
    alphabet[38].b9 = 0;
    alphabet[38].b10 = 0;
    alphabet[38].b11 = 0;
    alphabet[38].b12 = 0;
    alphabet[38].b13 = 0;

    alphabet[38].b14 = 0;
    alphabet[38].b15 = 0;
    alphabet[38].b16 = 1;
    alphabet[38].b17 = 0;
    alphabet[38].b18 = 0;
    alphabet[38].b19 = 0;
    alphabet[38].b20 = 0;

    alphabet[38].b21 = 0;
    alphabet[38].b22 = 1;
    alphabet[38].b23 = 0;
    alphabet[38].b24 = 0;
    alphabet[38].b25 = 0;
    alphabet[38].b26 = 0;
    alphabet[38].b27 = 0;
    
	 alphabet[38].b28 = 1;
    alphabet[38].b29 = 1;
    alphabet[38].b30 = 1;
    alphabet[38].b31 = 1;
    alphabet[38].b32 = 1;
    alphabet[38].b33 = 1;
    alphabet[38].b34 = 1;
}

//N	 
void setN() {
    alphabet[39].b0 = 1;
    alphabet[39].b1 = 1;
    alphabet[39].b2 = 1;
    alphabet[39].b3 = 1;
    alphabet[39].b4 = 1;
    alphabet[39].b5 = 1;
    alphabet[39].b6 = 1;

    alphabet[39].b7 = 0;
    alphabet[39].b8 = 0;
    alphabet[39].b9 = 1;
    alphabet[39].b10 = 0;
    alphabet[39].b11 = 0;
    alphabet[39].b12 = 0;
    alphabet[39].b13 = 0;

    alphabet[39].b14 = 0;
    alphabet[39].b15 = 0;
    alphabet[39].b16 = 0;
    alphabet[39].b17 = 1;
    alphabet[39].b18 = 0;
    alphabet[39].b19 = 0;
    alphabet[39].b20 = 0;

    alphabet[39].b21 = 0;
    alphabet[39].b22 = 0;
    alphabet[39].b23 = 0;
    alphabet[39].b24 = 0;
    alphabet[39].b25 = 1;
    alphabet[39].b26 = 0;
    alphabet[39].b27 = 0;
    
	 alphabet[39].b28 = 1;
    alphabet[39].b29 = 1;
    alphabet[39].b30 = 1;
    alphabet[39].b31 = 1;
    alphabet[39].b32 = 1;
    alphabet[39].b33 = 1;
    alphabet[39].b34 = 1;
}




void printAlphabet(Alphabet a) {
    int i, j;
    printf("%c", (a.b0 ? '*': ' '));
    printf("%c", (a.b7 ? '*': ' '));
    printf("%c", (a.b14 ? '*': ' '));
    printf("%c", (a.b21 ? '*': ' '));
    printf("%c", (a.b28 ? '*': ' '));
    printf("\n");

    printf("%c", (a.b1 ? '*': ' '));
    printf("%c", (a.b8 ? '*': ' '));
    printf("%c", (a.b15 ? '*': ' '));
    printf("%c", (a.b22 ? '*': ' '));
    printf("%c", (a.b29 ? '*': ' '));
    printf("\n");

    printf("%c", (a.b2 ? '*': ' '));
    printf("%c", (a.b9 ? '*': ' '));
    printf("%c", (a.b16 ? '*': ' '));
    printf("%c", (a.b23 ? '*': ' '));
    printf("%c", (a.b30 ? '*': ' '));
    printf("\n");

    printf("%c", (a.b3 ? '*': ' '));
    printf("%c", (a.b10 ? '*': ' '));
    printf("%c", (a.b17 ? '*': ' '));
    printf("%c", (a.b24 ? '*': ' '));
    printf("%c", (a.b31 ? '*': ' '));
    printf("\n");

    printf("%c", (a.b4 ? '*': ' '));
    printf("%c", (a.b11 ? '*': ' '));
    printf("%c", (a.b18 ? '*': ' '));
    printf("%c", (a.b25 ? '*': ' '));
    printf("%c", (a.b32 ? '*': ' '));
    printf("\n");

    printf("%c", (a.b5 ? '*': ' '));
    printf("%c", (a.b12 ? '*': ' '));
    printf("%c", (a.b19 ? '*': ' '));
    printf("%c", (a.b26 ? '*': ' '));
    printf("%c", (a.b33 ? '*': ' '));
    printf("\n");

    printf("%c", (a.b6 ? '*': ' '));
    printf("%c", (a.b13 ? '*': ' '));
    printf("%c", (a.b20 ? '*': ' '));
    printf("%c", (a.b27 ? '*': ' '));
    printf("%c", (a.b34 ? '*': ' '));
    printf("\n");
}

