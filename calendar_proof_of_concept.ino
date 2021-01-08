
// proof of concept for the one year calendar project.
// let0 january 6 2021

int day1Pin = 6;
int day2Pin = 5;
int dailyPinRed = 11;
int dailyPinGreen = 10;
int button = 2;
int resetButton = 4;

int dayCount = 0;

int lights [2] = {day1Pin, day2Pin};

void setup()                // initialize button and lights
{
    pinMode(button, INPUT_PULLUP);    
    pinMode(resetButton, INPUT_PULLUP);        
    pinMode(day2Pin, OUTPUT);
    pinMode(day1Pin, OUTPUT);
    pinMode(dailyPinGreen, OUTPUT);
    pinMode(dailyPinRed, OUTPUT);

    digitalWrite(dailyPinRed, HIGH);
    digitalWrite(dailyPinGreen, LOW);

}

void loop()
{
    #define daily_delay 864000  // delay time for one day

    if(digitalRead(button) == LOW){             // watch for button press
        digitalWrite(dailyPinGreen, HIGH);      // if button is pressed, set light to green
        digitalWrite(dailyPinRed, LOW);         // unset red

        digitalWrite(lights[dayCount], HIGH);

        dayCount++;
    }
    delay(250);

    if(digitalRead(resetButton) == LOW){
        digitalWrite(dailyPinGreen, LOW);      // if button is pressed, unset light to green
        digitalWrite(dailyPinRed, HIGH);         // set red
    }

}