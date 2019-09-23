#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include <list>
using namespace std;
class ofApp : public ofBaseApp {

public:
	ofxPanel gui;
	ofxButton buton;
	ofxLabel screenSize;
	ofParameter < bool > ofParExample;
	ofxIntField sectorinI;
	ofxIntSlider slider;
	ofPolyline line;
	ofPolyline lineInter;
	ofPoint puntos [100];
	ofPoint intermedios[100];
	int numPuntos;
	int numQ;
	int T = 8;
	float t =0;
	//position
	bool limpialinea = false;
	int x = 0;
	void setup();
	void update();
	void draw();

	void buttonPressed();
	void exit();
	void sliderChanged(int &slider);

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);

};