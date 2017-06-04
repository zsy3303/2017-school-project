#pragma once
#include "cocos2d.h"
USING_NS_CC;

class Myscene :public CCLayer
{
public:
	CREATE_FUNC(Myscene);
	virtual bool init();
	static CCScene *scene();
	void Myscene::addShip(CCScene *map);
	void Myscene::addEnemyShip(CCScene *map);
	CCPoint Myship_Position;
	CCPoint *pMyship_Position;
};