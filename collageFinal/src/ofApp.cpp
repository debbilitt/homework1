#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	mCat.load("cat.jpg");

	centX = mCat.getWidth() / 2;
	centY = mCat.getHeight() / 2;

	//instantiate random arrays
	for (int i = 0; i < 80; i++) {
		offset[i] = ofRandom(-30.0f, 30.0f);
		size[i] = ofRandom(100.0f, 500.0f);
		sourceX[i] = ofRandom(0.0f, (mCat.getWidth()/1.5));
		sourceY[i] = ofRandom(0.0f, (mCat.getHeight() / 1.5));
		dist[i] = ((sourceX[i]-centX) + (sourceY[i] - centY));
	}
}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {
	//set background
	ofBackground(ofColor::honeyDew);

	//draw cat picture
	mCat.draw(0, 0);
	
	//calculate distance between mouse and center of image
	int mouseDist = ((ofGetMouseX() - centX) + (ofGetMouseY() - centY));
	float time = ofGetElapsedTimef();
	//draw all subsections
	for (int i = 0; i < 80; i++) {
		ofPushMatrix();
		//rotate on x-axis based on time and offset
		ofRotateX(fmod(time, 50) + offset[i]);
		//rotate on y-axis based on mouse distance from center
		ofRotateY(mouseDist+dist[i]);
		ofSetColor(255, 255, 255, (100+offset[i]));
		mCat.drawSubsection(offset[i] + sourceX[i] + mouseDist, offset[i] + sourceY[i] + mouseDist, size[i], size[i], sourceX[i]+mouseDist, sourceY[i]+mouseDist);
		ofPopMatrix();
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
