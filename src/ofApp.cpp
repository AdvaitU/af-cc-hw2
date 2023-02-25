#include "ofApp.h"
#include "ofMath.h"

//--------------------------------------------------------------
void ofApp::setup(){

	animal.set(5.0, 5.0, 4.0);  // Setting initial values

	hungryCat.load("hungryCat-01.jpg");   // Loading up images
	happyCat.load("happyCat-01.jpg");
	pettedCat.load("pettedCat-01.jpg");
	sadCat.load("sadCat-01.jpg");

	font.load("Cascadia.ttf", 21);  // Loading font file
	instructions.load("Cascadia.ttf", 16);

	startTime = ofGetElapsedTimeMillis();

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	
	float imgWidth = happyCat.getWidth() / 2;     // Floats for image width and height for drawing
	float imgHeight = happyCat.getHeight() / 2;

	instructions.drawString("Press 'Q' to feed the cat, 'E' to give it water\n    and 'T' to pet it. Don't kill your pet!", 700, 1100);
	
	sadCat.draw(500, 80, imgWidth, imgHeight);   // TESTS FOR DIMENSIONS FOR ALL CAT IMAGES 
	//font.drawString("Hi!!", 500, 950);

	currTime = ofGetElapsedTimeMillis() - startTime;
	if (currTime >= 1500) {   
		animal.tickAnimal();
		startTime = ofGetElapsedTimeMillis();
	}

	string outText = "Hunger level: " + ofToString(animal.hunger) + ", Thirst Level: " + ofToString(animal.thirst) + ", Happiness Level: " + ofToString(animal.happiness);
	font.drawString(outText, 500, 950);
	instructions.drawString("Keep Hunger and Thirst levels LOW and Happiness level HIGH", 700, 1000);
	



}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

	switch (key) {
	case 'q':
		animal.feedAnimal();
		animal.clipValues();
		break;
	case 'e':
		animal.quenchAnimal();
		animal.clipValues();
		break;
	case 't':
		animal.petAnimal();
		animal.clipValues();
		break;
	default:
		break;
	}
		

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
