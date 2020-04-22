/*
 * StateTracker.h
 *
 *  Created on: Apr 19, 2020
 *      Author: halitosisman
 */

#ifndef GUI_STATETRACKER_H_
#define GUI_STATETRACKER_H_

#include <cstdarg>
#include <GUI/Window.h>

class State_Tracker : public Window
{
public:
    State_Tracker();
    virtual ~State_Tracker();
    virtual void update(int num, ...);
    virtual void init();
private:
    Cord2D locs[3];
};

#endif /* GUI_STATETRACKER_H_ */