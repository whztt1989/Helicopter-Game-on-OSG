//
//  Controller.h
//  testOSG
//
//  Created by Hamad Almarri on 3/3/2014.
//


#ifndef __testOSG__Controller__
#define __testOSG__Controller__

#include <vector>
#include <algorithm> // find
#include <osgGA/GUIEventHandler>
#include "JoyStick.h"
#include "Observable.h"

class Controller : public osgGA::GUIEventHandler, public Observable {
public:
	Controller() {
	}
	
	virtual bool handle(const osgGA::GUIEventAdapter& ea, osgGA::GUIActionAdapter& aa, osg::Object*, osg::NodeVisitor*);
	
	
	void AddObserver(Observer *observer);
	void RemoveObserver(Observer *observer);
	void NotifyAll(char event);
	
private:
	std::vector<Observer*> observers;
};

#endif /* defined(__testOSG__Controller__) */