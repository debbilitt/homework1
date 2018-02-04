#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	mCat.load("cat.jpg");

	centX = mCat.getWidth() / 2;
	centY = mCat.getHeight() / 2;

	for (int i = 0; i < 50; i++) {
		offset[i] = ofRandom(-30.0f, 30.0f);
		size[i] = ofRandom(100.0f, 500.0f);
		sourceX[i] = ofRandom(0.0f, (mCat.getWidth()/1.5));
		sourceY[i] = ofRandom(0.0f, (mCat.getHeight() / 1.5));
		dist[i] = ofDist(centX, centY, sourceX[i], sourceY[i]);
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
	

	for (int i = 0; i < 50; i++) {
		ofPushMatrix();
		ofRotateY(dist[i]);
		ofSetColor(255, 255, 255, (100+offset[i]));
		mCat.drawSubsection(sourceX[i] + ofGetMouseY(), sourceY[i] + ofGetMouseY(), size[i], size[i], sourceX[i] + ofGetMouseX(), sourceY[i] + ofGetMouseY());
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
