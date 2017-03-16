#pragma once

#include "ofMain.h"

class ofParticle
{
public:

	ofPoint position;
	float radius;
	ofVec2f speed;



	ofColor centerColour;
	ofColor insideColour;
	ofColor outsideColour;
	
	ofParticle();

	void move();
	void draw();
};

