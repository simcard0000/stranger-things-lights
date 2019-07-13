#include <FastLED.h>

#define LED_PIN     5
#define NUM_LEDS    50
#define BRIGHTNESS  64
#define LED_TYPE    WS2811
#define COLOR_ORDER RGB
CRGB leds[NUM_LEDS];
//Defining what's what, such as the type of LEDs and the brightness the LEDs should be at (brightness goes up to 128).
//Numbered LED 26 is where the blinking skips to the end, so 26 is the last one.

#define UPDATES_PER_SECOND 100

CRGBPalette16 currentPalette;
TBlendType    currentBlending;

void setup() {
  delay( 3000 ); // power-up safety delay
  FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection( TypicalLEDStrip );
  FastLED.setBrightness(  BRIGHTNESS );
  currentPalette = RainbowStripeColors_p;
  currentBlending = LINEARBLEND;
    
  Serial.begin(9600);
  while (! Serial);
  Serial.println("Enter letters so that your message appears on the lights!");
  Serial.println("Press SEND when you are finished typing.");
  Serial.println("Please don't input capitals, numbers, and punctuation. :)");
  Serial.println("The lights that turn white are your letters.");
}
void loop() {

  static uint8_t startIndex = 0;
    startIndex = startIndex + 1;
    //motion speed
    
    FillLEDsFromPaletteColors( startIndex);
    
    FastLED.show();
    FastLED.delay(3000 / UPDATES_PER_SECOND);
    //The rate of change in terms of colour

    if (Serial.available()){
        char ch = Serial.read();
    
    if (ch == 'a'){
        delay (10);
        fill_solid( &(leds[0]), 1, CRGB( 255, 255, 255) );
        fill_solid( &(leds[1]), 1, CRGB( 255, 255, 255) );

      FastLED.show();
      delay(1000);
    }
    if (ch == 'b'){
      delay (10);
      fill_solid( &(leds[2]), 1, CRGB( 255, 255, 255) );
      fill_solid( &(leds[3]), 1, CRGB( 255, 255, 255) );
      FastLED.show();
      delay(1000);
    }
    if (ch == 'c'){
      fill_solid( &(leds[4]), 1, CRGB( 255, 255, 255) );
      fill_solid( &(leds[5]), 1, CRGB( 255, 255, 255) );
      FastLED.show();
      delay(1000);
    }
    if (ch == 'd'){
      fill_solid( &(leds[6]), 1, CRGB( 255, 255, 255) );
      fill_solid( &(leds[7]), 1, CRGB( 255, 255, 255) );
      FastLED.show();
      delay(1000);
    }
    if (ch == 'e'){
      fill_solid( &(leds[8]), 1, CRGB( 255, 255, 255) );
      fill_solid( &(leds[9]), 1, CRGB( 255, 255, 255) );
      FastLED.show();
      delay(1000);
    }
    if (ch == 'f'){
      fill_solid( &(leds[10]), 1, CRGB( 255, 255, 255) );
      fill_solid( &(leds[11]), 1, CRGB( 255, 255, 255) );
      FastLED.show();
      delay(1000);
    }
    if (ch == 'g'){
      fill_solid( &(leds[12]), 1, CRGB( 255, 255, 255) );
      fill_solid( &(leds[13]), 1, CRGB( 255, 255, 255) );
      FastLED.show();
      delay(1000);
    }
    if (ch == 'h'){
      fill_solid( &(leds[14]), 1, CRGB( 255, 255, 255) );
      fill_solid( &(leds[15]), 1, CRGB( 255, 255, 255) );
      FastLED.show();
      delay(1000);
    }
    if (ch == 'i'){
      fill_solid( &(leds[16]), 1, CRGB( 255, 255, 255) );
      fill_solid( &(leds[17]), 1, CRGB( 255, 255, 255) );
      FastLED.show();
      delay(1000);
    }
    if (ch == 'j'){
      fill_solid( &(leds[18]), 1, CRGB( 255, 255, 255) );
      fill_solid( &(leds[19]), 1, CRGB( 255, 255, 255) );
      FastLED.show();
      delay(1000);
    }
    if (ch == 'k'){
      fill_solid( &(leds[20]), 1, CRGB( 255, 255, 255) );
      fill_solid( &(leds[21]), 1, CRGB( 255, 255, 255) );
      FastLED.show();
      delay(1000);
    }
    if (ch == 'l'){
      fill_solid( &(leds[22]), 1, CRGB( 255, 255, 255) );
      fill_solid( &(leds[23]), 1, CRGB( 255, 255, 255) );
      FastLED.show();
      delay(1000);
    }
    if (ch == 'm'){
      fill_solid( &(leds[24]), 1, CRGB( 255, 255, 255) );
      fill_solid( &(leds[25]), 1, CRGB( 255, 255, 255) );
      //
      FastLED.show();
      delay(1000);
    }
    if (ch == 'n'){
      fill_solid( &(leds[49]), 1, CRGB( 255, 255, 255) );
      fill_solid( &(leds[48]), 1, CRGB( 255, 255, 255) );
      FastLED.show();
      delay(1000);
    }
    if (ch == 'o'){
      fill_solid( &(leds[47]), 1, CRGB( 255, 255, 255) );
      fill_solid( &(leds[46]), 1, CRGB( 255, 255, 255) );
      FastLED.show();
      delay(1000);
    }
    if (ch == 'p'){
      fill_solid( &(leds[45]), 1, CRGB( 255, 255, 255) );
      fill_solid( &(leds[44]), 1, CRGB( 255, 255, 255) );
      FastLED.show();
      delay(1000);
    }
    if (ch == 'q'){
      fill_solid( &(leds[43]), 1, CRGB( 255, 255, 255) );
      fill_solid( &(leds[42]), 1, CRGB( 255, 255, 255) );
      FastLED.show();
      delay(1000);
    }
    if (ch == 'r'){
      fill_solid( &(leds[41]), 1, CRGB( 255, 255, 255) );
      fill_solid( &(leds[40]), 1, CRGB( 255, 255, 255) );
      FastLED.show();
      delay(1000);
    }
    if (ch == 's'){
      fill_solid( &(leds[39]), 1, CRGB( 255, 255, 255) );
      fill_solid( &(leds[38]), 1, CRGB( 255, 255, 255) );
      FastLED.show();
      delay(1000);
    }
    if (ch == 't'){
      fill_solid( &(leds[37]), 1, CRGB( 255, 255, 255) );
      fill_solid( &(leds[36]), 1, CRGB( 255, 255, 255) );
      FastLED.show();
      delay(1000);
    }
    if (ch == 'u'){
      fill_solid( &(leds[35]), 1, CRGB( 255, 255, 255) );
      fill_solid( &(leds[34]), 1, CRGB( 255, 255, 255) );
      FastLED.show();
      delay(1000);
    }
    if (ch == 'v'){
      fill_solid( &(leds[33]), 1, CRGB( 255, 255, 255) );
      fill_solid( &(leds[32]), 1, CRGB( 255, 255, 255) );
      FastLED.show();
      delay(1000);
    }
    if (ch == 'w'){
      fill_solid( &(leds[31]), 1, CRGB( 255, 255, 255) );
      fill_solid( &(leds[30]), 1, CRGB( 255, 255, 255) );
      FastLED.show();
      delay(1000);
    }
    if (ch == 'x'){
      fill_solid( &(leds[29]), 1, CRGB( 255, 255, 255) );
      fill_solid( &(leds[28]), 1, CRGB( 255, 255, 255) );
      FastLED.show();
      delay(1000);
    }
    if (ch == 'y'){
      fill_solid( &(leds[27]), 1, CRGB( 255, 255, 255) );
      FastLED.show();
      delay(1000);
    }
    if (ch == 'z'){
      fill_solid( &(leds[26]), 1, CRGB( 255, 255, 255) );
      FastLED.show();
      delay(1000);
    }
    }
    //These if statements are for the letters~
}
void FillLEDsFromPaletteColors( uint8_t colorIndex){
    uint8_t brightness = 255;
    
    for( int i = 0; i < NUM_LEDS; i++) {
        leds[i] = ColorFromPalette( currentPalette, colorIndex, brightness, currentBlending);
        colorIndex += 3;
    }
    //For showing the pre-made palette on the computer.
}
