/**
 ******************************************************************************
 *
 * @file       qtcassert.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 *             Parts by Nokia Corporation (qt-info@nokia.com) Copyright (C) 2009.
 * @brief      
 * @see        The GNU Public License (GPL) Version 3
 * @defgroup   
 * @{
 * 
 *****************************************************************************/
/* 
 * This program is free software; you can redistribute it and/or modify 
 * it under the terms of the GNU General Public License as published by 
 * the Free Software Foundation; either version 3 of the License, or 
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY 
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License 
 * for more details.
 * 
 * You should have received a copy of the GNU General Public License along 
 * with this program; if not, see <http://www.gnu.org/licenses/>
 */

#ifndef QTC_ASSERT_H
#define QTC_ASSERT_H

#include <QtCore/QDebug>

#define QTC_ASSERT_STRINGIFY_INTERNAL(x) #x
#define QTC_ASSERT_STRINGIFY(x) QTC_ASSERT_STRINGIFY_INTERNAL(x)

// we do not use the  'do {...} while (0)' idiom here to be able to use
// 'break' and 'continue' as 'actions'.

#define QTC_ASSERT(cond, action) \
    if(cond){}else{qDebug()<<"ASSERTION " #cond " FAILED AT " __FILE__ ":" QTC_ASSERT_STRINGIFY(__LINE__);action;}

#endif // QTC_ASSERT_H

