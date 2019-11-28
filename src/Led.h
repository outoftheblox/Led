#ifndef _Led_H
#define _Led_H

#include <Arduino.h>

namespace ootb
{
    class Led
    {
        private:
            unsigned int pin;
            bool invert;

        public:
            Led(unsigned int pin, bool invert = false);
            ~Led();
            void on();
            void off();
            void set(bool on);
    };
}

#endif
