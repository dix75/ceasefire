/**
 * \file      C:/projects/ceasefire/projects/ceasefire/ceasefire.h 
 * \brief     The Ceasefire class provides 
 * \author    S.Panin <dix75@mail.ru>
 * \copyright S.Panin, 2006 - 2019 
 * \version   v.1.0
 * \created   April     (the) 03(th), 2019, 23:37 MSK
 * \updated   April     (the) 03(th), 2019, 23:37 MSK
 * \TODO      
**/
#pragma once
#include <map>
#include <QString>
#include "ceasefire_global.h"

/**
 *   \code
 *      #include "ceasefire.h"
 *
 *      Db db;
 *  \endcode
 */
class CEASEFIRE_SHARED_EXPORT Db {
 public:
     using class_name = Db;

 private:
    std::map<std::string, QString> m_map;

 public:
    bool saveToFile(QString const& file) const {
        return true;
    }
    bool readFromFile(QString const& file) {
    }
    void add(std::string const& key, QString const& val) {
        m_map.insert(std::pair{key, val});
    }
    QString tr(std::string const& key, QString const& def) const {
        auto it = m_map.find(key);
        return it == m_map.end()
           ? def
           : it->second;
    }
};
