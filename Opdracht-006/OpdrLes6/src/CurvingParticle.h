#pragma once


#include "ofMain.h"
#include "ofParticle.h"

class CurvingParticle : public ofParticle {
    public:
        CurvingParticle();

        void move();

        ofVec2f curve;
};

