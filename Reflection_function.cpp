//
// Created by Изабелла Затикян on 23.10.2020.
//

#include "Reflection_function.h"
#include <iostream>
#include <cmath>
// Файл с функциями для волны разрежения
using namespace std;

double reflection_func(PerfectStateGas gas, double pressure){ //Рассчитывает функцию для волны разрежения

    double power = (gas.Gamma -1) / 2 / gas.Gamma;

    return 2 * gas.get_sound_speed() / (gas.Gamma - 1 ) * (pow((pressure / gas.pressure), power -1));
};

double derivative_reflection_func(PerfectStateGas gas, double pressure){ //Вовзращает производную от функции для волны разрежения

    double power = -(gas.Gamma + 1) / 2 / gas.Gamma;

    return pow((pressure / gas.pressure),power) / gas.get_sound_speed() / gas.density;

};
