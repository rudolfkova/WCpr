#include <iostream>
#include <fstream> // Для работы с файлами
#include <string>  // Для работы со строками
#include <windows.h>
#include "MyForm.h"
#include <regex>
#include <tuple>

using namespace progr;

//Принимает ссылку на товар и сохраняет её в cpp_web_url.txt
void MyForm::cpp_web_urlInput(std::string data) {
    // Открытие файла для записи
    std::ofstream outputFile("cpp_web_url.txt");

    // Проверка, удалось ли открыть файл
    if (outputFile.is_open()) {
        // Запись данных в файл
        outputFile << data;

        // Закрытие файла
        outputFile.close();

        std::cout << "successfully create output.txt" << std::endl;
    }
    else {
        std::cerr << "error create" << std::endl;
    }
};

//Запускает скрипт script_web.cs, написанный в C#. Этот скрипт записывает цену в файл webres.txt
void MyForm::webresOpen() {
    // Путь к исполняемому файлу
    LPCWSTR exePath = L"script_web.exe"; // Замените на ваш путь

    // Структура для хранения информации о процессе
    PROCESS_INFORMATION processInfo;
    ZeroMemory(&processInfo, sizeof(processInfo));

    // Структура для хранения информации о создании процесса
    STARTUPINFO startupInfo;
    ZeroMemory(&startupInfo, sizeof(startupInfo));
    startupInfo.cb = sizeof(startupInfo);

    // Создаем процесс
    if (CreateProcess(exePath,    // Путь к исполняемому файлу
        NULL,       // Командная строка
        NULL,       // Атрибуты процесса
        NULL,       // Атрибуты потока
        FALSE,      // Унаследование дескрипторов
        0,          // Опции создания
        NULL,       // Среда
        NULL,       // Текущая директория
        &startupInfo, // Информация о запуске
        &processInfo) // Информация о процессе
        ) {
        // Ожидание завершения процесса
        WaitForSingleObject(processInfo.hProcess, INFINITE);

        // Закрываем дескрипторы
        CloseHandle(processInfo.hProcess);
        CloseHandle(processInfo.hThread);

        std::cout << "OK." << std::endl;
    }
    else {
        std::cerr << "Error: " << GetLastError() << std::endl;
    }
};

//Загружает данные из webres.txt в переменную типа string
std::string MyForm::webresOutput(void) {
    std::ifstream inputFile("webres.txt"); // Открываем файл для чтения
    if (!inputFile) { // Проверяем, удалось ли открыть файл
        std::cerr << "Open file error" << std::endl;
        return "Error"; // Завершаем выполнение программы с ошибкой
    }

    std::string fileContents; // Переменная для хранения содержимого файла
    std::string line;

    while (std::getline(inputFile, line)) { // Читаем файл построчно
        fileContents += line + "\n"; // Добавляем каждую строку в переменную вместе с символом новой строки
    }

    inputFile.close(); // Закрываем файл

    std::cout << "Webres content:\n" << fileContents << std::endl; // Выводим содержимое файла
    return fileContents;
};

//Преобразует переменную типа string в переменные gold silver copper
std::tuple<int, int, int> MyForm::findMetals(std::string text) {
    int gold = 0, silver = 0, copper = 0;  // Инициализация переменных

    std::regex regex(R"((\d+)([gsc]))"); // Регулярное выражение для поиска чисел и символов металлов
    std::smatch match;
    std::string::const_iterator searchStart(text.cbegin());

    // Поиск всех совпадений в тексте
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

    // Возврат значений в виде кортежа
    return std::make_tuple(gold, silver, copper);
};
