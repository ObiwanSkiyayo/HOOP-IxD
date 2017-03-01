#pragma once

#include "ofMain.h"

class Particle
{

	private:
		int radius;

		ofPoint location;
		ofVec2f speed;
		long lifetime;
		
		ofColor innerColor;
		ofColor outerColor;


	public:
		Particle(); // constructor

		void init();
		void move();
		void draw();



};

