QT += core gui widgets

CONFIG +=c++11

TARGET = mayeMusic
TEMPLATE = app

#使用过时的api产生警告
DEFINES += QT_DEPRECATED_WARNINGS

FORMS += \
    homescreen.ui \
   # mainwidget.ui

HEADERS += \
    homescreen.h \
    mainwidget.h \
    setqss.h

SOURCES += \
    homescreen.cpp \
    main.cpp \
    mainwidget.cpp \
    setqss.cpp

RESOURCES += \
    res.qrc
