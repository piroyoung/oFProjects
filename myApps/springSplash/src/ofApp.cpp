#include "ofApp.h"


void ofApp::myDrawCircle(CircleMaterial c){
    
    ofSetColor(c.color.r, c.color.g, c.color.b, 128);
    ofDrawCircle(c.x, c.y, c.r);
}
//
//void ofApp::myMoveCircleToCenter(CircleMaterial c){
//    float dx = ofGetWidth()/2 - circle.x;
//    float dy = ofGetHeight()/2 - circle.y;
//    float dz = sqrt(dx*dx + dy*dy);
//    circle.move(dx/dz, dy/dz);
//}



//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofEnableAlphaBlending();
    
    for(int i=0; i<NUM_CIRCLE; i++){
        circle[i] = CircleMaterial(ofRandomWidth(), ofRandomHeight(), ofRandomHeight()/8);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    
    for(int i=0; i<NUM_CIRCLE; i++){
        if(circle[i].r > 0){
            circle[i].shrink();
//            myMoveCircleToCenter(circle[i]);
            float dx = ofGetWidth()/2 - circle[i].x;
            float dy = ofGetHeight()/2 - circle[i].y;
            float dz = sqrt(dx*dx + dy*dy);
            circle[i].move(dx/(ofGetWidth()/2), dy/(ofGetHeight()/2));
        
        } else {
            circle[i].x = ofRandomWidth();
            circle[i].y = ofRandomHeight();
            circle[i].setR(ofRandomHeight()/8);
            circle[i].color = Color();
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i=0; i<NUM_CIRCLE; i++){
        myDrawCircle(circle[i]);
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
