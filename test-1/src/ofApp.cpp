#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
}


//--------------------------------------------------------------
void ofApp::update(){
}


//--------------------------------------------------------------
float t = 0;
float VIEW_WIDTH = 1024;
float VIEW_HEIGHT = 768;

float timeFactor = 0.1;
bool goingUp = true;

float numCircles = 10;
float baseSpacing = VIEW_WIDTH/numCircles;

void ofApp::draw(){
    if(t == 0) {
        goingUp = true;
    } else if(t == 500) {
        goingUp = false;
    }
    
    if(t <= 500) {
        if(goingUp) {
            t+=1;
        }else {
            t-=1;
        }
    }
    
    ofSetColor(255,130,((t/100)*100));
    ofFill();
    for(int i = 0; i < numCircles; i++) {
        float r,x,y;

        x = baseSpacing * i;
        
        if(i%2 == 0) {
            r = sin(t*timeFactor*((i+1)*0.05));
            x+=(r/2*50);
            ofDrawCircle(x,150,r*50);

        } else {
            r = cos(t*timeFactor*((i+1)*0.05));
            x+=(r/2*50);
            ofDrawCircle(x,350,r*50);
        }
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
