/*
 * Copyright (c) 2017-2018 Nitrokey UG
 *
 * This file is part of Nitrokey App.
 *
 * Nitrokey App is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * Nitrokey App is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Nitrokey App. If not, see <http://www.gnu.org/licenses/>.
 *
 * SPDX-License-Identifier: GPL-3.0
 */

#include "nitrokey-applet.h"
#include <QMessageBox>
#include <QGridLayout>
#include <QApplication>
#include "ManageWindow.h"

void ManageWindow::bringToFocus(QWidget *w) {

//    for ( QWindow* appWindow : qApp->allWindows() )
//    {
//      appWindow->show(); //bring window to top on OSX
//      appWindow->raise(); //bring window from minimized state on OSX

//      appWindow->requestActivate(); //bring window to front/unminimize on windows
//    }

  w->setWindowState( (w->windowState() & ~Qt::WindowState::WindowMinimized) | Qt::WindowActive);
  w->show();
  w->raise();
  w->activateWindow();
  w->raise();
}

#include <QDesktopWidget>

void ManageWindow::moveToCenter(QWidget */*widget*/) {
//  widget->adjustSize();
//  widget->move(QApplication::desktop()->screen()->rect().center() - widget->rect().center());
}
