#include<SimpleMoveController.h>
#include<ControllerListener.h>

bool SimpleMoveController::init()
{
	this->m_iSpeed = 0;

	this->scheduleUpdate();
	return true;
}

void SimpleMoveController::Where_are_ship(CCPoint *Myship_Position)
{
	 Ship_Position = Myship_Position;
}

void SimpleMoveController::update(float dt)
{
	if (m_controllerListener == NULL)
	{
		return;
	}
	auto listener = EventListenerKeyboard::create();
	listener->onKeyPressed = [=](EventKeyboard::KeyCode code, Event *)
	{
		keys[code] = true;
	};
	listener->onKeyReleased = [=](EventKeyboard::KeyCode code, Event *)
	{
		keys[code] = false;
	};
	_eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);

	if (keys[EventKeyboard::KeyCode::KEY_RIGHT_ARROW])
	{
		CCPoint pos = m_controllerListener->getTagPosition();
		pos.x += m_iSpeed;
		m_controllerListener->setTagPosition(pos.x, pos.y);
	}
	if (keys[EventKeyboard::KeyCode::KEY_LEFT_ARROW])
	{
		CCPoint pos = m_controllerListener->getTagPosition();
		pos.x -= m_iSpeed;
		m_controllerListener->setTagPosition(pos.x, pos.y);
	}
	if (keys[EventKeyboard::KeyCode::KEY_UP_ARROW])
	{
		CCPoint pos = m_controllerListener->getTagPosition();
		pos.y += m_iSpeed;
		m_controllerListener->setTagPosition(pos.x, pos.y);
	}
	if (keys[EventKeyboard::KeyCode::KEY_DOWN_ARROW])
	{
		CCPoint pos = m_controllerListener->getTagPosition();
		pos.y -= m_iSpeed;
		m_controllerListener->setTagPosition(pos.x, pos.y);
	}
	*Ship_Position = m_controllerListener->getTagPosition();
}

void SimpleMoveController::setiSpeed(int iSpeed)
{
	this->m_iSpeed = iSpeed;
}
