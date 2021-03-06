/***************************************************************************
**
** Copyright (c) 2012, Tarek Galal <tarek@wazapp.im>
**
** This file is part of Wazapp, an IM application for Meego Harmattan
** platform that allows communication with Whatsapp users.
**
** Wazapp is free software: you can redistribute it and/or modify it under
** the terms of the GNU General Public License as published by the
** Free Software Foundation, either version 2 of the License, or
** (at your option) any later version.
**
** Wazapp is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
** See the GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with Wazapp. If not, see http://www.gnu.org/licenses/.
**
****************************************************************************/
#include <QSystemDeviceInfo>
#include <QSystemNetworkInfo>
#include <QCryptographicHash>
#include <stdio.h>


QTM_USE_NAMESPACE


#ifndef WA_UTILITIES
#define WA_UTILITIES
using namespace std;

namespace Utilities{
    extern QSystemNetworkInfo ninfo;
    extern QSystemDeviceInfo dinfo;

    extern QString getImsi();
    extern QString getImei();
    extern QString getCountryCode();
    extern QString getMcc();
    extern QString getMnc();
    extern QString reverseString(QString str);

    extern QString getChatPassword();

}
#endif

