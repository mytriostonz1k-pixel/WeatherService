#ifndef SERVICE_H
#define SERVICE_H

#include <string>
#include "Weather.h" // Импортируем класс Weather, так как метод его возвращает

class Service {
public:
    // Чистый виртуальный метод (делает класс абстрактным)
    virtual Weather getWeather(std::string s) = 0;

    // Виртуальный деструктор (критически важен для интерфейсов!)
    virtual ~Service() = default; 
};

#endif // SERVICE_H