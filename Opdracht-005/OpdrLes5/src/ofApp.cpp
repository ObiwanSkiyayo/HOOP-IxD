#include "ofApp.h"
#include "ofParticle.h"

//--------------------------------------------------------------
void ofApp::setup(){

	emitter1 = Emitter();
	emitter1.setOrigin(100, 100);
	emitter1.setCurvingParticleRatio(0.8);

	emitter2 = Emitter();
	emitter2.setOrigin(ofGetWidth() - 100, ofGetHeight() - 100);
	emitter2.setCurvingParticleRatio(0.8);

}

//--------------------------------------------------------------
void ofApp::update(){

	for (int i = 0; i < particles.size(); ++i) {
		particles[i]->move();
	}

	ofParticle* freshParticle = emitter1.emit();
	particles.push_back(freshParticle);

	ofParticle* freshParticle2 = emitter2.emit();
	particles.push_back(freshParticle2);

}

//--------------------------------------------------------------
void ofApp::draw(){
	//for (int i = 0; i < MAX_PARTICLES; i++) {
	//	part1[i].draw();
	//}

	//for (int k = 0; k < MAX_PARTICLES; k++) {
	//	part2[k].draw();
	//}

	for (int i = 0; i < particles.size(); ++i) {
		particles[i]->draw();
	}
}


void ofApp::keyPressed(int key) {
	//for (int i = 0; i < MAX_PARTICLES; i++) {
	//	part1[i] = CurvingParticle();
	//	part1[i].init();
	//}

	//for (int i = 0; i < MAX_PARTICLES; i++) {
	//	part2[i] = ofParticle();
	//	part2[i].init();
	//}
}

