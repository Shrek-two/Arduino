
// proof of concept for the one year calendar project.
// let0 january 6 2021

int day1Pin = 6;
int day2Pin = 5;
int dailyPinRed = 11;
int dailyPinGreen = 10;
int dailyPinBlue = 9;
int button = 2;

void setup()
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
    
}