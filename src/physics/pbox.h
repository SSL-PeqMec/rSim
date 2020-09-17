/*
grSim - RoboCup Small Size Soccer Robots Simulator
Copyright (C) 2011, Parsian Robotic Center (eew.aut.ac.ir/~parsian/grsim)

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef PBOX_H
#define PBOX_H

#include "pobject.h"

class PBox : public PObject
{
private:
    dReal m_w, m_h, m_l;
    int m_texid;
    bool m_robot;

public:
    PBox(dReal x, dReal y, dReal z, dReal w, dReal h, dReal l, dReal mass, int tex_id = -1, bool robot = false);
    ~PBox() override;
    void setMass(dReal mass) override;
    void init() override;
};

#endif // PBOX_H
