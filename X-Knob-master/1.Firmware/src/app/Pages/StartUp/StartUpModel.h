#ifndef __STARTUP_MODEL_H
#define __STARTUP_MODEL_H

#include "app/Accounts/Account_Master.h"
#include "hal/hal.h"

namespace Page
{

class StartupModel
{
public:
    void Init();
    void DeInit();
    void PlayMusic(const char* music);
    void SetEncoderEnable(bool en)
    {
        // HAL::Encoder_SetEnable(en);
    }

private:
    Account* account;
};

}

#endif
