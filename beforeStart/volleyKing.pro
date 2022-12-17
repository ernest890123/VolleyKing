QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    gameview.cpp \
    instructionpopup.cpp \
    main.cpp \
    mainwindow.cpp \
    selection.cpp \
    volumeslider.cpp

HEADERS += \
    gameview.h \
    instructionpopup.h \
    mainwindow.h \
    selection.h \
    volumeslider.h

FORMS += \
    gameview.ui \
    instructionpopup.ui \
    mainwindow.ui \
    selection.ui \
    volumeslider.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource_img.qrc

DISTFILES += \
    ../img/background.jpg