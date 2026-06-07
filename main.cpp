#include "JsonService.h"
#include "XmlService.h"
#include <iostream>

int main() {
    // Способ 1: Тестирование JSON парсера
    std::cout << "Тестирование JSON сервиса:" << std::endl;
    try {
        JsonService js;
        Weather w1 = js.getWeather("weather.json");
        w1.printDescription();
    } catch (const std::exception& e) {
        std::cerr << "Ошибка JSON: " << e.what() << std::endl;
    }

    std::cout << "\n-----------------------------\n" << std::endl;

    // Способ 2: Тестирование XML парсера
    std::cout << "Тестирование XML сервиса:" << std::endl;
    try {
        XmlService xs;
        Weather w2 = xs.getWeather("weather.xml");
        w2.printDescription();
    } catch (const std::exception& e) {
        std::cerr << "Ошибка XML: " << e.what() << std::endl;
    }

    return 0;
}