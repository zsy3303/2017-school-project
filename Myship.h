#include "cocos2d.h"
#include<Controller.h>
#include<ControllerListener.h>
USING_NS_CC;

class Myship:public Sprite ,public ControllerListener
{
public:
	/*绑定精灵对象*/
	void bindSprite(CCSprite *sprite);

	/*设置控制器*/
	void setController(Controller* controller);

	/*实现SimpleMoveListener接口的方法*/
	virtual void setTagPosition(int x, int y);
	virtual CCPoint getTagPosition();
	void updata(float dt);

	CREATE_FUNC(Myship);
	virtual bool init();
protected:
	CCSprite * m_sprite;
	Controller* m_controller;
};