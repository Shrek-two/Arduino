
// proof of concept for the one year calendar project.
// let0 january 6 2021

int day1Pin = 6;
int day2Pin = 5;
int dailyPinRed = 11;
int dailyPinGreen = 10;
int dailyPinBlue = 9;
int button = 2;

int dayCount = 0;

void setup()                // initialize button and lights
{
    pinMode(button, INPUT_PULLUP);          
    pinMode(day2Pin, OUTPUT);
    pinMode(day1Pin, OUTPUT);
    pinMode(dailyPinBlue, OUTPUT);
    pinMode(dailyPinGreen, OUTPUT);
    pinMode(dailyPinRed, OUTPUT);

    digitalWrite(dailyPinRed, HIGH);
    digitalWrite(dailyPinBlue, LOW);
    digitalWrite(dailyPinGreen, LOW);

}

void loop()
{
    #define daily_delay 864000  // delay time for one day

    if(digitalRead(button) == LOW){             // watch for button press
        digitalWrite(dailyPinGreen, HIGH);      // if button is pressed, set light to green
        digitalWrite(dailyPinRed, LOW);         // unset red

        if(dayCount == 0){
            digitalWrite(day1Pin, HIGH);
        }
        else if(dayCount == 1){
            digitalWrite(day2Pin, HIGH);            
        }

        dayCount++;
    }
}
