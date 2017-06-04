#include<Myscene.h>
#include<Myship.h>
#include<SimpleMoveController.h>
#include<EnemyMoveController.h>
#include"cocos2d.h"
USING_NS_CC;



CCScene *Myscene::scene()
{
	CCScene*  mScene = CCScene::create();
	Myscene * mLayer = Myscene::create();
	mScene->addChild(mLayer);
	return mScene;
}

bool Myscene::init()
{
	CCScene *map = CCScene::create();
	this->addChild(map);
	pMyship_Position = &Myship_Position;

	addShip(map);
	addEnemyShip(map);
	return true;
}

void Myscene::addShip(CCScene *map)
{
	CCSize visibleSize = CCDirector::sharedDirector()->getVisibleSize();

	CCSprite *shipSprite = CCSprite::create("plane.png");

	Myship * mShip = Myship::create();
	mShip->bindSprite(shipSprite);

	mShip->setPosition(ccp(Myship_Position.x+100, Myship_Position.y + 100));
	
	SimpleMoveController *simpleMoveControll = SimpleMoveController::create();
	simpleMoveControll->setiSpeed(2);
	simpleMoveControll->Where_are_ship(pMyship_Position);
	this->addChild(simpleMoveControll);
	mShip->setController(simpleMoveControll);
	Myship_Position = mShip->getTagPosition();
	mShip->getTagPosition();

	map->addChild(mShip);
}

void Myscene::addEnemyShip(CCScene *map)
{
	CCSize visibleSize = CCDirector::sharedDirector()->getVisibleSize();

	CCSprite *shipSprite = CCSprite::create("plane.png");

	Myship * enemy_Ship = Myship::create();
	enemy_Ship->bindSprite(shipSprite);

	enemy_Ship->setPosition(ccp(Myship_Position.x+100, Myship_Position.y + 100));

	EnemyMoveController *EnemyMoveControll = EnemyMoveController::create();
	EnemyMoveControll->setiSpeed(1);
	EnemyMoveControll->Where_are_ship(pMyship_Position);

	this->addChild(EnemyMoveControll);
	enemy_Ship->setController(EnemyMoveControll);

	map->addChild(enemy_Ship);
}