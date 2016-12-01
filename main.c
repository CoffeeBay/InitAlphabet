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
void printAlphabet(Alphabet a);


int main() {
    seta();
    printAlphabet(alphabet[0]);
    return 0;
}

// a
void seta() {
    alphabet[0].b0 = 0;
    alphabet[0].b1 = 1;
    alphabet[0].b2 = 1;
    alphabet[0].b3 = 1;
    alphabet[0].b4 = 1;
    alphabet[0].b5 = 1;
    alphabet[0].b6 = 0;

    alphabet[0].b7 = 1;
    alphabet[0].b8 = 0;
    alphabet[0].b9 = 0;
    alphabet[0].b10 = 0;
    alphabet[0].b11 = 0;
    alphabet[0].b12 = 0;
    alphabet[0].b13 = 1;

    alphabet[0].b14 = 0;
    alphabet[0].b15 = 1;
    alphabet[0].b16 = 0;
    alphabet[0].b17 = 0;
    alphabet[0].b18 = 0;
    alphabet[0].b19 = 1;
    alphabet[0].b20 = 0;

    alphabet[0].b21 = 1;
    alphabet[0].b22 = 1;
    alphabet[0].b23 = 1;
    alphabet[0].b24 = 1;
    alphabet[0].b25 = 1;
    alphabet[0].b26 = 1;
    alphabet[0].b27 = 1;
}



//O
void setO() {   
    alphabet[43].b0 = 0;
    alphabet[43].b1 = 1;
    alphabet[43].b2 = 1;	
    alphabet[43].b3 = 1;	
    alphabet[43].b4 = 1;	
    alphabet[43].b5 = 1;	
    alphabet[43].b6 = 0;	
 
    alphabet[43].b7 = 1;	
    alphabet[43].b8 = 0;	
    alphabet[43].b9 = 0;	
    alphabet[43].b10 = 0;	
    alphabet[43].b11 = 0;	
    alphabet[43].b12 = 0;	
    alphabet[43].b13 = 1;	
    
    alphabet[43].b14 = 1;	
    alphabet[43].b15 = 0;	
    alphabet[43].b16 = 0;	
    alphabet[43].b17 = 0;	
    alphabet[43].b18 = 0;	
    alphabet[43].b19 = 0;	
    alphabet[43].b20 = 1;	
    
    alphabet[43].b21 = 1;	
    alphabet[43].b22 = 0;	
    alphabet[43].b23 = 0;	
    alphabet[43].b24 = 0;	
    alphabet[43].b25 = 0;	
    alphabet[43].b26 = 0;	
    alphabet[43].b27 = 1;	
    
    alphabet[43].b28 = 0;	
    alphabet[43].b29 = 1;	
    alphabet[43].b30 = 1;	
    alphabet[43].b31 = 1;	
    alphabet[43].b32 = 1;	
    alphabet[43].b33 = 1;	
    alphabet[43].b34 = 0;	
}

void setP() {
    alphabet[44].b0 = 1;
    alphabet[44].b1 = 1;
    alphabet[44].b2 = 1;
    alphabet[44].b3 = 1;
    alphabet[44].b4 = 1;
    alphabet[44].b5 = 1;
    alphabet[44].b6 = 1;

    alphabet[44].b7 = 1;
    alphabet[44].b8 = 0;
    alphabet[44].b9 = 0;
    alphabet[44].b10 = 1;
    alphabet[44].b11 = 0;
    alphabet[44].b12 = 0;
    alphabet[44].b13 = 0;

    alphabet[44].b14 = 1;
    alphabet[44].b15 = 0;
    alphabet[44].b16 = 0;
    alphabet[44].b17 = 1;
    alphabet[44].b18 = 0;
    alphabet[44].b19 = 0;
    alphabet[44].b20 = 0;
    
    alphabet[44].b21 = 1;
    alphabet[44].b22 = 0;
    alphabet[44].b23 = 0;
    alphabet[44].b24 = 1;
    alphabet[44].b25 = 0;
    alphabet[44].b26 = 0;
    alphabet[44].b27 = 0;
    
    alphabet[44].b28 = 0;
    alphabet[44].b29 = 1;
    alphabet[44].b30 = 1;
    alphabet[44].b31 = 0;
    alphabet[44].b32 = 0;
    alphabet[44].b33 = 0;
    alphabet[44].b34 = 0;
}


void printAlphabet(Alphabet O) {
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



