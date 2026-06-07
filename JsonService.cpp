#include "JsonService.h"
#include "json.hpp" // Путь к библиотеке (может быть <nlohmann/json.hpp>)
#include <fstream>
#include <stdexcept>

using json = nlohmann::json;

Weather JsonService::getWeather(std::string s) 
{
    std::ifstream fin(s);
    if (!fin) {
        // Заменяем exception("error") на стандартный runtime_error для кроссплатформенности
        throw std::runtime_error("Файл не найден: " + s);
    }

    json j;
    j = json::parse(fin);

    // Извлекаем данные из JSON (заполняем многоточия из задания)
    std::string city = j["name"];               // Киров
    double lon = j["coord"]["lon"];             // 49.6601
    double lat = j["coord"]["lat"];             // 58.5966 (Заполнили)
    double temperature = j["main"]["temp"];     // 5.69 (Заполнили)
    std::string weather = j["weather"][0]["description"]; // дождь (Заполнили)
    double windSpeed = j["wind"]["speed"];       // 4.27 (Заполнили)
    int clouds = j["clouds"]["all"];             // 100

    // Вместо return Weather(параметры); подставляем наши переменные в конструктор
    return Weather(city, lon, lat, temperature, weather, windSpeed, clouds);
}