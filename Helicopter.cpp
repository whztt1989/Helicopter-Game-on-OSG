//
//  Helicopter.cpp
//  testOsg
//
//  Created by Fares Alotaibi on 2014-03-02.
//  Copyright (c) 2014 Fares Alotaibi. All rights reserved.
//

#include "Helicopter.h"
#include "Model.h"
// constructor of the helicopter from the model class

Helicopter::Helicopter():Model(){
    
    this->addChild(osgDB::readNodeFile("3124/EC-135_Douane.ac"));
}