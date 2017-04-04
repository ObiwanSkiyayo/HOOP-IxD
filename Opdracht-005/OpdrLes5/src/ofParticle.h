#pragma once

#include "ofMain.h"

class ofParticle
{
protected:
	ofPoint location;
	int radius;
	ofVec2f speed;
	long lifetime;

	ofColor centerColour;
	ofColor innerColor;
	ofColor outerColor;

public:
	ofParticle(); // constructor

	void init(int x, int y);

	virtual void move();

	void draw();
};

