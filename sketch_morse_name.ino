

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


// A ._
morse_Dot();
morse_Dash();

// R ._.
morse_Dot();
morse_Dash();
morse_Dot();

// I ..
morse_Dot();
morse_Dot();


//  N _.
morse_Dash();
morse_Dot();

// D _..
morse_Dash();
morse_Dot();
morse_Dot();

//E .;
morse_Dot();

// R ._.
morse_Dot();
morse_Dash();
morse_Dot();
}
