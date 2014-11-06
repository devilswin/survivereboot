TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11
LIBS += -L"/SFML/lib"
CONFIG(release, debug|release): LIBS += -lsfml-graphics -lsfml-system -lsfml-network -lsfml-window
CONFIG(debug, debug|release): LIBS +=  -lsfml-graphics -lsfml-system -lsfml-network -lsfml-window

INCLUDEPATH += "/SFML/include"
DEPENDPATH += "/SFML/include"
SOURCES += main.cpp \
    entity.cpp
    

HEADERS += \
    entity.hpp


