#pragma once
#include <fstream> 
#include <string>
#include <iostream>
#include "ofMain.h"
#include "ofxCsv.h"
#include "ofxBullet.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
        void setHeight(int height);
		
        ofxCsv csv;
        string search;
    
        
        ofxBulletWorldRigid world;
        ofxBulletBox ground;
    
        ofxBulletCylinder *barSpoken;
        ofxBulletCylinder *barFiction;
        ofxBulletCylinder *barMag;
        ofxBulletCylinder *barNews;
        ofxBulletCylinder *barAcad;
        ofxBulletCylinder *bspokAbc;
        ofxBulletCylinder *bspokNbc;
        ofxBulletCylinder *bspokCbs;
        ofxBulletCylinder *bspokCnn;
        ofxBulletCylinder *bspokFox;
        ofxBulletCylinder *bspokMsnbc;
        ofxBulletCylinder *bspokPbs;
        ofxBulletCylinder *bspokNpr;
        ofxBulletCylinder *bspokIndep;
    ofxBulletCylinder *bficBook;
    ofxBulletCylinder *bficJrnl;
    ofxBulletCylinder *bficSciFan;
    ofxBulletCylinder *bficJuv;
    ofxBulletCylinder *bficMov;
    ofxBulletCylinder *bmagNewOp;
    ofxBulletCylinder *bmagFin;
    ofxBulletCylinder *bmagSci;
    ofxBulletCylinder *bmagArts;
    ofxBulletCylinder *bmagRel;
    ofxBulletCylinder *bmagSports;
    ofxBulletCylinder *bmagEnt;
    ofxBulletCylinder *bmagHome;
    ofxBulletCylinder *bmagAfAm;
    ofxBulletCylinder *bmagChild;
    ofxBulletCylinder *bmagWomMen;
     ofxBulletCylinder *bnewsMisc;
    ofxBulletCylinder *bnewsIntl;
    ofxBulletCylinder *bnewsNatl;
    ofxBulletCylinder *bnewsLoc;
    ofxBulletCylinder *bnewsMoney;
    ofxBulletCylinder *bnewsLife;
    ofxBulletCylinder *bnewsSports;
    ofxBulletCylinder *bnewsEdit;
    ofxBulletCylinder *bacadHist;
    ofxBulletCylinder *bacadEdu;
    ofxBulletCylinder *bacadGeog;
    ofxBulletCylinder *bacadLaw;
    ofxBulletCylinder *bacadHuman;
    ofxBulletCylinder *bacadPhilRel;
    ofxBulletCylinder *bacadSciTech;
    ofxBulletCylinder *bacadMed;
    ofxBulletCylinder *bacadMisc;
    
        ofEasyCam camera;
    
        float cHeightSpoken;
        float cHeightFiction;
        float cHeightMag;
        float cHeightNews;
        float cHeightAcad;
        float cHeightSpokAbc;
        float spokAbcHeight;
    float spokNbcHeight;
    float spokCbsHeight;
    float spokCnnHeight;
    float spokFoxHeight;
    float spokMsnbcHeight;
    float spokPbsHeight;
    float spokNprHeight;
    float spokIndepHeight;
    float ficBookHeight;
    float ficJrnlHeight;
    float ficSciFanHeight;
    float ficJuvHeight;
    float ficMovHeight;
    float magNewOpHeight;
    float magFinHeight;
    float magSciHeight;
    float magArtsHeight;
    float magRelHeight;
    float magSportsHeight;
    float magEntHeight;
    float magHomeHeight;
    float magAfAmHeight;
    float magChildHeight;
    float magWomMenHeight;
    float newsMiscHeight;
    float newsIntlHeight;
    float newsNatlHeight;
    float newsLocHeight;
    float newsMoneyHeight;
    float newsLifeHeight;
    float newsSportsHeight;
    float newsEditHeight;
    float acadHistHeight;
    float acadEduHeight;
    float acadGeogHeight;
    float acadLawHeight;
    float acadHumanHeight;
    float acadPhilRelHeight;
    float acadSciTechHeight;
    float acadMedHeight;
    float acadMiscHeight;


};

