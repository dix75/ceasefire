/**
 * \file      C:/projects/ceasefire/projects/ceasefire/ceasefire_global.h 
 * \brief     The Ceasefire_global class provides 
 * \author    S.Panin <dix75@mail.ru>
 * \copyright S.Panin, 2006 - 2019 
 * \version   v.1.0
 * \created   April     (the) 03(th), 2019, 23:38 MSK
 * \updated   April     (the) 03(th), 2019, 23:38 MSK
 * \TODO      
**/
#pragma once
#include <QtCore/qglobal.h>

#if defined(CEASEFIRE_LIBRARY)
    #define CEASEFIRE_SHARED_EXPORT Q_DECL_EXPORT
#else
    #define CEASEFIRE_SHARED_EXPORT Q_DECL_IMPORT
#endif
