/*********************************************************************************/
/*!
@file           Tempo.cpp

@brief          Tries to automatically calulate the tempo.

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
/*********************************************************************************/


#include "Tempo.h"

int CTempo::m_cfg_followTempoAmount = 10;
int CTempo::m_cfg_maxJumpAhead = 25;


void CTempo::enableFollowTempo(bool enable)
{
ppTrace("enableFollowTempo %d", enable);
    if (enable)
    {
        m_cfg_maxJumpAhead = 1;
        m_cfg_followTempoAmount = 1;
    }
    else
    {
        m_cfg_maxJumpAhead = 0;
        m_cfg_followTempoAmount = 0;
    }
}


