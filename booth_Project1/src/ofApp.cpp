#include "ofApp.h"
using namespace std;
//--------------------------------------------------------------
void ofApp::setup(){
    csv.load("corpus.csv");
    
    //input the search
    cout << "Search: ";
    cin >> search;
    
    //read all of the data
    for (int i = 1; i < csv.getNumRows(); i++){
        //initial data
        float rank = csv[i].getInt(0);
        string lemma = csv[i].getString(1);
        string pos = csv[i].getString(2);
        float dispersion = csv[i].getFloat(3);
        float freq = csv[i].getInt(4);
        
        //main categories
        float spoken = csv[i].getInt(5);
        float fiction = csv[i].getInt(6);
        float mag = csv[i].getInt(7);
        float newspaper = csv[i].getInt(8);
        float academic = csv[i].getInt(9);
        
        //subcategories magazines
        float magNewOp = csv[i].getInt(10);
        float magFin = csv[i].getInt(11);
        float magSci = csv[i].getInt(12);
        float magArts= csv[i].getInt(13);
        float magRel = csv[i].getInt(14);
        float magSports = csv[i].getInt(15);
        float magEnt = csv[i].getInt(16);
        float magHome = csv[i].getInt(17);
        float magAfAm = csv[i].getInt(18);
        float magChild = csv[i].getInt(19);
        float magWomMen = csv[i].getInt(20);
        
        
        //subcategories newspapers
        float newsMisc = csv[i].getInt(21);
        float newsIntl = csv[i].getInt(22);
        float newsNatl = csv[i].getInt(23);
        float newsLoc = csv[i].getInt(24);
        float newsMoney = csv[i].getInt(25);
        float newsLife = csv[i].getInt(26);
        float newsSports = csv[i].getInt(27);
        float newsEdit = csv[i].getInt(28);
        
        //subcategories academic
        float acadHist = csv[i].getInt(29);
        float acadEdu = csv[i].getInt(30);
        float acadGeog = csv[i].getInt(31);
        float acadLaw = csv[i].getInt(32);
        float acadHuman = csv[i].getInt(33);
        float acadPhilRel = csv[i].getInt(34);
        float acadSciTech = csv[i].getInt(35);
        float acadMed = csv[i].getInt(36);
        float acadMisc = csv[i].getInt(37);
        
        //subcategories spoken
        float spokAbc = csv[i].getInt(38);
        float spokNbc = csv[i].getInt(39);
        float spokCbs = csv[i].getInt(40);
        float spokCnn = csv[i].getInt(41);
        float spokFox = csv[i].getInt(42);
        float spokMsnbc = csv[i].getInt(43);
        float spokPbs = csv[i].getInt(44);
        float spokNpr = csv[i].getInt(45);
        float spokIndep = csv[i].getInt(46);
        
        //subcategories fiction
        float ficBook = csv[i].getInt(47);
        float ficJrnl = csv[i].getInt(48);
        float ficSciFan = csv[i].getInt(49);
        float ficJuv = csv[i].getInt(50);
        float ficMov = csv[i].getInt(51);
        
        if (search == csv[i].getString(1)){
            cout << csv[i] << endl;
            
            //create a divisor so you can get the percentage
            float div = csv[i].getInt(5) + csv[i].getInt(6) + csv[i].getInt(7) + csv[i].getInt(8) + csv[i].getInt(9);
            
            
            cHeightSpoken = (csv[i].getInt(5)/div)*20; //calculate the height for the word where it has been spoken
            cHeightFiction = (csv[i].getInt(6)/div)*20; //calculate the height for the word where it has been in fiction
            cHeightMag = (csv[i].getInt(7)/div)*20; //calculate the height for the word where it has been in magazines
            cHeightNews = (csv[i].getInt(8)/div)*20; //calculate the height for the word where it has been in newspapers
            cHeightAcad = (csv[i].getInt(9)/div)*20; //calculate the height for the word where it has been in academics
            spokAbcHeight = (spokAbc/div)*20;
            spokNbcHeight = (spokNbc/div)*20;
            spokCbsHeight = (spokCbs/div)*20;
            spokCnnHeight = (spokCnn/div)*20;
            spokFoxHeight = (spokFox/div)*20;
            spokMsnbcHeight = (spokMsnbc/div)*20;
            spokPbsHeight = (spokPbs/div)*20;
            spokNprHeight = (spokNpr/div)*20;
            spokIndepHeight = (spokIndep/div)*20;
            ficBookHeight = (ficBook/div)*20;
            ficJrnlHeight = (ficJrnl/div)*20;
            ficSciFanHeight = (ficSciFan/div)*20;
            ficJuvHeight = (ficJuv/div)*20;
            ficMovHeight = (ficMov/div)*20;
            magNewOpHeight = (magNewOp/div)*20;
            magFinHeight = (magFin/div)*20;
            magSciHeight = (magSci/div)*20;
            magArtsHeight = (magArts/div)*20;
            magRelHeight = (magRel/div)*20;
            magSportsHeight = (magSports/div)*20;
            magEntHeight = (magEnt/div)*20;
            magHomeHeight = (magHome/div)*20;
            magAfAmHeight = (magAfAm/div)*20;
            magChildHeight = (magChild/div)*20;
            magWomMenHeight = (magWomMen/div)*20;
            newsMiscHeight = (newsMisc/div)*20;
            newsIntlHeight = (newsIntl/div)*20;
            newsNatlHeight = (newsNatl/div)*20;
            newsLocHeight = (newsLoc/div)*20;
            newsMoneyHeight = (newsMoney/div)*20;
            newsLifeHeight = (newsLife/div)*20;
            newsSportsHeight = (newsSports/div)*20;
            newsEditHeight = (newsEdit/div)*20;
            acadHistHeight = (acadHist/div)*20;
            acadEduHeight = (acadEdu/div)*20;
            acadGeogHeight = (acadGeog/div)*20;
            acadLawHeight = (acadLaw/div)*20;
            acadHumanHeight = (acadHuman/div)*20;
            acadPhilRelHeight = (acadPhilRel/div)*20;
            acadSciTechHeight = (acadSciTech/div)*20;
            acadMedHeight = (acadMed/div)*20;
            acadMiscHeight = (acadMisc/div)*20;

            
            //if size is 0, make it 1 so that you can still see a bar
            if(cHeightSpoken <=0){
                cHeightSpoken = .1;
            }
            if(cHeightFiction <=0){
                cHeightFiction = .1;
            }
            if(cHeightMag<=0){
                cHeightMag = .1;
            }
            if(cHeightNews <=0){
                cHeightNews = .1;
            }
            if(cHeightAcad <=0){
                cHeightAcad = .1;
            }
        
        }
        
    }
    
    
    ofSetFrameRate(60);
    ofSetVerticalSync(true);
    ofBackground(0);
    
    camera.setPosition(0, -7.f, -10.f);
    camera.lookAt(ofVec3f(0,0,0), ofVec3f(0,-1,0));
    
    world.setup();
    world.enableGrabbing();
    world.enableDebugDraw();
    world.setCamera(&camera);
    
    ground.create(world.world, ofVec3f(0., 5.5, 0.), 0., 100.f, 1.f, 100.f );
    ground.setProperties(.25, .95);
    ground.add();
    
    
    //create the bar for spoken
    barSpoken = new ofxBulletCylinder();
    barSpoken->create(world.world, ofVec3f(-7, -2.4, -40), .8, .9, cHeightSpoken);
    barSpoken->add();
    //spoken ABC
    bspokAbc = new ofxBulletCylinder();
    bspokAbc->create(world.world, ofVec3f(-7, -2.4, -35), .8, .9, spokAbcHeight);
    ofSetColor(100,0,0);
   // bspokAbc->add();
    //spoken NBC
    bspokNbc = new ofxBulletCylinder();
    bspokNbc->create(world.world, ofVec3f(-7, -2.4, -30), .8, .9, spokNbcHeight);
   // bspokNbc->add();
    //spoken CBS
    bspokCbs = new ofxBulletCylinder();
    bspokCbs->create(world.world, ofVec3f(-7, -2.4, -25), .8, .9, spokCbsHeight);
    //bspokCbs->add();
    //spoken CNN
    bspokCnn = new ofxBulletCylinder();
    bspokCnn->create(world.world, ofVec3f(-7, -2.4, -20), .8, .9, spokCnnHeight);
    //bspokCnn->add();
    //spoken FOX
    bspokFox = new ofxBulletCylinder();
    bspokFox->create(world.world, ofVec3f(-7, -2.4, -15), .8, .9, spokFoxHeight);
    //bspokFox->add();
    //spoken MSNBC
    bspokMsnbc = new ofxBulletCylinder();
    bspokMsnbc->create(world.world, ofVec3f(-7, -2.4, -10), .8, .9, spokMsnbcHeight);
   // bspokMsnbc->add();
    //spoken PBS
    bspokPbs = new ofxBulletCylinder();
    bspokPbs->create(world.world, ofVec3f(-7, -2.4, -5), .8, .9, spokPbsHeight);
   // bspokPbs->add();
    //spoken NPR
    bspokNpr = new ofxBulletCylinder();
    bspokNpr->create(world.world, ofVec3f(-7, -2.4, -0), .8, .9, spokNprHeight);
    //bspokNpr->add();
    //spoken Indep
    bspokIndep = new ofxBulletCylinder();
    bspokIndep->create(world.world, ofVec3f(-7, -2.4, 5), .8, .9, spokIndepHeight);
   // bspokIndep->add();
    
    //-----------------------------------------------------------------------------------//
    
    //create the bar for fiction
    barFiction = new ofxBulletCylinder();
    barFiction->create(world.world, ofVec3f(-4, -2.4, -40), .8, .9, cHeightFiction);
    barFiction->add();
    //fiction book
    bficBook = new ofxBulletCylinder();
    bficBook->create(world.world, ofVec3f(-4, -2.4, -35), .8, .9, ficBookHeight);
    //bficBook->add();
    //fiction journal
    bficJrnl = new ofxBulletCylinder();
    bficJrnl->create(world.world, ofVec3f(-4, -2.4, -30), .8, .9, ficJrnlHeight);
    //bficJrnl->add();
    //fiction scifi and fantasy
    bficSciFan = new ofxBulletCylinder();
    bficSciFan->create(world.world, ofVec3f(-4, -2.4, -25), .8, .9, ficSciFanHeight);
    //bficSciFan->add();
    //fiction juvenile
    bficJuv = new ofxBulletCylinder();
    bficJuv->create(world.world, ofVec3f(-4, -2.4, -20), .8, .9, ficJuvHeight);
    //bficJuv->add();
    //fiction movie
    bficMov = new ofxBulletCylinder();
    bficMov->create(world.world, ofVec3f(-4, -2.4, -15), .8, .9, ficMovHeight);
    //bficMov->add();
    
    //-----------------------------------------------------------------------------------//
    
    //create the bar for magazines
    barMag = new ofxBulletCylinder();
    barMag->create(world.world, ofVec3f(-1, -2.4, -40), .8, .9, cHeightMag);
    barMag->add();
    //magazine newop
    bmagNewOp = new ofxBulletCylinder();
    bmagNewOp->create(world.world, ofVec3f(-1, -2.4, -35), .8, .9, magNewOpHeight);
   // bmagNewOp->add();
    //magazine financial
    bmagFin = new ofxBulletCylinder();
    bmagFin->create(world.world, ofVec3f(-1, -2.4, -30), .8, .9, magFinHeight);
    //bmagFin->add();
    //magazine science
    bmagSci = new ofxBulletCylinder();
    bmagSci->create(world.world, ofVec3f(-1, -2.4, -25), .8, .9, magSciHeight);
   // bmagSci->add();
    //magazine arts
    bmagArts = new ofxBulletCylinder();
    bmagArts->create(world.world, ofVec3f(-1, -2.4, -20), .8, .9, magArtsHeight);
    //bmagArts->add();
    //magazine religion
    bmagRel = new ofxBulletCylinder();
    bmagRel->create(world.world, ofVec3f(-1, -2.4, -15), .8, .9, magRelHeight);
    //bmagRel->add();
    //magazine Sports
    bmagSports = new ofxBulletCylinder();
    bmagSports->create(world.world, ofVec3f(-1, -2.4, -10), .8, .9, magSportsHeight);
    //bmagSports->add();
    //magazine entertainment
    bmagEnt = new ofxBulletCylinder();
    bmagEnt->create(world.world, ofVec3f(-1, -2.4, -5), .8, .9, magEntHeight);
   // bmagEnt->add();
    //magazine home
    bmagHome = new ofxBulletCylinder();
    bmagHome->create(world.world, ofVec3f(-1, -2.4, 0), .8, .9, magHomeHeight);
    //bmagHome->add();
    //magazine african american
    bmagAfAm = new ofxBulletCylinder();
    bmagAfAm->create(world.world, ofVec3f(-1, -2.4, 5), .8, .9, magAfAmHeight);
    //bmagAfAm->add();
    //magazine Children
    bmagChild = new ofxBulletCylinder();
    bmagChild->create(world.world, ofVec3f(-1, -2.4, 10), .8, .9, magChildHeight);
    //bmagChild->add();
    //magazine men and women
    bmagWomMen= new ofxBulletCylinder();
    bmagWomMen->create(world.world, ofVec3f(-1, -2.4, 15), .8, .9, magWomMenHeight);
    //bmagWomMen->add();
    
    //-----------------------------------------------------------------------------------//
    
    //create the bar for newspapers
    barNews = new ofxBulletCylinder();
    barNews->create(world.world, ofVec3f(2, -2.4, -40), .8, .9, cHeightNews);
    barNews->add();
    //Miscellaneous
    bnewsMisc = new ofxBulletCylinder();
    bnewsMisc->create(world.world, ofVec3f(2, -2.4, -35), .8, .9, newsMiscHeight);
    //bnewsMisc->add();
    //International
    bnewsIntl = new ofxBulletCylinder();
    bnewsIntl->create(world.world, ofVec3f(2, -2.4, -30), .8, .9, newsIntlHeight);
    //bnewsIntl->add();
    //National
    bnewsNatl = new ofxBulletCylinder();
    bnewsNatl->create(world.world, ofVec3f(2, -2.4, -25), .8, .9, newsNatlHeight);
    //bnewsNatl->add();
    //Local
    bnewsLoc = new ofxBulletCylinder();
    bnewsLoc->create(world.world, ofVec3f(2, -2.4, -20), .8, .9, newsLocHeight);
    //bnewsLoc->add();
    //Money
    bnewsMoney = new ofxBulletCylinder();
    bnewsMoney->create(world.world, ofVec3f(2, -2.4, -15), .8, .9, newsMoneyHeight);
    //bnewsMoney->add();
    //Life
    bnewsLife = new ofxBulletCylinder();
    bnewsLife->create(world.world, ofVec3f(2, -2.4, -10), .8, .9, newsLifeHeight);
    //bnewsLife->add();
    //Sports
    bnewsSports = new ofxBulletCylinder();
    bnewsSports->create(world.world, ofVec3f(2, -2.4, -5), .8, .9, newsSportsHeight);
    //bnewsSports->add();
    //Edit
    bnewsEdit = new ofxBulletCylinder();
    bnewsEdit->create(world.world, ofVec3f(2, -2.4, 0), .8, .9, newsEditHeight);
    //bnewsEdit->add();
    
    //-----------------------------------------------------------------------------------//

    
    //create the bar for academic
    barAcad = new ofxBulletCylinder();
    barAcad->create(world.world, ofVec3f(5, -2.4, -40), .8, .9, cHeightAcad);
    barAcad->add();
    //academic history
    bacadHist = new ofxBulletCylinder();
    bacadHist->create(world.world, ofVec3f(5, -2.4, -35), .8, .9, acadHistHeight);
   // bacadHist->add();
    //academic education
    bacadEdu = new ofxBulletCylinder();
    bacadEdu->create(world.world, ofVec3f(5, -2.4, -30), .8, .9, acadEduHeight);
    //bacadEdu->add();
    //academic geography
    bacadGeog = new ofxBulletCylinder();
    bacadGeog->create(world.world, ofVec3f(5, -2.4, -25), .8, .9, acadGeogHeight);
    //bacadGeog->add();
    //academic law
    bacadLaw = new ofxBulletCylinder();
    bacadLaw->create(world.world, ofVec3f(5, -2.4, -20), .8, .9, acadLawHeight);
    //bacadLaw->add();
    //academic Human
    bacadHuman = new ofxBulletCylinder();
    bacadHuman->create(world.world, ofVec3f(5, -2.4, -15), .8, .9, acadHumanHeight);
    //bacadHuman->add();
    //academic philosphy and religion
    bacadPhilRel = new ofxBulletCylinder();
    bacadPhilRel->create(world.world, ofVec3f(5, -2.4, -10), .8, .9, acadPhilRelHeight);
    //bacadPhilRel->add();
    //academic Science and Tech
    bacadSciTech = new ofxBulletCylinder();
    bacadSciTech->create(world.world, ofVec3f(5, -2.4, -5), .8, .9, acadSciTechHeight);
    //bacadSciTech->add();
    //academic Medical
    bacadMed = new ofxBulletCylinder();
    bacadMed->create(world.world, ofVec3f(5, -2.4, 0), .8, .9, acadMedHeight);
   // bacadMed->add();
    //academic Misc
    bacadMisc = new ofxBulletCylinder();
    bacadMisc->create(world.world, ofVec3f(5, -2.4, 5), .8, .9, acadMiscHeight);
    //bacadMisc->add();
    
}

