#include <stdio.h>

typedef struct {
    unsigned long long b0:1, b1:1, b2:1, b3:1, b4:1, b5:1, b6:1;
    unsigned long long b7:1, b8:1, b9:1, b10:1, b11:1, b12:1, b13:1;
    unsigned long long b14:1, b15:1, b16:1, b17:1, b18:1, b19:1, b20:1;
    unsigned long long b21:1, b22:1, b23:1, b24:1, b25:1, b26:1, b27:1;
    unsigned long long b28:1, b29:1, b30:1, b31:1, b32:1, b33:1, b34:1;
} Alphabet;

Alphabet alphabet[52];

void seta();
void setb();
void setc();
void setd();
void sete();
void setf();
void setg();
void seth();
void seti();
void setj();
void setX();
void setY();
void setZ();
void printAlphabet(Alphabet a);


int main() {
    seta();
    setb();
    setc();
    setd();
    sete();
    setf();
    setg();
    seth();
    seti();
    setj();
    setX();
    setY();
    setZ();
    printAlphabet(alphabet[49]);
    printAlphabet(alphabet[50]);
    printAlphabet(alphabet[51]);
    return 0;
}

// a
void seta() {
    alphabet[0].b0 = 0;
    alphabet[0].b1 = 0;
    alphabet[0].b2 = 0;
    alphabet[0].b3 = 0;
    alphabet[0].b4 = 1;
    alphabet[0].b5 = 1;
    alphabet[0].b6 = 0;

    alphabet[0].b7 = 0;
    alphabet[0].b8 = 0;
    alphabet[0].b9 = 0;
    alphabet[0].b10 = 1;
    alphabet[0].b11 = 0;
    alphabet[0].b12 = 0;
    alphabet[0].b13 = 1;

    alphabet[0].b14 = 0;
    alphabet[0].b15 = 0;
    alphabet[0].b16 = 0;
    alphabet[0].b17 = 0;
    alphabet[0].b18 = 1;
    alphabet[0].b19 = 1;
    alphabet[0].b20 = 0;

    alphabet[0].b21 = 0;
    alphabet[0].b22 = 0;
    alphabet[0].b23 = 0;
    alphabet[0].b24 = 1;
    alphabet[0].b25 = 1;
    alphabet[0].b26 = 1;
    alphabet[0].b27 = 1;

    alphabet[0].b28 = 0;
    alphabet[0].b29 = 0;
    alphabet[0].b30 = 0;
    alphabet[0].b31 = 0;
    alphabet[0].b32 = 0;
    alphabet[0].b33 = 0;
    alphabet[0].b34 = 0;
}

// b
void setb() {
    alphabet[1].b0 = 0;
    alphabet[1].b1 = 1;
    alphabet[1].b2 = 1;
    alphabet[1].b3 = 1;
    alphabet[1].b4 = 1;
    alphabet[1].b5 = 1;
    alphabet[1].b6 = 1;

    alphabet[1].b7 = 0;
    alphabet[1].b8 = 0;
    alphabet[1].b9 = 0;
    alphabet[1].b10 = 1;
    alphabet[1].b11 = 0;
    alphabet[1].b12 = 0;
    alphabet[1].b13 = 1;

    alphabet[1].b14 = 0;
    alphabet[1].b15 = 0;
    alphabet[1].b16 = 0;
    alphabet[1].b17 = 0;
    alphabet[1].b18 = 1;
    alphabet[1].b19 = 1;
    alphabet[1].b20 = 1;

    alphabet[1].b21 = 0;
    alphabet[1].b22 = 0;
    alphabet[1].b23 = 0;
    alphabet[1].b24 = 0;
    alphabet[1].b25 = 0;
    alphabet[1].b26 = 0;
    alphabet[1].b27 = 0;

    alphabet[0].b28 = 0;
    alphabet[0].b29 = 0;
    alphabet[0].b30 = 0;
    alphabet[0].b31 = 0;
    alphabet[0].b32 = 0;
    alphabet[0].b33 = 0;
    alphabet[0].b34 = 0;
}

