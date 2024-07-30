#include "costs.h"
#include <array>
#include <tuple>
#include "MyForm.h"
#include <iostream>

using namespace progr;

//Редкие камни...........................................................................................
int gold1 = 0, gold2 = 0, gold3 = 0, gold4 = 0, gold5 = 0, gold6 = 0;
int silver1 = 0, silver2 = 0, silver3 = 0, silver4 = 0, silver5 = 0, silver6 = 0;
int copper1 = 0, copper2 = 0, copper3 = 0, copper4 = 0, copper5 = 0, copper6 = 0;

void MyForm::FresultsIni(std::array<std::tuple<int, int, int>, 6> resultsIni) {
    results = resultsIni;
}

std::array<std::tuple<int, int, int>, 6> results;

void MyForm::CostsIni() {
    gold1 = std::get<0>(results[0]);
    silver1 = std::get<1>(results[0]);
    copper1 = std::get<2>(results[0]);
    std::cout << gold1 << std::endl;
    std::cout << silver1 << std::endl;
    std::cout << copper1 << std::endl;

    gold2 = std::get<0>(results[1]);
    silver2 = std::get<1>(results[1]);
    copper2 = std::get<2>(results[1]);

    gold3 = std::get<0>(results[2]);
    silver3 = std::get<1>(results[2]);
    copper3 = std::get<2>(results[2]);

    gold4 = std::get<0>(results[3]);
    silver4 = std::get<1>(results[3]);
    copper4 = std::get<2>(results[3]);

    gold5 = std::get<0>(results[4]);
    silver5 = std::get<1>(results[4]);
    copper5 = std::get<2>(results[4]);

    gold6 = std::get<0>(results[5]);
    silver6 = std::get<1>(results[5]);
    copper6 = std::get<2>(results[5]);
}


//Руды.........................................................................................................
int oregold1 = 0, oregold2 = 0, oregold3 = 0;
int oresilver1 = 0, oresilver2 = 0, oresilver3 = 0;
int orecopper1 = 0, orecopper2 = 0, orecopper3 = 0;

void MyForm::oreFresultsIni(std::array<std::tuple<int, int, int>, 3> oreresultsIni) {
    oreresults = oreresultsIni;
}

std::array<std::tuple<int, int, int>, 3> oreresults;

void MyForm::oreCostsIni() {
    oregold1 = std::get<0>(oreresults[0]);
    oresilver1 = std::get<1>(oreresults[0]);
    orecopper1 = std::get<2>(oreresults[0]);
    std::cout << oregold1 << std::endl;
    std::cout << oresilver1 << std::endl;
    std::cout << orecopper1 << std::endl;

    oregold2 = std::get<0>(oreresults[1]);
    oresilver2 = std::get<1>(oreresults[1]);
    orecopper2 = std::get<2>(oreresults[1]);

    oregold3 = std::get<0>(oreresults[2]);
    oresilver3 = std::get<1>(oreresults[2]);
    orecopper3 = std::get<2>(oreresults[2]);
}


//Редкие камни...........................................................................................
int ugold1 = 0, ugold2 = 0, ugold3 = 0, ugold4 = 0, ugold5 = 0, ugold6 = 0;
int usilver1 = 0, usilver2 = 0, usilver3 = 0, usilver4 = 0, usilver5 = 0, usilver6 = 0;
int ucopper1 = 0, ucopper2 = 0, ucopper3 = 0, ucopper4 = 0, ucopper5 = 0, ucopper6 = 0;

void MyForm::uFresultsIni(std::array<std::tuple<int, int, int>, 6> uresultsIni) {
    uresults = uresultsIni;
}

std::array<std::tuple<int, int, int>, 6> uresults;

void MyForm::uCostsIni() {
    ugold1 = std::get<0>(uresults[0]);
    usilver1 = std::get<1>(uresults[0]);
    ucopper1 = std::get<2>(uresults[0]);
    std::cout << ugold1 << std::endl;
    std::cout << usilver1 << std::endl;
    std::cout << ucopper1 << std::endl;

    ugold2 = std::get<0>(uresults[1]);
    usilver2 = std::get<1>(uresults[1]);
    ucopper2 = std::get<2>(uresults[1]);

    ugold3 = std::get<0>(uresults[2]);
    usilver3 = std::get<1>(uresults[2]);
    ucopper3 = std::get<2>(uresults[2]);

    ugold4 = std::get<0>(uresults[3]);
    usilver4 = std::get<1>(uresults[3]);
    ucopper4 = std::get<2>(uresults[3]);

    ugold5 = std::get<0>(uresults[4]);
    usilver5 = std::get<1>(uresults[4]);
    ucopper5 = std::get<2>(uresults[4]);

    ugold6 = std::get<0>(uresults[5]);
    usilver6 = std::get<1>(uresults[5]);
    ucopper6 = std::get<2>(uresults[5]);
}
