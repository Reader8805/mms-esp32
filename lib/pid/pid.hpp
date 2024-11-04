#pragma once
#include <Arduino.h>
#include <pid.hpp>
#include <sensor.hpp>
void left_run_PD(float Kp, float Kd);
void right_run_PD(float Kp, float Kd);
void dead_end_PD(float Kp, float Kd);
