#ifndef JSONSERVICE_H
#define JSONSERVICE_H

#include "Service.h"
#include "Weather.h"
#include <string>

// Наследуемся от интерфейса Service
class JsonService : public Service {
public:
    // Переопределяем метод getWeather
    Weather getWeather(std::string s) override;

    // Виртуальный деструктор
    virtual ~JsonService() {}
};

#endif // JSONSERVICE_H