#include<EnemyMoveController.h>
#include<ControllerListener.h>

bool EnemyMoveController::init()
{
	this->m_iSpeed = 0;

	this->scheduleUpdate();
	return true;
}
void EnemyMoveController::Where_are_ship(CCPoint *Myship_Position)
{
	Ship_Position = Myship_Position;
}

void EnemyMoveController::update(float dt)
{
	if (m_controllerListener == NULL)
	{
		return;
	}
	
	CCPoint pos = m_controllerListener->getTagPosition();
	pos.x = Ship_Position->x + 100;
	pos.y = Ship_Position->y + 100;
	m_controllerListener->setTagPosition(pos.x, pos.y);
}

void EnemyMoveController::setiSpeed(int iSpeed)
{
	this->m_iSpeed = iSpeed;
}
