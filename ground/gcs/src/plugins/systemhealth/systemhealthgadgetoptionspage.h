/**
 ******************************************************************************
 *
 * @file       systemhealthgadgetoptionspage.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup SystemHealthPlugin System Health Plugin
 * @{
 * @brief The System Health gadget plugin
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

#ifndef SYSTEMHEALTHGADGETOPTIONSPAGE_H
#define SYSTEMHEALTHGADGETOPTIONSPAGE_H

#include "coreplugin/dialogs/ioptionspage.h"
#include "QString"
#include <QStringList>
#include <QDebug>

namespace Core {
class IUAVGadgetConfiguration;
}

class SystemHealthGadgetConfiguration;

namespace Ui {
class SystemHealthGadgetOptionsPage;
}

using namespace Core;

class SystemHealthGadgetOptionsPage : public IOptionsPage
{
    Q_OBJECT
public:
    explicit SystemHealthGadgetOptionsPage(SystemHealthGadgetConfiguration *config,
                                           QObject *parent = nullptr);

    QWidget *createPage(QWidget *parent);
    void apply();
    void finish();

private:
    Ui::SystemHealthGadgetOptionsPage *options_page;
    SystemHealthGadgetConfiguration *m_config;

private slots:
};

#endif // SYSTEMHEALTHGADGETOPTIONSPAGE_H
