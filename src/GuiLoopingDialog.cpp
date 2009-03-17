/*!
    @file           GuiLoopingDialog.cpp

    @brief          xxx.

    @author         L. J. Barman

    Copyright (c)   2008, L. J. Barman, all rights reserved

    This file is part of the PianoBooster application

    PianoBooster is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    PianoBooster is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with PianoBooster.  If not, see <http://www.gnu.org/licenses/>.

*/

#include <QtGui>

#include "GuiLoopingDialog.h"
#include "GlView.h"

GuiLoopingDialog::GuiLoopingDialog(QWidget *parent)
    : QDialog(parent)
{
    setupUi(this);
    m_song = 0;
    m_settings = 0;
    m_glView = 0;
    setWindowTitle("Continious Looping");
    setModal(false);
}


void GuiLoopingDialog::init(CSong* song, QSettings* settings, CGLView * glView)
{
    m_song = song;
    m_settings = settings;
    m_glView = glView;
}

void GuiLoopingDialog::accept()
{



    this->QDialog::accept();
}
