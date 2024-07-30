#pragma once
#include <array>
#include <tuple>
#include <vector>


// Цены на редкие камни....................................................................
extern int gold1; 
extern int gold2;
extern int gold3;
extern int gold4;
extern int gold5;
extern int gold6;

extern int silver1;
extern int silver2;
extern int silver3;
extern int silver4;
extern int silver5;
extern int silver6;

extern int copper1;
extern int copper2;
extern int copper3;
extern int copper4;
extern int copper5;
extern int copper6;

extern std::array<std::tuple<int, int, int>, 6> results;
void CostsIni();

extern std::vector<int> costs;


// Цены на руды....................................................................
extern int oregold1;
extern int oregold2;
extern int oregold3;

extern int oresilver1;
extern int oresilver2;
extern int oresilver3;

extern int orecopper1;
extern int orecopper2;
extern int orecopper3;

extern std::array<std::tuple<int, int, int>, 3> oreresults;
void oreCostsIni();

extern std::vector<int> orecosts;

extern int egold;
extern int esilver;
extern int ecopper;

extern std::array<std::tuple<int, int, int>, 1> eresult;
void eCostIni();

extern std::vector<int> ecost;


// Цены на обычные камни...........................................................
extern int ugold1;
extern int ugold2;
extern int ugold3;
extern int ugold4;
extern int ugold5;
extern int ugold6;

extern int usilver1;
extern int usilver2;
extern int usilver3;
extern int usilver4;
extern int usilver5;
extern int usilver6;

extern int ucopper1;
extern int ucopper2;
extern int ucopper3;
extern int ucopper4;
extern int ucopper5;
extern int ucopper6;

extern std::array<std::tuple<int, int, int>, 6> uresults;
void uCostsIni();

extern std::vector<int> ucosts;