#include "XmlService.h"
#include "pugixml.hpp" // Подключаем заголовочный файл pugixml
#include <stdexcept>

using namespace pugi;

Weather XmlService::getWeather(std::string s)
{
    xml_document doc;
    xml_parse_result result = doc.load_file(s.c_str());
    if (!result) {
        throw std::runtime_error("Ошибка чтения или парсинга XML файла");
    }

    xml_node node = doc.child("current");
    
    // 1. Город
    std::string city = node.child("city").attribute("name").as_string(); // Киров
    
    // 2. Долгота
    double lon = node.child("city").child("coord").attribute("lon").as_double(); // 49.6601
    
    // 3. Широта (Заполнили первое многоточие)
    double lat = node.child("city").child("coord").attribute("lat").as_double(); // 58.5966
    
    // 4. Температура
    double temperature = node.child("temperature").attribute("value").as_double(); // 5.69
    
    // 5. Описание погоды (Заполнили второе многоточие)
    std::string weather = node.child("weather").attribute("value").as_string(); // дождь
    
    // 6. Скорость ветра (Заполнили третье многоточие)
    double windSpeed = node.child("wind").child("speed").attribute("value").as_double(); // 4.27
    
    // 7. Облачность (Заполнили четвертое многоточие)
    int clouds = node.child("clouds").attribute("value").as_int(); // 100

    // Передаем все собранные параметры в конструктор класса Weather
    return Weather(city, lon, lat, temperature, weather, windSpeed, clouds);
}