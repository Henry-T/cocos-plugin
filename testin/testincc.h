/****************************************************************************

Add testin ui automation support for cocos2d-x games



Copyright (c) 2014 Testin.cn

http://www.testin.cn

****************************************************************************/


#ifndef __TESTIN_CC_SUPPORT_H__
#define __TESTIN_CC_SUPPORT_H__

#include "cocos2d.h"

USING_NS_CC;

/**
 *  ����Testin�Խű�¼�Ƶ�֧�֣���Ҫ��ӵ������ʼ���ĵط�
 *  
*/
extern bool StartTestinObserver();

/**
 *  ��ʶ��Ϸ�������������ֲ�ͬ����Ϸ�������棬�Ա����Ϸ���й��������õ�ʶ��
 *  (Ŀǰֻ֧��C++)
 *  
 *  ������Ϸ��ÿ��CCScene��ʼ���ɹ��󣬵���CCNode::setTag�������Բ�ͬ��CCScene
 *  ���ò�ͬ��tagId���������Բ�����ñ�����
 *  
*/
extern void RegisterTestinCCScene(void* scene, const char* name);


#endif //__TESTIN_CC_SUPPORT_H__

