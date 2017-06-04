#include "cocos2d.h"
#include<Controller.h>
#include<ControllerListener.h>
USING_NS_CC;

class Myship:public Sprite ,public ControllerListener
{
public:
	/*�󶨾������*/
	void bindSprite(CCSprite *sprite);

	/*���ÿ�����*/
	void setController(Controller* controller);

	/*ʵ��SimpleMoveListener�ӿڵķ���*/
	virtual void setTagPosition(int x, int y);
	virtual CCPoint getTagPosition();
	void updata(float dt);

	CREATE_FUNC(Myship);
	virtual bool init();
protected:
	CCSprite * m_sprite;
	Controller* m_controller;
};