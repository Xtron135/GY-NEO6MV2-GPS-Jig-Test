//Jig Test GY-NEO6MV2 Flight Control GPS Module with LCD 16x2
//GPS = https://my.cytron.io/p-gy-neo6mv2-flight-control-gps-module
//LCD = https://my.cytron.io/p-3v3-i2c-and-spi-1602-serial-character-lcd

#include <lcd_i2c.h> //Import lcd_i2c library


lcd_i2c lcd(0x3E,16,2); //The I2C communication for this LCD is 0x3E (HEX) or 62 (DEC), 16 is the number of the columns, 2 is the number of the rows
bool status = true;

void setup()
{
  lcd.begin(); //LCD initialization function  
  lcd.setCursor(0, 0); //cursor setting function start with column followed by row
  lcd.print("GY-NEO6MV2 GPS"); //Print text
  lcd.setCursor(0, 1); 
  lcd.print("Jig Test . . .");
  delay (2000);
  lcd.clear();
}

void loop() 
{
  //Testing here
  //If test ok, return status as true.
  //Can create multiple status var to test multiple aspect.

  if(status){
    lcd.setCursor(0, 0);
    lcd.print("Status = OK!");
  }

  else if(!status){
    lcd.setCursor(0, 0);
    lcd.print("Status = Faulty!");
  }
}