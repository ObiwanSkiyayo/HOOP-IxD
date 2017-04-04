#include "ofParticle.h"
#include "CurvingParticle.h"

ofParticle::ofParticle() {
}

void ofParticle::init(int x, int y) {

	radius = ofRandom(10, 20);

	location.x = x;
	location.y = y;

	speed = ofVec2f(ofRandom(-2, 2), 
					ofRandom(-2, 2));

	centerColour = ofColor::white;

	innerColor = ofColor(ofRandom(0, 255),
		ofRandom(0, 255),
		ofRandom(0, 255));

	outerColor = ofColor(ofRandom(0, 255),
		ofRandom(0, 255),
		ofRandom(0, 255));
}


void ofParticle::move() {

	location += speed;

}

void ofParticle::draw() {

	//ofBackgroundGradient(0xFFFFFF, 0xEFEFF0, OF_GRADIENT_LINEAR);

	ofSetColor(outerColor);
	ofDrawCircle(location, radius * 3);;

	ofSetColor(innerColor);
	ofDrawCircle(location, radius * 2);

	ofSetColor(centerColour);
	ofDrawCircle(location, radius);

}
