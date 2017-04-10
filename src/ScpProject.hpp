/* 
 * ScpProject.hpp
 * Copyright (C) 2017 Pavlo Solntsev <pavlo.solntsev@gmail.com>
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
 * */

#ifndef _SCP_PROJECT_HPP
#define _SCP_PROJECT_HPP

#include <glibmm.h>

class ScpProject 
{
    public:
        ScpProject()=default;
        virtual ~ScpProject() = default;

        int get_id()const;
        const Glib::ustring &get_name()const;
        const Glib::ustring &get_description()const;

    protected:
        int m_id; /*!< unique key for SQL purpose. This key has a format 111xxxxxx */
        Glib::ustring m_name; /*!< Name of the project */
        Glib::ustring m_description; /*!< Description of the product */
        Gnome::Gda::Timestamp m_starttime; /*!< Time when project was created */  
        Gnome::Gda::Timestamp m_modtime;   /*!< Time when project was modified  */  

};



#endif

