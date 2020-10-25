//
// Created by Изабелла Затикян on 23.10.2020.
//

#ifndef REFLECTION_FUNCTION_H
#define REFLECTION_FUNCTION_H
#include "PerfectStateGas.h"



double reflection_func(PerfectStateGas gas, double pressure); //Рассчитывает функцию для волны разрежения

double derivative_reflection_func(PerfectStateGas gas, double pressure); //Вовзращает производную от функции для волны разрежения



#endif //REFLECTION_FUNCTION_H
