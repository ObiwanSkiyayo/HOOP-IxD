#include "Emitter.h"
#include "CurvingParticle.h"

ofParticle* Emitter::emit() {
	if (ofRandom(1) > curvingParticleRatio) {
		ofParticle* newParticle = new ofParticle();
		newParticle->init(originX, originY);
		return newParticle;
	}
	else {
		CurvingParticle* newParticle = new CurvingParticle();
		newParticle->init(originX, originY);
		return newParticle;
	}
}



void Emitter::setCurvingParticleRatio(float ratio) {
    curvingParticleRatio = ratio;
}

void Emitter::setOrigin(int x, int y) {
	originX = x;
	originY = y;

}

void Emitter::setColours(ofColor innerColour, ofColor outerColor) {
    inner = innerColour;
    outer = outerColor;
}
