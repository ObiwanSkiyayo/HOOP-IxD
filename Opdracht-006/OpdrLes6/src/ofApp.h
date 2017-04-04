#pragma once

#include "ofMain.h"
#include "ofParticle.h"
#include "CurvingParticle.h"
#include "Emitter.h"

#define MAX_PARTICLES 40

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		Emitter emitter1;
		Emitter emitter2;

		vector<ofParticle*> particles;
		vector<CurvingParticle*> particlesCurving;
		
		void keyPressed(int key);

		float currentTime;
};
