#pragma once
#include <C610.h>
#include <Arduino.h>

enum class C610Subbus { kIDZeroToThree, kIDFourToSeven };


class C610BusBase{
    public:
        void PollCAN();
        void Callback(const CAN_message_t &msg);
        void CommandTorques(const int32_t torque0, const int32_t torque1,
                            const int32_t torque2 , const int32_t torque3,
                            C610Subbus subbus);
        C610 &Get(const uint8_t i);
};