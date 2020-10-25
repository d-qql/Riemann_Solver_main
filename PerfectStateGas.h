//
// Created by Изабелла Затикян on 23.10.2020.
//.

#ifndef PerfectGasState_H
#define PerfectGasState_H

class PerfectStateGas{ //Класс состояния одномерного идеального газа


public:
    double pressure, temperature,  Gamma,  mol_mass, density;
    PerfectStateGas();
    PerfectStateGas(double pressure, double Gamma, double mol_mass, double density);
    ~PerfectStateGas();

    void set_density();

    void set_temperature();

    double get_cv(); // Возвращает удельную теплоемкость при постоянном объеме в Дж / кг / K

    double get_cp(); // Возвращает удельную теплоемкость при постоянном давлении ДЖ / кг / K

    double get_sound_speed(); //Возвращает скорость звука м / с

    double internal_energy(); //Возвращает удельную внутреннюю энергию газа Дж / кг

    double enthalpy(); //Возвращает удельную энтальпию газа Дж / кг

};

#endif //PERFECTSTATEGAS_H