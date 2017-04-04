#include "ofApp.h"
#include "ofParticle.h"

//--------------------------------------------------------------
void ofApp::setup(){

	// Setup fot the Emitters, position and curvingratio can be adjusted.
	emitter1 = Emitter();
	emitter1.setOrigin(400, 394);
	emitter1.setCurvingParticleRatio(0.8);
	// Emitter two
	emitter2 = Emitter();
	emitter2.setOrigin(700, 394);
	emitter2.setCurvingParticleRatio(0.8);

}

//--------------------------------------------------------------
void ofApp::update(){

	// Pointer to particles move part.
	for (int i = 0; i < particles.size(); ++i) {
		particles[i]->move();
	}

	// IF the particle.size is smaller that the MAX PARTICLES it shouldnt create more.
	// MAX PARTICLES is defined in the header and can be changed at all times.
	if (particles.size() < MAX_PARTICLES) {
		ofParticle* freshParticle = emitter1.emit();
		particles.push_back(freshParticle);

		ofParticle* freshParticle2 = emitter2.emit();
		particles.push_back(freshParticle2);
	}

	

	// Lifetime, Here we want the particles to die after X amout of time.
	// Change the float lifetime for extend or shorten life.
	currentTime = ofGetElapsedTimef();
	float lifetime = 1;

	for (int k = 0; k < particles.size(); ++k) {
		if (currentTime >= lifetime) {
			ofLog() << "One Particle Died" << endl;
			particles.erase(particles.begin() + k);
			currentTime = 0;
		}
	}



}

//--------------------------------------------------------------
void ofApp::draw(){

	// Draw the particles with a simply For loop
	for (int i = 0; i < particles.size(); ++i) {
		particles[i]->draw();
	}
}


void ofApp::keyPressed(int key) {

}

