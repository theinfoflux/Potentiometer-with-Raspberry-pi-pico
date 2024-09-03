#include <Wire.h>
#include <U8x8lib.h>

//SDA pin of SSD1306 OLED with GPIO 4
//SCL pin of SSD1306 OLED with GPIO 5

U8X8_SSD1306_128X64_NONAME_HW_I2C u8x8(/* reset=*/ U8X8_PIN_NONE);

int pot=26;

void setup()
{
  Serial.begin(115200);
  pinMode(pot,INPUT);
   u8x8.begin();
}
 
void loop()
{
 int potvalue = analogRead(pot);
 u8x8.setCursor(1,13);// position, line# )
 u8x8.setFont(u8x8_font_px437wyse700b_2x2_r);  
 u8x8.print("    ");// clear value 
  u8x8.setCursor(1,10);// position, line# )
  u8x8.print("Pot:");// Write to lcd 
  u8x8.setCursor(1,13);
  u8x8.print(potvalue);
delay(1000);
}




 
