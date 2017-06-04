#include<Myship.h>
#include<SimpleMoveController.h>
USING_NS_CC;
bool Myship::init()
{
	
	return true;
}


void Myship::bindSprite(CCSprite *sprite)
{
	m_sprite = sprite;
	this->addChild(m_sprite);
}

void Myship::setController(Controller *controller)
{
	this->m_controller = controller;
	m_controller->setControllerListener(this);
}

void Myship::setTagPosition(int x, int y)
{
	setPosition(ccp(x, y));
}

CCPoint Myship::getTagPosition()
{
	return getPosition();
}
