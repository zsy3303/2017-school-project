#pragma once

#include "cocos2d.h"
#include <Controller.h>
#include <map>
USING_NS_CC;

class SimpleMoveController :public Controller
{
public:
	CREATE_FUNC(SimpleMoveController);
	virtual bool init();
	virtual void update(float dt);


	void Where_are_ship(CCPoint *Myship_Position);
	void setiSpeed(int iSpeed);
	
private:
	int m_iSpeed;
	std::map<cocos2d::EventKeyboard::KeyCode, bool> keys;
	CCPoint * Ship_Position;
};
