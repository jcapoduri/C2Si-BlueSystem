#include "configmanager.h"

configManager* configManager::_instance = 0;

configManager::configManager(QObject *parent) : QObject(parent)
{
    this->sets = new QSettings("config.ini", QSettings::IniFormat);
}

configManager *configManager::instance()
{
    if (_instance == 0) _instance = new configManager();
    return _instance;
}

QVariant configManager::getValue(QString key)
{
    QSettings* config = instance()->sets;
    return config->value(key);
}

QVariant configManager::getValue(QString section, QString key)
{
    QSettings* config = instance()->sets;
    config->beginGroup(section);
    QVariant returnValue = config->value(key);
    config->endGroup();
    return returnValue;
}

void configManager::setValue(QString key, QVariant val)
{
    QSettings* config = instance()->sets;
    return config->setValue(key, val);
}

void configManager::setValue(QString section, QString key, QVariant val)
{
    QSettings* config = instance()->sets;
    config->beginGroup(section);
    config->setValue(key, val);
    config->endGroup();
}

configManager::~configManager()
{
    sets->deleteLater();
}

