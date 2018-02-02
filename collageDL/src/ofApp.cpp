#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    mCat.load("cat.jpg");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //set background
    ofBackground(ofColor::honeyDew);
    

    //draw cat picture
    mCat.draw(0,0);
    

    
// tried to use a for loop to get the same effects... not working. mostly guessing and checking what happens!
    
//    for (int i=0; i<50; i++){
//     
//     mCat.drawSubsection(0, 0, i*50, i*50, mouseX, mouseY);
//
//
//    }
    

    
    ofSetColor(ofColor::whiteSmoke);
    
    ofPushMatrix();
    ofRotateY(15);
    mCat.drawSubsection(100, 150, 150, 200, mouseX - 25, mouseY - 25);

    mCat.drawSubsection(140, 215, 150, 200, mouseX, mouseY);

    mCat.drawSubsection(240, 230, 150, 200, mouseX +25, mouseY +25, 100, 100);

    mCat.drawSubsection(260, 175, 150, 50, mouseX + 5, mouseY + 5);
    ofPopMatrix();
    
    
    ofRotateZ(2);
    mCat.drawSubsection(400, 150, 150, 200, mouseX +50, mouseY +50);
    mCat.drawSubsection(440, 215, 150, 200, mouseX +25 , mouseY + 25);
    mCat.drawSubsection(220, 400, 150, 100, mouseX, mouseY);
    mCat.drawSubsection(340, 375, 150, 50, mouseX -50, mouseY -50);

    mCat.drawSubsection(500, 250, 150, 200, mouseX +50, mouseY +50);
    mCat.drawSubsection(550, 315, 150, 200, mouseX +25 , mouseY + 25);
    mCat.drawSubsection(520, 100, 150, 100, mouseX, mouseY);
    mCat.drawSubsection(530, 225, 150, 50, mouseX + 25, mouseY + 25, 50, 50);



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
