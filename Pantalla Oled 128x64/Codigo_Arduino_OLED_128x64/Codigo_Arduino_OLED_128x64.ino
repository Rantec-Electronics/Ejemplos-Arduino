#include <U8glib.h>
U8GLIB_SH1106_128X64 u8g(U8G_I2C_OPT_NONE);// I2C / TWI // Se habilita esta linea según el display a usar en este caso el driver SH1106    

void setup() {
  // put your setup code here, to run once:
Serial.begin(57600); //Serial.begin(115200);//Velocidad del puerto serial(se puede cambiar según las necesidades)
}

void loop() {
  u8g.firstPage();  
  do {
    draw();//Llama a la función draw
  } while( u8g.nextPage() );
  // Reconstruir la imagen después de un tiempo
  delay(50);
}


void draw(void) {
  //Imprimimos en la pantalla
  u8g.setFont(u8g_font_5x7);
  u8g.setPrintPos(0, 10); 
  u8g.print("Rantec Electronics");
  u8g.setPrintPos(0, 30); 
  u8g.print("Conocemos");
  u8g.setFont(u8g_font_7x14);
  u8g.print("!!");
  u8g.setFont(u8g_font_5x7);
  u8g.print(" :)");
   u8g.setFont(u8g_font_5x7);
   u8g.setPrintPos(0, 50); 
  u8g.print("RANTEC");
    u8g.setFont(u8g_font_7x14);
  u8g.print("!!");
  u8g.setFont(u8g_font_5x7);
  u8g.print(" :)");
  }
