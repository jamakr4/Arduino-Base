#include <LedControl.h>;

LedControl lc=LedControl(12,10,11,1);

unsigned long delaytime1=500;
unsigned long delaytime2=50;

void setup() 
{
  lc.shutdown(0,false);
  lc.setIntensity(0,3); //Brightness
  lc.clearDisplay(0); //clear
}

void writeMatrix()
{

//UpperCase Letters
/******************************************/
byte A[8] = {
    B00011000,
    B00111100,
    B01100110,
    B01100110,
    B01111110,
    B01100110,
    B01100110,
    B00000000
};
byte B[8] = {
    B01111100,
    B01100110,
    B01100110,
    B01111100,
    B01100110,
    B01100110,
    B01111100,
    B00000000
};
byte C[8] = {
    B00111100,
    B01100110,
    B01100000,
    B01100000,
    B01100000,
    B01100110,
    B00111100,
    B00000000
};
byte D[8] = {
    B01111000,
    B01101100,
    B01100110,
    B01100110,
    B01100110,
    B01101100,
    B01111000,
    B00000000
};
byte E[8] = {
    B01111110,
    B01100000,
    B01100000,
    B01111100,
    B01100000,
    B01100000,
    B01111110,
    B00000000
};
byte F[8] = {
    B01111110,
    B01100000,
    B01100000,
    B01111100,
    B01100000,
    B01100000,
    B01100000,
    B00000000
};
byte G[8] = {
    B00111100,
    B01100110,
    B01100000,
    B01101110,
    B01100110,
    B01100110,
    B00111110,
    B00000000
};
byte H[8] = {
    B01100110,
    B01100110,
    B01100110,
    B01111110,
    B01100110,
    B01100110,
    B01100110,
    B00000000
};
byte I[8] = {
    B00111100,
    B00011000,
    B00011000,
    B00011000,
    B00011000,
    B00011000,
    B00111100,
    B00000000
};
byte J[8] = {
    B00001110,
    B00000110,
    B00000110,
    B00000110,
    B01100110,
    B01100110,
    B00111100,
    B00000000
};
byte K[8] = {
    B01100110,
    B01101100,
    B01111000,
    B01110000,
    B01111000,
    B01101100,
    B01100110,
    B00000000
};
byte L[8] = {
    B01100000,
    B01100000,
    B01100000,
    B01100000,
    B01100000,
    B01100000,
    B01111110,
    B00000000
};
byte M[8] = {
    B01100011,
    B01110111,
    B01111111,
    B01111111,
    B01101011,
    B01100011,
    B01100011,
    B00000000
};
byte N[8] = {
    B01100011,
    B01110011,
    B01111011,
    B01101111,
    B01100111,
    B01100011,
    B01100011,
    B00000000
};
byte O[8] = {
    B00111100,
    B01100110,
    B01100110,
    B01100110,
    B01100110,
    B01100110,
    B00111100,
    B00000000
};
byte P[8] = {
    B01111100,
    B01100110,
    B01100110,
    B01111100,
    B01100000,
    B01100000,
    B01100000,
    B00000000
};
byte Q[8] = {
    B00111100,
    B01100110,
    B01100110,
    B01100110,
    B01101110,
    B01100110,
    B00111110,
    B00000000
};
byte R[8] = {
    B01111100,
    B01100110,
    B01100110,
    B01111100,
    B01101100,
    B01100110,
    B01100110,
    B00000000
};
byte S[8] = {
    B00111110,
    B01100000,
    B01100000,
    B00111100,
    B00000110,
    B00000110,
    B01111100,
    B00000000
};
byte T[8] = {
    B01111110,
    B00011000,
    B00011000,
    B00011000,
    B00011000,
    B00011000,
    B00011000,
    B00000000
};
byte U[8] = {
    B01100110,
    B01100110,
    B01100110,
    B01100110,
    B01100110,
    B01100110,
    B00111100,
    B00000000
};
byte V[8] = {
    B01100110,
    B01100110,
    B01100110,
    B01100110,
    B01100110,
    B00111100,
    B00011000,
    B00000000
};
byte W[8] = {
    B01100011,
    B01100011,
    B01100011,
    B01101011,
    B01111111,
    B01111111,
    B01110111,
    B00000000
};
byte X[8] = {
    B01100110,
    B01100110,
    B00111100,
    B00011000,
    B00111100,
    B01100110,
    B01100110,
    B00000000
};
byte Y[8] = {
    B01100110,
    B01100110,
    B01100110,
    B00111100,
    B00011000,
    B00011000,
    B00011000,
    B00000000
};
byte Z[8] = {
    B01111110,
    B00000110,
    B00001100,
    B00011000,
    B00110000,
    B01100000,
    B01111110,
    B00000000
};
/******************************************/





//Numbers
/******************************************/
byte zero[8] = {
    B00111100,
    B01100110,
    B01100110,
    B01100110,
    B01100110,
    B01100110,
    B00111100,
    B00000000
};
byte one[8] = {
    B00011000,
    B00111000,
    B00011000,
    B00011000,
    B00011000,
    B00011000,
    B01111110,
    B00000000
};
byte two[8] = {
    B00111100,
    B01100110,
    B00000110,
    B00001100,
    B00111000,
    B01100000,
    B01111110,
    B00000000
};
byte three[8] = {
    B00111100,
    B01100110,
    B00000110,
    B00011100,
    B00000110,
    B01100110,
    B00111100,
    B00000000
};
byte four[8] = {
    B00001100,
    B00011100,
    B00111100,
    B01101100,
    B01111110,
    B00001100,
    B00001100,
    B00000000
};
byte five[8] = {
    B01111110,
    B01100000,
    B01111100,
    B00000110,
    B00000110,
    B01100110,
    B00111100,
    B00000000
};
byte six[8] = {
    B00111100,
    B01100110,
    B01100000,
    B01111100,
    B01100110,
    B01100110,
    B00111100,
    B00000000
};
byte seven[8] = {
    B01111110,
    B01100110,
    B00000110,
    B00001100,
    B00011000,
    B00011000,
    B00011000,
    B00000000
};
byte eight[8] = {
    B00111100,
    B01100110,
    B01100110,
    B00111100,
    B01100110,
    B01100110,
    B00111100,
    B00000000
};
byte nine[8] = {
    B00111100,
    B01100110,
    B01100110,
    B00111110,
    B00000110,
    B01100110,
    B00111100,
    B00000000
};
/******************************************/




//Special
/******************************************/
byte percent[8] = {
    B01100000,
    B01100110,
    B00001110,
    B00011100,
    B00111000,
    B01110000,
    B01100110,
    B00000110
};
byte ampersand[8] = {
    B00110000,
    B01001000,
    B00110000,
    B01101100,
    B01010010,
    B01001100,
    B00110010,
    B00000000
};
byte slash[8] = {
    B00000010,
    B00000110,
    B00001100,
    B00011000,
    B00110000,
    B01100000,
    B01000000,
    B00000000
};
byte open_parenthesis[8] = {
    B00000100,
    B00001000,
    B00010000,
    B00010000,
    B00010000,
    B00001000,
    B00000100,
    B00000000
};
byte close_parenthesis[8] = {
    B00100000,
    B00010000,
    B00001000,
    B00001000,
    B00001000,
    B00010000,
    B00100000,
    B00000000
};
byte hyphen[8] = {
    B00000000,
    B00000000,
    B00000000,
    B01111110,
    B00000000,
    B00000000,
    B00000000,
    B00000000
};
byte period[8] = {
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00011000,
    B00011000,
    B00000000
};
byte semicolon[8] = {
    B00000000,
    B00000000,
    B00011000,
    B00011000,
    B00000000,
    B00011000,
    B00110000,
    B00000000
};
byte hash[8] = {
    B00101000,
    B00101000,
    B11111110,
    B00101000,
    B00101000,
    B11111110,
    B00101000,
    B00101000
};
byte quotation[8] = {
    B00011000,
    B00011000,
    B00011000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
};
byte exclamation[8] = {
    B00011000,
    B00011000,
    B00011000,
    B00011000,
    B00011000,
    B00000000,
    B00011000,
    B00011000
};
byte question[8] = {
    B00111100,
    B01100110,
    B00000110,
    B00001100,
    B00011000,
    B00000000,
    B00011000,
    B00011000
};
byte plus[8] = {
    B00000000,
    B00001000,
    B00001000,
    B00111110,
    B00001000,
    B00001000,
    B00000000,
    B00000000
};
byte minus[8] = {
    B00000000,
    B00000000,
    B00000000,
    B00111100,
    B00111100,
    B00000000,
    B00000000,
    B00000000
};
byte backslash[8] = {
    B01000000,
    B01100000,
    B00110000,
    B00011000,
    B00001100,
    B00000110,
    B00000010,
    B00000000
};
/******************************************/





  lc.setRow(0,0,minus[0]);
  lc.setRow(0,1,minus[1]);
  lc.setRow(0,2,minus[2]);
  lc.setRow(0,3,minus[3]);
  lc.setRow(0,4,minus[4]);
  lc.setRow(0,5,minus[5]);
  lc.setRow(0,6,minus[6]);
  lc.setRow(0,7,minus[7]);
}

void loop() { 
  writeMatrix();
  
}