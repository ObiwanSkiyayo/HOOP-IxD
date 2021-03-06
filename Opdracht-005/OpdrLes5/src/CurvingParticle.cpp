#include "CurvingParticle.h"

CurvingParticle::CurvingParticle() {
    curve = ofVec2f(ofRandom(-5, 5),
                    ofRandom(-5, 5));
}

void CurvingParticle::move() {
	ofLog() << "move" << endl;
    location += speed;
    curve.rotate(2);
    location += curve;
}
