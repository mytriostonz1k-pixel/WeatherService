#include "Weather.h"
#include <iostream>

// Конструктор: инициализируем поля класса переданными значениями
Weather::Weather(std::string city, double lon, double lat, double temperature, 
                 std::string weather, double windSpeed, int clouds)
    : city(city), lon(lon), lat(lat), temperature(temperature), 
      weather(weather), windSpeed(windSpeed), clouds(clouds) {}

// Метод вывода описания погоды
void Weather::printDescription() const {
    std::cout << "=== Погода в городе " << city << " ===" << std::endl;
    std::cout << "Координаты: [" << lat << ", " << lon << "]" << std::endl;
    std::cout << "Температура: " << temperature << " °C" << std::endl;
    std::cout << "Описание: " << weather << std::endl;
    std::cout << "Скорость ветра: " << windSpeed << " м/с" << std::endl;
    std::cout << "Облачность: " << clouds << "%" << std::endl;
    std::cout << "=============================" << std::endl;
}