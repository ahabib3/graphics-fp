/**
 * @file   QuadraticBrush.cpp
 *
 * Implementation of a brush with a quadratic mask distribution.
 *
 * You should fill this file in while completing the Brush assignment.
 */

#include "QuadraticBrush.h"
#include "Canvas2D.h"

#include <math.h>

QuadraticBrush::QuadraticBrush(RGBA color, int radius)
    : Brush(color, radius)
{
    // @TODO: [BRUSH] You'll probably want to set up the mask right away.
    m_radius = radius;
    makeMask();
}

QuadraticBrush::~QuadraticBrush()
{
}

void QuadraticBrush::makeMask() {
    // @TODO: [BRUSH] Set up the mask for your Quadratic brush here...

    m_mask.clear();

    for (int row = -1*m_radius; row <= m_radius; row++){
        for(int col = -1*m_radius; col <= m_radius; col++){
            float dist = sqrt(pow(row, 2) + pow(col, 2));
            if(dist <= m_radius){
                float val = pow((float)dist/m_radius, 2) - (float)2*dist/m_radius + 1;
                m_mask.push_back(val);
            } else {
                m_mask.push_back(0);
            }
        }
    }
}




