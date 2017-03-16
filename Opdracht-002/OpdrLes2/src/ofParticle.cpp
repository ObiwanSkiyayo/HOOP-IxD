#include "ofParticle.h"

ofParticle::ofParticle() {

	radius = ofRandom(20, 70);

	position = ofPoint(ofGetWidth() / 2,
						ofGetHeight() / 2);

	speed = ofVec2f(ofRandom(-6, 6), 
					ofRandom(-6, 6));

	centerColour = ofColor::white;

	insideColour = ofColor(ofRandom(0, 255),
		ofRandom(0, 255),
		ofRandom(0, 255));

	outsideColour = ofColor(ofRandom(0, 255),
		ofRandom(0, 255),
		ofRandom(0, 255));
}


void ofParticle::move() {

	position += speed;

}

void ofParticle::draw() {

	//ofBackgroundGradient(0xFFFFFF, 0xEFEFF0, OF_GRADIENT_LINEAR);

	ofSetCircleResolution(150);
	ofSetColor(outsideColour);
	ofDrawCircle(position.x, position.y, radius * 2);

	ofSetColor(insideColour);
	ofDrawCircle(position.x, position.y, radius);

	ofSetColor(centerColour);
	ofDrawCircle(position.x, position.y, radius * 0.25);

}
