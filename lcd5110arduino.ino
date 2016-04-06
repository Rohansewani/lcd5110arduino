#include <LCD5110_Graph.h>
LCD5110 myGLCD(3, 5, 6, 9, 10);
//      SCK  - Pin 3
//      MOSI - Pin 5
//      DC   - Pin 6
//      RST  - Pin 9
//      CS   - Pin 10
int num = int1, d,x1, x2, x3, x4, x5, y1, y2, y3, y4, y5;
float float1;
void setup() {
  myGLCD.InitLCD();
}

void loop() {
  myGLCD.drawLine(x1, y1, x2, y2);            //draw a line from x1,y1 to x2,y2
  myGLCD.printNumI(int1, x5, y5);             //print an integer at x5,y5
  myGLCD.print("hello world", x3, y3);        //prints the string at x3,y3
  myGLCD.printNumF(float1,d, x4, y4);         //prints a floating number with d no. of decimal places at  x4,y4
  myGLCD.update();



  // put your main code here, to run repeatedly:

}
