//
// Created by Изабелла Затикян on 23.10.2020.
//
#include<iostream>
#include <cmath>
#include "Shock_function.h"

using namespace std;

double calc_a(PerfectStateGas gas){ // Считает коэффициент А

    return 2 / (gas.Gamma + 1) / gas.density;
};

double calc_b(PerfectStateGas gas){ // Считает коэффициент B

    return (gas.Gamma - 1) / (gas.Gamma + 1) * gas.pressure;
};

double shock_func(PerfectStateGas gas, double pressure){ // Функция, считающая функцию для ударной волны

    return (pressure - gas.pressure) * sqrt(calc_a(gas) / (calc_b(gas) + pressure));
};

double derivative_shock_func(PerfectStateGas gas, double pressure){ //Производная функция дял ударной волны

    double b_coef_plas_p = calc_b(gas) + pressure;

    return sqrt(calc_a(gas) / b_coef_plas_p) * (1 - (pressure - gas.pressure) / 2 / b_coef_plas_p);
};
