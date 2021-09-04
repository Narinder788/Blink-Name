

void setup() {

pinMode(LED_BUILTIN, OUTPUT); // digital pin LED_BUILTIN is initialized as an output.
}



void morse_Dot() {
digitalWrite(LED_BUILTIN, HIGH); // turns the LED on
delay(300); // LED remains on for 0.3 seconds
digitalWrite(LED_BUILTIN, LOW); // turns the LED off
delay(300); // LED remains off for 0.3 seconds
}



void morse_Dash() {
digitalWrite(LED_BUILTIN, HIGH); // turns the LED on
delay(1200); // LED remains on for 1.2 seconds
digitalWrite(LED_BUILTIN, LOW); // turns the LED off
delay(1200); // LED remains off for 1.2 seconds
}

void loop() {
/*

Morse's code for my name is as follows: -

N _.

A ._

R ._.

I ..

N _.

D _..

E .

R ._.
*/

// N _.
morse_Dash();
morse_Dot();
delay(1800);  // delay for 1.8 second after alphabet


// A ._
morse_Dot();
morse_Dash();
delay(1800);  // delay for 1.8 second after alphabet


// R ._.
morse_Dot();
morse_Dash();
morse_Dot();
delay(1800);  // delay for 1.8 second after alphabet


// I ..
morse_Dot();
morse_Dot();
delay(1800);  // delay for 1.8 second after alphabet

//  N _.
morse_Dash();
morse_Dot();
delay(1800);  // delay for 1.8 second after alphabet

// D _..
morse_Dash();
morse_Dot();
morse_Dot();
delay(1800);  // delay for 1.8 second after alphabet
//E .
morse_Dot();

// R ._.
morse_Dot();
morse_Dash();
morse_Dot();
delay(1800);  // delay for 1.8 second after alphabet
}
