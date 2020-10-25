//
// Created by Изабелла Затикян on 23.10.2020.
//

#ifndef SHOCK_FUNCTION_H
#define SHOCK_FUNCTION_H
#include<iostream>
#include <cmath>
#include "PerfectStateGas.h"
#include "Shock_function.h"

using namespace std;

double calc_a(PerfectStateGas gas); // Считает коэффициент А

double calc_b(PerfectStateGas gas); // Считает коэффициент B

double shock_func(PerfectStateGas gas, double pressure); // Функция, считающая функцию для ударной волны

double derivative_shock_func(PerfectStateGas gas, double pressure); //Производная функция дял ударной волны


#endif //SHOCK_FUNCTION_H
