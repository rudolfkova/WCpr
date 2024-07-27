#include <iostream>
#include <fstream> // ��� ������ � �������
#include <string>  // ��� ������ �� ��������
#include <windows.h>
#include "MyForm.h"
#include <regex>
#include <tuple>

using namespace progr;

//��������� ������ �� ����� � ��������� � � cpp_web_url.txt
void MyForm::cpp_web_urlInput(std::string data) {
    // �������� ����� ��� ������
    std::ofstream outputFile("cpp_web_url.txt");

    // ��������, ������� �� ������� ����
    if (outputFile.is_open()) {
        // ������ ������ � ����
        outputFile << data;

        // �������� �����
        outputFile.close();

        std::cout << "successfully create output.txt" << std::endl;
    }
    else {
        std::cerr << "error create" << std::endl;
    }
};

//��������� ������ script_web.cs, ���������� � C#. ���� ������ ���������� ���� � ���� webres.txt
void MyForm::webresOpen() {
    // ���� � ������������ �����
    LPCWSTR exePath = L"script_web.exe"; // �������� �� ��� ����

    // ��������� ��� �������� ���������� � ��������
    PROCESS_INFORMATION processInfo;
    ZeroMemory(&processInfo, sizeof(processInfo));

    // ��������� ��� �������� ���������� � �������� ��������
    STARTUPINFO startupInfo;
    ZeroMemory(&startupInfo, sizeof(startupInfo));
    startupInfo.cb = sizeof(startupInfo);

    // ������� �������
    if (CreateProcess(exePath,    // ���� � ������������ �����
        NULL,       // ��������� ������
        NULL,       // �������� ��������
        NULL,       // �������� ������
        FALSE,      // ������������� ������������
        0,          // ����� ��������
        NULL,       // �����
        NULL,       // ������� ����������
        &startupInfo, // ���������� � �������
        &processInfo) // ���������� � ��������
        ) {
        // �������� ���������� ��������
        WaitForSingleObject(processInfo.hProcess, INFINITE);

        // ��������� �����������
        CloseHandle(processInfo.hProcess);
        CloseHandle(processInfo.hThread);

        std::cout << "OK." << std::endl;
    }
    else {
        std::cerr << "Error: " << GetLastError() << std::endl;
    }
};

//��������� ������ �� webres.txt � ���������� ���� string
std::string MyForm::webresOutput(void) {
    std::ifstream inputFile("webres.txt"); // ��������� ���� ��� ������
    if (!inputFile) { // ���������, ������� �� ������� ����
        std::cerr << "Open file error" << std::endl;
        return "Error"; // ��������� ���������� ��������� � �������
    }

    std::string fileContents; // ���������� ��� �������� ����������� �����
    std::string line;

    while (std::getline(inputFile, line)) { // ������ ���� ���������
        fileContents += line + "\n"; // ��������� ������ ������ � ���������� ������ � �������� ����� ������
    }

    inputFile.close(); // ��������� ����

    std::cout << "Webres content:\n" << fileContents << std::endl; // ������� ���������� �����
    return fileContents;
};

//����������� ���������� ���� string � ���������� gold silver copper
std::tuple<int, int, int> MyForm::findMetals(std::string text) {
    int gold = 0, silver = 0, copper = 0;  // ������������� ����������

    std::regex regex(R"((\d+)([gsc]))"); // ���������� ��������� ��� ������ ����� � �������� ��������
    std::smatch match;
    std::string::const_iterator searchStart(text.cbegin());

    // ����� ���� ���������� � ������
    while (std::regex_search(searchStart, text.cend(), match, regex)) {
        int value = std::stoi(match[1].str());
        char unit = match[2].str()[0];

        switch (unit) {
        case 'g':
            gold = value;
            std::cout << "Gold:\n" << gold << std::endl;
            break;
        case 's':
            silver = value;
            std::cout << "Silver:\n" << silver << std::endl;
            break;
        case 'c':
            copper = value;
            std::cout << "Copper:\n" << copper << std::endl;
            break;
        default:
            break;
        }
        searchStart = match.suffix().first;
    }

    // ������� �������� � ���� �������
    return std::make_tuple(gold, silver, copper);
};
