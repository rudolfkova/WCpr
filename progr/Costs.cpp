#include "costs.h"
#include <array>
#include <tuple>
#include "MyForm.h"
#include <iostream>

using namespace progr;

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