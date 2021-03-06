#include "MainWindow.hpp"
#include <QApplication>
#include <QTranslator>
#include <QLocale>
#include <QDir>

#include "Persistence/ConfigDbInterface.hpp"
#include "Config.hpp"

#include <QStandardPaths>

//ACTUALIZAR!
#define VERSION_MAJOR 1
#define VERSION_MINOR 1

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    //Se crea, si no existe ya, la carpeta donde se generan
    //los archivos de configuración.
    QDir dir(Config::getApplicationDataPath());
    if (!dir.exists()) {
        dir.mkpath(".");
    }

    ConfigDbInterface dbConfigInterface;
    Config config;

    dbConfigInterface.connect();
    dbConfigInterface.loadConfig(&config);
    dbConfigInterface.close();

    config.setVersion(VERSION_MAJOR,VERSION_MINOR); //Versión 1.0. SE ESTABLECE DESDE EL CÓDIGO.*/

    QTranslator translator;

    int lang = config.getLanguage();
    if (lang!=QLocale::Spanish){
        translator.load("english");
        app.installTranslator(&translator);
    }

    MainWindow w(&config);
    w.show();

    int ret = app.exec();
    
    dbConfigInterface.connect();
    dbConfigInterface.saveConfig(config);
    dbConfigInterface.close();

    return ret;

}
