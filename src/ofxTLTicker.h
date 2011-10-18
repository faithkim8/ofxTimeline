/*
 *  ofxTLTicker.h
 *  timelineExample
 *
 *  Created by Jim on 7/19/11.
 *  Copyright 2011 FlightPhase. All rights reserved.
 *
 */

#pragma once

#include "ofMain.h"
#include "ofxTLElement.h"

class ofxTLTicker : public ofxTLElement
{
  public:
	ofxTLTicker();
	~ofxTLTicker();
	
	virtual void setup();
	virtual void draw();
	
	virtual void setDuration(int frames);
	virtual void setDuration(float seconds);
	virtual void setFrameRate(int framerate);

	//set the draw rect for the whole keyframer interface
	virtual void setTotalDrawRect(ofRectangle drawRect);
	
	virtual void mousePressed(ofMouseEventArgs& args);
	virtual void mouseMoved(ofMouseEventArgs& args);
	virtual void mouseDragged(ofMouseEventArgs& args);
	virtual void mouseReleased(ofMouseEventArgs& args);

  protected:
	virtual void updateHover(ofMouseEventArgs& args);
	
	ofRectangle totalDrawRect;
	
	bool isFrameBased;
	int durationInFrames;
	float durationInSeconds;
	int framerate;
	
	float curHoverPoint;
	int curStartFrame;
	int curEndFrame;
	int curHoverFrame;
	int framesInView;
	bool hovering;

	float mousex;
};
