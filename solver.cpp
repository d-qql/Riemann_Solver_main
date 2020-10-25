//
// Created by Изабелла Затикян on 23.10.2020.
//

#include "solver.h"
#include <algorithm>

using namespace std;

//virtual double InitialApproximation::calc_initial_approximation(PerfectStateGas left_gas, PerfectStateGas right_gas, double left_velocity, double right_velocity);


double calc_initial_approximation(PerfectStateGas left_gas, PerfectStateGas right_gas, double left_velocity, // Класс для вычисления начального приближения
                                     double right_velocity) {
        return 0.5 * (left_gas.pressure + right_gas.pressure);
    };

double calc_function(PerfectStateGas gas, double pressure){

    if (pressure > gas.pressure) {
    return derivative_shock_func(gas, pressure); }
    else{
    return derivative_reflection_func(gas, pressure);
    };
};

double calc_derivative(PerfectStateGas gas, double pressure) { //Вычисляет производную
    if (pressure > gas.pressure) {
        return derivative_shock_func(gas, pressure); }
     else {
        return derivative_reflection_func(gas, pressure);
    };
};
double pressure_solve(PerfectStateGas left_gas, PerfectStateGas right_gas, double left_velocity, double right_velocity, double tolerance){
    double pressure = calc_initial_approximation(left_gas, right_gas, left_velocity, right_velocity);
    double error = 10;
    while (error > tolerance) {
        double delta_velocity = right_velocity - left_velocity;
        double function = calc_function(left_gas, pressure) + calc_function(right_gas, pressure) + delta_velocity;
        double derivative = calc_derivative(left_gas, pressure) + calc_derivative(right_gas, pressure);
        double delta = -function / derivative;
        double new_pressure = pressure + delta;
        error = fabs(delta) / (fabs(pressure) + fabs(new_pressure));
        pressure = fmax(pressure + delta, 1e-6);
        return pressure;
    };
};