// c
void setc() {
    alphabet[2].b0 = 0;
    alphabet[2].b1 = 0;
    alphabet[2].b2 = 0;
    alphabet[2].b3 = 0;
    alphabet[2].b4 = 1;
    alphabet[2].b5 = 1;
    alphabet[2].b6 = 0;

    alphabet[2].b7 = 0;
    alphabet[2].b8 = 0;
    alphabet[2].b9 = 0;
    alphabet[2].b10 = 1;
    alphabet[2].b11 = 0;
    alphabet[2].b12 = 0;
    alphabet[2].b13 = 1;

    alphabet[2].b14 = 0;
    alphabet[2].b15 = 0;
    alphabet[2].b16 = 0;
    alphabet[2].b17 = 1;
    alphabet[2].b18 = 0;
    alphabet[2].b19 = 0;
    alphabet[2].b20 = 1;

    alphabet[2].b21 = 0;
    alphabet[2].b22 = 0;
    alphabet[2].b23 = 0;
    alphabet[2].b24 = 0;
    alphabet[2].b25 = 0;
    alphabet[2].b26 = 0;
    alphabet[2].b27 = 0;

    alphabet[2].b28 = 0;
    alphabet[2].b29 = 0;
    alphabet[2].b30 = 0;
    alphabet[2].b31 = 0;
    alphabet[2].b32 = 0;
    alphabet[2].b33 = 0;
    alphabet[2].b34 = 0;
}

// d
void setd() {
    alphabet[3].b0 = 0;
    alphabet[3].b1 = 0;
    alphabet[3].b2 = 0;
    alphabet[3].b3 = 0;
    alphabet[3].b4 = 1;
    alphabet[3].b5 = 1;
    alphabet[3].b6 = 0;

    alphabet[3].b7 = 0;
    alphabet[3].b8 = 0;
    alphabet[3].b9 = 0;
    alphabet[3].b10 = 1;
    alphabet[3].b11 = 0;
    alphabet[3].b12 = 0;
    alphabet[3].b13 = 1;

    alphabet[3].b14 = 1;
    alphabet[3].b15 = 1;
    alphabet[3].b16 = 1;
    alphabet[3].b17 = 1;
    alphabet[3].b18 = 1;
    alphabet[3].b19 = 1;
    alphabet[3].b20 = 1;

    alphabet[3].b21 = 0;
    alphabet[3].b22 = 0;
    alphabet[3].b23 = 0;
    alphabet[3].b24 = 0;
    alphabet[3].b25 = 0;
    alphabet[3].b26 = 0;
    alphabet[3].b27 = 0;

    alphabet[3].b28 = 0;
    alphabet[3].b29 = 0;
    alphabet[3].b30 = 0;
    alphabet[3].b31 = 0;
    alphabet[3].b32 = 0;
    alphabet[3].b33 = 0;
    alphabet[3].b34 = 0;
}

// e
void sete() {
    alphabet[4].b0 = 0;
    alphabet[4].b1 = 0;
    alphabet[4].b2 = 0;
    alphabet[4].b3 = 1;
    alphabet[4].b4 = 1;
    alphabet[4].b5 = 1;
    alphabet[4].b6 = 0;

    alphabet[4].b7 = 0;
    alphabet[4].b8 = 0;
    alphabet[4].b9 = 1;
    alphabet[4].b10 = 0;
    alphabet[4].b11 = 1;
    alphabet[4].b12 = 0;
    alphabet[4].b13 = 1;

    alphabet[4].b14 = 0;
    alphabet[4].b15 = 0;
    alphabet[4].b16 = 0;
    alphabet[4].b17 = 1;
    alphabet[4].b18 = 0;
    alphabet[4].b19 = 0;
    alphabet[4].b20 = 1;

    alphabet[4].b21 = 0;
    alphabet[4].b22 = 0;
    alphabet[4].b23 = 0;
    alphabet[4].b24 = 0;
    alphabet[4].b25 = 0;
    alphabet[4].b26 = 0;
    alphabet[4].b27 = 0;

    alphabet[4].b28 = 0;
    alphabet[4].b29 = 0;
    alphabet[4].b30 = 0;
    alphabet[4].b31 = 0;
    alphabet[4].b32 = 0;
    alphabet[4].b33 = 0;
    alphabet[4].b34 = 0;
}


