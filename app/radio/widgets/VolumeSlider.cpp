/*
   Copyright 2005-2009 Last.fm Ltd.

   This file is part of the Last.fm Desktop Application Suite.

   lastfm-desktop is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   lastfm-desktop is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with lastfm-desktop.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <QTimer>
#include <QDebug>

#include "VolumeSlider.h"

VolumeSlider::VolumeSlider(QWidget* parent)
    :Phonon::VolumeSlider(parent)
{
    setMouseTracking(true);
}

void
VolumeSlider::enterEvent(QEvent* event)
{
    emit enter(event);
}

void
VolumeSlider::leaveEvent(QEvent* event)
{
    emit leave(event);
}
