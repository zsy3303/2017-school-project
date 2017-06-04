#pragma once

#include "cocos2d.h"
#include <Controller.h>
USING_NS_CC;

class EnemyMoveController :public Controller
{
public:
	CREATE_FUNC(EnemyMoveController);
	virtual bool init();
	virtual void update(float dt);

	void setiSpeed(int iSpeed);
	void Where_are_ship(CCPoint *Myship_Position);
private:
	int m_iSpeed;
	CCPoint * Ship_Position;
};