// f
void setf() {
    alphabet[5].b0 = 0;
    alphabet[5].b1 = 0;
    alphabet[5].b2 = 0;
    alphabet[5].b3 = 0;
    alphabet[5].b4 = 1;
    alphabet[5].b5 = 0;
    alphabet[5].b6 = 0;

    alphabet[5].b7 = 0;
    alphabet[5].b8 = 0;
    alphabet[5].b9 = 1;
    alphabet[5].b10 = 1;
    alphabet[5].b11 = 1;
    alphabet[5].b12 = 1;
    alphabet[5].b13 = 1;

    alphabet[5].b14 = 0;
    alphabet[5].b15 = 0;
    alphabet[5].b16 = 1;
    alphabet[5].b17 = 0;
    alphabet[5].b18 = 1;
    alphabet[5].b19 = 0;
    alphabet[5].b20 = 0;

    alphabet[5].b21 = 0;
    alphabet[5].b22 = 0;
    alphabet[5].b23 = 0;
    alphabet[5].b24 = 0;
    alphabet[5].b25 = 0;
    alphabet[5].b26 = 0;
    alphabet[5].b27 = 0;

    alphabet[5].b28 = 0;
    alphabet[5].b29 = 0;
    alphabet[5].b30 = 0;
    alphabet[5].b31 = 0;
    alphabet[5].b32 = 0;
    alphabet[5].b33 = 0;
    alphabet[5].b34 = 0;
}


// g
void setg() {
    alphabet[6].b0 = 0;
    alphabet[6].b1 = 0;
    alphabet[6].b2 = 1;
    alphabet[6].b3 = 1;
    alphabet[6].b4 = 1;
    alphabet[6].b5 = 0;
    alphabet[6].b6 = 1;

    alphabet[6].b7 = 0;
    alphabet[6].b8 = 0;
    alphabet[6].b9 = 1;
    alphabet[6].b10 = 0;
    alphabet[6].b11 = 1;
    alphabet[6].b12 = 0;
    alphabet[6].b13 = 1;

    alphabet[6].b14 = 0;
    alphabet[6].b15 = 0;
    alphabet[6].b16 = 1;
    alphabet[6].b17 = 1;
    alphabet[6].b18 = 1;
    alphabet[6].b19 = 1;
    alphabet[6].b20 = 1;

    alphabet[6].b21 = 0;
    alphabet[6].b22 = 0;
    alphabet[6].b23 = 0;
    alphabet[6].b24 = 0;
    alphabet[6].b25 = 0;
    alphabet[6].b26 = 0;
    alphabet[6].b27 = 0;

    alphabet[6].b28 = 0;
    alphabet[6].b29 = 0;
    alphabet[6].b30 = 0;
    alphabet[6].b31 = 0;
    alphabet[6].b32 = 0;
    alphabet[6].b33 = 0;
    alphabet[6].b34 = 0;
}

