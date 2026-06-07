#ifndef XMLSERVICE_H
#define XMLSERVICE_H

#include "Service.h"
#include "Weather.h"
#include <string>

class XmlService : public Service {
public:
    // Переопределяем метод получения погоды для XML
    Weather getWeather(std::string s) override;

    virtual ~XmlService() {}
};

#endif // XMLSERVICE_H