#include "ofApp.h"
#include "ofParticle.h"

//--------------------------------------------------------------
void ofApp::setup(){
	for (int i = 0; i < MAX_PARTICLES; i++) {
		part1[i] = CurvingParticle();
		part1[i].init();
	}

	for (int k = 0; k < MAX_PARTICLES; k++) {
		part2[k] = ofParticle();
		part2[k].init();
	}
}

//--------------------------------------------------------------
void ofApp::update(){
	for (int i = 0; i < MAX_PARTICLES; i++) {
		part1[i].move();
	}

	for (int k = 0; k < MAX_PARTICLES; k++) {
		part2[k].move();
	}

}

//--------------------------------------------------------------
void ofApp::draw(){
	for (int i = 0; i < MAX_PARTICLES; i++) {
		part1[i].draw();
	}

	for (int k = 0; k < MAX_PARTICLES; k++) {
		part2[k].draw();
	}
}


void ofApp::keyPressed(int key) {
	for (int i = 0; i < MAX_PARTICLES; i++) {
		part1[i] = CurvingParticle();
		part1[i].init();
	}

	for (int i = 0; i < MAX_PARTICLES; i++) {
		part2[i] = ofParticle();
		part2[i].init();
	}
}