// h
void seth() {
    alphabet[7].b0 = 0;
    alphabet[7].b1 = 0;
    alphabet[7].b2 = 1;
    alphabet[7].b3 = 1;
    alphabet[7].b4 = 1;
    alphabet[7].b5 = 1;
    alphabet[7].b6 = 1;

    alphabet[7].b7 = 0;
    alphabet[7].b8 = 0;
    alphabet[7].b9 = 0;
    alphabet[7].b10 = 0;
    alphabet[7].b11 = 1;
    alphabet[7].b12 = 0;
    alphabet[7].b13 = 0;

    alphabet[7].b14 = 0;
    alphabet[7].b15 = 0;
    alphabet[7].b16 = 0;
    alphabet[7].b17 = 0;
    alphabet[7].b18 = 1;
    alphabet[7].b19 = 1;
    alphabet[7].b20 = 1;

    alphabet[7].b21 = 0;
    alphabet[7].b22 = 0;
    alphabet[7].b23 = 0;
    alphabet[7].b24 = 0;
    alphabet[7].b25 = 0;
    alphabet[7].b26 = 0;
    alphabet[7].b27 = 0;

    alphabet[7].b28 = 0;
    alphabet[7].b29 = 0;
    alphabet[7].b30 = 0;
    alphabet[7].b31 = 0;
    alphabet[7].b32 = 0;
    alphabet[7].b33 = 0;
    alphabet[7].b34 = 0;
}

// i
void seti() {
    alphabet[8].b0 = 0;
    alphabet[8].b1 = 0;
    alphabet[8].b2 = 0;
    alphabet[8].b3 = 0;
    alphabet[8].b4 = 0;
    alphabet[8].b5 = 0;
    alphabet[8].b6 = 0;

    alphabet[8].b7 = 0;
    alphabet[8].b8 = 0;
    alphabet[8].b9 = 0;
    alphabet[8].b10 = 0;
    alphabet[8].b11 = 0;
    alphabet[8].b12 = 0;
    alphabet[8].b13 = 0;

    alphabet[8].b14 = 1;
    alphabet[8].b15 = 0;
    alphabet[8].b16 = 1;
    alphabet[8].b17 = 1;
    alphabet[8].b18 = 1;
    alphabet[8].b19 = 1;
    alphabet[8].b20 = 1;

    alphabet[8].b21 = 0;
    alphabet[8].b22 = 0;
    alphabet[8].b23 = 0;
    alphabet[8].b24 = 0;
    alphabet[8].b25 = 0;
    alphabet[8].b26 = 0;
    alphabet[8].b27 = 0;

    alphabet[8].b28 = 0;
    alphabet[8].b29 = 0;
    alphabet[8].b30 = 0;
    alphabet[8].b31 = 0;
    alphabet[8].b32 = 0;
    alphabet[8].b33 = 0;
    alphabet[8].b34 = 0;
}

// j
void setj() {
    alphabet[9].b0 = 0;
    alphabet[9].b1 = 0;
    alphabet[9].b2 = 0;
    alphabet[9].b3 = 0;
    alphabet[9].b4 = 1;
    alphabet[9].b5 = 1;
    alphabet[9].b6 = 0;

    alphabet[9].b7 = 0;
    alphabet[9].b8 = 0;
    alphabet[9].b9 = 0;
    alphabet[9].b10 = 0;
    alphabet[9].b11 = 0;
    alphabet[9].b12 = 0;
    alphabet[9].b13 = 1;

    alphabet[9].b14 = 1;
    alphabet[9].b15 = 0;
    alphabet[9].b16 = 1;
    alphabet[9].b17 = 1;
    alphabet[9].b18 = 1;
    alphabet[9].b19 = 1;
    alphabet[9].b20 = 0;

    alphabet[9].b21 = 0;
    alphabet[9].b22 = 0;
    alphabet[9].b23 = 0;
    alphabet[9].b24 = 0;
    alphabet[9].b25 = 0;
    alphabet[9].b26 = 0;
    alphabet[9].b27 = 0;

    alphabet[9].b28 = 0;
    alphabet[9].b29 = 0;
    alphabet[9].b30 = 0;
    alphabet[9].b31 = 0;
    alphabet[9].b32 = 0;
    alphabet[9].b33 = 0;
    alphabet[9].b34 = 0;
}

