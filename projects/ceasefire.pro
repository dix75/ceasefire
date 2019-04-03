#-------------------------------------------------
#
# Project created 2019-04-03T23:23:41
#
#-------------------------------------------------

TEMPLATE            = lib
TARGET              = cf
PRECOMPILED_HEADER  = cf_pch.h
DEFINES            += CEASEFIRE_LIBRARY

CF_PATH             = $$PWD/ceasefire/
CATCH_PATH          = $$PWD/catch2/
OUTPUT_PATH         = $$PWD/../../bin/qmake

CONFIG             += c++1z console precompile_header
QMAKE_CXXFLAGS     += -Wall
INCLUDEPATH        += .

DEFINES            += QT_DEPRECATED_WARNINGS \
                      QT_DISABLE_DEPRECATED_BEFORE=0x060000
QT                 -= gui
CONFIG             -= app_bundle

QMAKE_CXXFLAGS     += -DQT_NO_CAST_TO_ASCII        \
                      -DQT_NO_CAST_FROM_BYTEARRAY  \
                      -DQT_USE_QSTRINGBUILDER      \
                      -DD_SCL_SECURE_NO_WARNINGS
SOURCES +=

HEADERS += \
    cf_pch.h \
    $$CF_PATH\ceasefire_global.h \
    $$CF_PATH\ceasefire.h

