#include <climits>
//
// Created by Изабелла Затикян on 23.10.2020.
//
#include "Shock_function.h"
#include "solver.h"
#include "PerfectStateGas.h"
#include "Reflection_function.h"
#include <cmath>
#include <iostream>


using namespace std;

int main() {
    double Gamma = 1.4;
    double mol_mass = 0.029;


    double left_pressure = 460.894;
    double left_density = 5.99924;
    double left_velocity = 19.5975;

    PerfectStateGas left_gas = PerfectStateGas(left_pressure, Gamma, mol_mass, left_density);


    double right_pressure = 46.0950;
    double right_density = 5.9924;
    double right_velocity = -6.19633;

    PerfectStateGas right_gas = PerfectStateGas(right_pressure, Gamma, mol_mass, right_density);

    cout << pressure_solve(left_gas, right_gas, left_velocity, right_velocity);
    return 0;
}