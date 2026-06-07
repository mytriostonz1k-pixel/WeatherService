#ifndef WEATHER_H
#define WEATHER_H

#include <string>

class Weather {
private:
    // Поля класса из условия задачи
    std::string city;
    double lon;
    double lat;
    double temperature;
    std::string weather;
    double windSpeed;
    int clouds;

public:
    // Конструктор со всеми параметрами
    Weather(std::string city, double lon, double lat, double temperature, 
            std::string weather, double windSpeed, int clouds);

    // Метод для вывода описания погоды в консоль
    void printDescription() const;
};

#endif // WEATHER_H