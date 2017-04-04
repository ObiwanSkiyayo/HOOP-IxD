#pragma once

#include "ofMain.h"
#include "ofParticle.h"
#include "CurvingParticle.h"

#define MAX_PARTICLES 20

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		
		CurvingParticle part1[MAX_PARTICLES];
		ofParticle part2[MAX_PARTICLES];
		void keyPressed(int key);

};