// X
void setX() {
    alphabet[49].b0 = 1;
    alphabet[49].b1 = 1;
    alphabet[49].b2 = 0;
    alphabet[49].b3 = 0;
    alphabet[49].b4 = 0;
    alphabet[49].b5 = 1;
    alphabet[49].b6 = 1;

    alphabet[49].b7 = 0;
    alphabet[49].b8 = 0;
    alphabet[49].b9 = 1;
    alphabet[49].b10 = 0;
    alphabet[49].b11 = 1;
    alphabet[49].b12 = 0;
    alphabet[49].b13 = 0;

    alphabet[49].b14 = 0;
    alphabet[49].b15 = 0;
    alphabet[49].b16 = 0;
    alphabet[49].b17 = 1;
    alphabet[49].b18 = 0;
    alphabet[49].b19 = 0;
    alphabet[49].b20 = 0;

    alphabet[49].b21 = 0;
    alphabet[49].b22 = 0;
    alphabet[49].b23 = 1;
    alphabet[49].b24 = 0;
    alphabet[49].b25 = 1;
    alphabet[49].b26 = 0;
    alphabet[49].b27 = 0;

    alphabet[49].b28 = 1;
    alphabet[49].b29 = 1;
    alphabet[49].b30 = 0;
    alphabet[49].b31 = 0;
    alphabet[49].b32 = 0;
    alphabet[49].b33 = 1;
    alphabet[49].b34 = 1;
}


// Y
void setY() {
    alphabet[50].b0 = 1;
    alphabet[50].b1 = 1;
    alphabet[50].b2 = 0;
    alphabet[50].b3 = 0;
    alphabet[50].b4 = 0;
    alphabet[50].b5 = 0;
    alphabet[50].b6 = 0;

    alphabet[50].b7 = 0;
    alphabet[50].b8 = 0;
    alphabet[50].b9 = 1;
    alphabet[50].b10 = 0;
    alphabet[50].b11 = 0;
    alphabet[50].b12 = 0;
    alphabet[50].b13 = 0;

    alphabet[50].b14 = 0;
    alphabet[50].b15 = 0;
    alphabet[50].b16 = 0;
    alphabet[50].b17 = 1;
    alphabet[50].b18 = 1;
    alphabet[50].b19 = 1;
    alphabet[50].b20 = 1;

    alphabet[50].b21 = 0;
    alphabet[50].b22 = 0;
    alphabet[50].b23 = 1;
    alphabet[50].b24 = 0;
    alphabet[50].b25 = 0;
    alphabet[50].b26 = 0;
    alphabet[50].b27 = 0;

    alphabet[50].b28 = 1;
    alphabet[50].b29 = 1;
    alphabet[50].b30 = 0;
    alphabet[50].b31 = 0;
    alphabet[50].b32 = 0;
    alphabet[50].b33 = 0;
    alphabet[50].b34 = 0;
}

// Z
void setZ() {
    alphabet[51].b0 = 1;
    alphabet[51].b1 = 0;
    alphabet[51].b2 = 0;
    alphabet[51].b3 = 0;
    alphabet[51].b4 = 0;
    alphabet[51].b5 = 1;
    alphabet[51].b6 = 1;

    alphabet[51].b7 = 1;
    alphabet[51].b8 = 0;
    alphabet[51].b9 = 0;
    alphabet[51].b10 = 0;
    alphabet[51].b11 = 1;
    alphabet[51].b12 = 0;
    alphabet[51].b13 = 1;

    alphabet[51].b14 = 1;
    alphabet[51].b15 = 0;
    alphabet[51].b16 = 0;
    alphabet[51].b17 = 1;
    alphabet[51].b18 = 0;
    alphabet[51].b19 = 0;
    alphabet[51].b20 = 1;

    alphabet[51].b21 = 1;
    alphabet[51].b22 = 0;
    alphabet[51].b23 = 1;
    alphabet[51].b24 = 0;
    alphabet[51].b25 = 0;
    alphabet[51].b26 = 0;
    alphabet[51].b27 = 1;

    alphabet[51].b28 = 1;
    alphabet[51].b29 = 1;
    alphabet[51].b30 = 0;
    alphabet[51].b31 = 0;
    alphabet[51].b32 = 0;
    alphabet[51].b33 = 0;
    alphabet[51].b34 = 1;
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
    printf("\n");
    printf("\n");
}

