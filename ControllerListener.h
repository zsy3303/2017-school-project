#pragma once
#include"cocos2d.h"
USING_NS_CC;

class ControllerListener
{
public:
	virtual void setTagPosition(int x, int y)=0;
	virtual CCPoint getTagPosition()=0;
};