//--------------------------------------------------------------
void ofApp::update(){
    world.update();
    ofSetWindowTitle("Interactive Bar Graph");
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    glEnable(GL_DEPTH_TEST);
    camera.begin();
    
    ofSetLineWidth(0);
    ofSetColor(0,0,150);
    world.drawDebug();
    
    ofSetColor(200);
    ground.draw();
    
    //spoken data
    ofSetColor(0,0,100);
    barSpoken->draw();
   
    
    //fiction data
    ofSetColor(0,100,0);
    barFiction->draw();
    
    
    //magazine data
    ofSetColor(100,0,0);
    barMag->draw();
    
    //newspaper data
    ofSetColor(0,100,100);
    barNews->draw();

    
    //academic data
    ofSetColor(100,0,100);
    barAcad->draw();
    
    camera.end();
    
    glDisable(GL_DEPTH_TEST);
    
    //draw the key for the different colors
    ofSetColor(200);
    ofDrawRectangle(20,10,110, 106);
    ofSetColor(0,0,100);
    ofDrawRectangle(25,13,100,20);
    ofSetColor(200);
    ofDrawBitmapString("Spoken: 1", 25, 25);
    ofDrawBitmapString("Indep", 150, 25);
    ofDrawBitmapString("NPR", 200, 25);
    ofDrawBitmapString("PBS", 250, 25);
    ofDrawBitmapString("MSNBC", 300, 25);
    ofDrawBitmapString("FOX", 350, 25);
    ofDrawBitmapString("CNN", 400, 25);
    ofDrawBitmapString("CBS", 450, 25);
    ofDrawBitmapString("NBC", 500, 25);
    ofDrawBitmapString("ABC", 550, 25);
  
    
    ofSetColor(0,100,0);
    ofDrawRectangle(25,33,100,20);
    ofSetColor(200);
    ofDrawBitmapString("Fiction: 2", 25, 45);
    ofDrawBitmapString("Book", 450, 45);
    ofDrawBitmapString("Jrnl", 400, 45);
    ofDrawBitmapString("Sci", 350, 45);
    ofDrawBitmapString("Juv", 300, 45);
    ofDrawBitmapString("Movie", 250, 45);

    
    ofSetColor(100,0,0);
    ofDrawRectangle(25,53,100,20);
    ofSetColor(200);
    ofDrawBitmapString("Magazine: 3", 25, 65);
    ofDrawBitmapString("NewOp", 650, 65);
    ofDrawBitmapString("Fin", 600, 65);
    ofDrawBitmapString("Sci", 550, 65);
    ofDrawBitmapString("Arts", 500, 65);
    ofDrawBitmapString("Rel", 450, 65);
    ofDrawBitmapString("Sports", 400, 65);
    ofDrawBitmapString("Ent", 350, 65);
    ofDrawBitmapString("Home", 300, 65);
    ofDrawBitmapString("AfAm", 250, 65);
    ofDrawBitmapString("Child", 200, 65);
    ofDrawBitmapString("WomMen", 150, 65);


    
    ofSetColor(0,100,100);
    ofDrawRectangle(25,73,100,20);
    ofSetColor(200);
    ofDrawBitmapString("Newspaper: 4", 25, 85);
    ofDrawBitmapString("Misc", 550, 85);
    ofDrawBitmapString("Intl", 500, 85);
    ofDrawBitmapString("Natl", 450, 85);
    ofDrawBitmapString("Loc", 400, 85);
    ofDrawBitmapString("Money", 350, 85);
    ofDrawBitmapString("Life", 300, 85);
    ofDrawBitmapString("Sports", 250, 85);
    ofDrawBitmapString("Edit", 200, 85);
    
    
    ofSetColor(100,0,100);
    ofDrawRectangle(25,93,100,20);
    ofSetColor(200);
    ofDrawBitmapString("Academic: 5", 25, 105);
    ofDrawBitmapString("Hist", 500, 100);
    ofDrawBitmapString("Edu", 550, 100);
    ofDrawBitmapString("Geog", 500, 100);
    ofDrawBitmapString("Law", 450, 100);
    ofDrawBitmapString("Human", 400, 100);
    ofDrawBitmapString("PhiRel", 350, 100);
    ofDrawBitmapString("Sci", 300, 100);
    ofDrawBitmapString("Med", 250, 100);
    ofDrawBitmapString("Misc", 200, 100);
    }


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == ' '){
        camera.disableMouseInput();
    }
    
    if(key == '1'){
        ofSetColor(200);
        bspokAbc->add();
        bspokAbc->draw();
        bspokNbc->add();
        bspokNbc->draw();
        bspokCbs->add();
        bspokCbs->draw();
        bspokCnn->add();
        bspokCnn->draw();
        bspokFox->add();
        bspokFox->draw();
        bspokMsnbc->add();
        bspokMsnbc->draw();
        bspokPbs->add();
        bspokPbs->draw();
        bspokNpr->add();
        bspokNpr->draw();
        bspokIndep->add();
        bspokIndep->draw();
        
    }
    if(key=='2'){
        ofSetColor(0,100,0);
        bficBook->add();
        bficBook->draw();
        bficJrnl->add();
        bficJrnl->draw();
        bficSciFan->add();
        bficSciFan->draw();
        bficJuv->add();
        bficJuv->draw();
        bficMov->add();
        bficMov->draw();
    }
    if(key == '3'){
        ofSetColor(100,0,0);
        bmagNewOp->add();
        bmagNewOp->draw();
        bmagFin->add();
        bmagFin->draw();
        bmagSci->add();
        bmagSci->draw();
        bmagArts->add();
        bmagArts->draw();
        bmagRel->add();
        bmagRel->draw();
        bmagSports->add();
        bmagSports->draw();
        bmagEnt->add();
        bmagEnt->draw();
        bmagHome->add();
        bmagHome->draw();
        bmagAfAm->add();
        bmagAfAm->draw();
        bmagChild->add();
        bmagChild->draw();
        bmagWomMen->add();
        bmagWomMen->draw();
    }
    if(key == '4'){
        ofSetColor(0,100,100);
        bnewsMisc->add();
        bnewsMisc->draw();
        bnewsIntl->add();
        bnewsIntl->draw();
        bnewsNatl->add();
        bnewsNatl->draw();
        bnewsLoc->add();
        bnewsLoc->draw();
        bnewsMoney->add();
        bnewsMoney->draw();
        bnewsLife->add();
        bnewsLife->draw();
        bnewsSports->add();
        bnewsSports->draw();
        bnewsEdit->add();
        bnewsEdit->draw();
    }
    if(key=='5'){
        ofSetColor(100,0,100);
        bacadHist->add();
        bacadHist->draw();
        bacadEdu->add();
        bacadEdu->draw();
        bacadGeog->add();
        bacadGeog->draw();
        bacadLaw->add();
        bacadLaw->draw();
        bacadHuman->add();
        bacadHuman->draw();
        bacadPhilRel->add();
        bacadPhilRel->draw();
        bacadSciTech->add();
        bacadSciTech->draw();
        bacadMed->add();
        bacadMed->draw();
        bacadMisc->add();
        bacadMisc->draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if (key == ' '){
        camera.enableMouseInput();
    }
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

