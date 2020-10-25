//
// Created by Изабелла Затикян on 23.10.2020.
//

#ifndef RIEMMAN_SOLVER_H
#define RIEMMAN_SOLVER_H
#include <iostream>
#include "PerfectStateGas.h"
#include "Reflection_function.h"
#include "Shock_function.h"

using namespace std;


double calc_initial_approximation(PerfectStateGas left_gas, PerfectStateGas right_gas, double left_velocity, // Класс для вычисления начального приближения
                                     double right_velocity);

double pressure_solve(PerfectStateGas left_gas, PerfectStateGas right_gas, double left_velocity, double right_velocity, double tolerance = 1e-6);
double calc_function(PerfectStateGas gas, double pressure);
double calc_derivative(PerfectStateGas gas, double pressure);





#endif //RIEMMAN_SOLVER1_H
