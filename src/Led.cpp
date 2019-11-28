#include "Led.h"

using namespace ootb;

Led::Led(unsigned int pin, bool invert)
:
    pin(pin),
    invert(invert)
{
    pinMode(pin, OUTPUT);
    off();
}

Led::~Led()
{
}

void Led::on()
{
    digitalWrite(pin, invert ? LOW : HIGH);
}

void Led::off()
{
    digitalWrite(pin,  invert ? HIGH : LOW);
}

void Led::set(bool state)
{
    state ? on() : off();
}
