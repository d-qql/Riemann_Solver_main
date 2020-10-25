//
// Created by Изабелла Затикян on 23.10.2020.
//
#include <iostream>
#include <cmath>
#include "PerfectStateGas.h"

    //double pressure, temperature,  mol_mass, density;

    PerfectStateGas::PerfectStateGas() = default;
    PerfectStateGas::PerfectStateGas(double pressure, double Gamma, double mol_mass, double density){
        this->pressure = pressure;
        this->Gamma = Gamma;
        this->mol_mass = mol_mass;
        this->density = density;
        this->set_temperature();
    }
    PerfectStateGas::~PerfectStateGas() = default;
    void PerfectStateGas::set_density(){

        this->density = this->mol_mass * this->pressure / 8.314 / this->temperature;
    }

    void PerfectStateGas::set_temperature(){

        this->temperature = this->pressure / this->density * this->mol_mass / 8.314;
    };

    double PerfectStateGas::get_cv(){ // Возвращает удельную теплоемкость при постоянном объеме в Дж / кг / K

        return 8.314 / (this->Gamma - 1) / this->mol_mass;
    };

    double PerfectStateGas::get_cp(){ // Возвращает удельную теплоемкость при постоянном давлении ДЖ / кг / K

        return 8.314 * this->Gamma / (this->Gamma - 1) / this->mol_mass;
    };

    double PerfectStateGas::get_sound_speed(){ //Возвращает скорость звука м / с

        return sqrt(this->Gamma * 8.314 * this->temperature / this->mol_mass);
    };

    double PerfectStateGas::internal_energy(){ //Возвращает удельную внутреннюю энергию газа Дж / кг

        return this->get_cv() * temperature;
    };
    double PerfectStateGas::enthalpy(){ //Возвращает удельную энтальпию газа Дж / кг

        return this->get_cp() * temperature;
    };
