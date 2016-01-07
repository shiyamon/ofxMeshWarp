#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
    
    bool checkGL4 = true;
    
    if(checkGL4) {
        
        ofGLWindowSettings s;
        s.width = 1024;
        s.height = 768;
        s.setGLVersion(4, 1);
        ofCreateWindow(s);
    }
    else {
        ofSetupOpenGL(1024,768,OF_WINDOW);
    }

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
