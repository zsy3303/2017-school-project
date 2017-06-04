#pragma once
#include "cocos2d.h"
#include <ControllerListener.h>
USING_NS_CC;


class Controller :public CCNode
{
public:
public:
	void setControllerListener(ControllerListener *controllerListen);
protected:
	ControllerListener *m_controllerListener;
	CCPoint Myship_Position;
};
