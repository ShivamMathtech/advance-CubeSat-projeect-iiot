/******************************************************************************
 *
 * File : main.cpp
 *
 * Description:
 *      Primary flight software execution loop.
 *
 ******************************************************************************/

#include <Arduino.h>

#include "../include/config.h"

void InitializeSystem(void);
void ExecuteMissionCycle(void);

void setup()
{
    InitializeSystem();
}

void loop()
{
    ExecuteMissionCycle();
}