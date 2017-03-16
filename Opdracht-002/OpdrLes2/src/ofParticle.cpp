#include "ofParticle.h"

ofParticle::ofParticle() {
}

void ofParticle::init() {

	radius = ofRandom(10, 20);

	location = ofPoint(ofGetWidth() / 2,
						ofGetHeight() / 2);

	speed = ofVec2f(ofRandom(-6, 6), 
					ofRandom(-6, 6));

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
