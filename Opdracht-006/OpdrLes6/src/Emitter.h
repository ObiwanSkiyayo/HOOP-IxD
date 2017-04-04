#pragma once


#include "ofParticle.h"

class Emitter {
    public:
        void setOrigin(int x, int y);

        void setCurvingParticleRatio(float ratio);

        void setColours(ofColor innerColour, ofColor outerColor);

        ofParticle* emit();

    protected:
        int originX;
        int originY;
        float curvingParticleRatio;
        ofColor inner;
        ofColor outer;
};

