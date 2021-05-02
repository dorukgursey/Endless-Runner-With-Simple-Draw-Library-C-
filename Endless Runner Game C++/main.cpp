//
//  main.cpp
//  GameProjectXcode
//
//  Created by Doruk on 18.12.2017.
//  Copyright © 2017 Doruk. All rights reserved.
//
#include <iostream>
#include <time.h>
#include <Windows.h>
#include <conio.h>
#include "Player.h"
using namespace std;

int main() {
    // Adjust window size
    setWindowSize(800, 800);
    bool endgame = false;
    char key;
    Player p;
    
    while(!endgame) {
        if(_kbhit())
        {
            key=_getch();
            switch(key){
                case 'D':
                case 'd':
                    p.moveRight();
                    break;
                case 'A':
                case 'a':
                    p.moveLeft();
                    break;
                case 'W':
                case 'w':
                    p.Jump();
                    break;
                case 'r':
                case 'R':
                    p.JumpRight();
                    break;
                case 'q':
                case 'Q':
                    p.JumpLeft();
                    break;
            }
        }
        
        //		if(getKey('D')){
        //			p.clear();
        //			x=x+100;
        //			p.move(x,y);
        //		}
        //		if(getKey('A')){
        //			p.clear();
        //			x=x-100;
        //			p.move(x,y);
        //		}
        //		if(getKey('W')){
        //			p.clear();
        //			y=y-100;
        //			p.move(x,y);
        //		}
        //		if(getKey('Q')) {
        //			p.clear();
        //			int w = p.getW() + 5;
        //			p.setW(w);
        //		}
        //		if(getKey('M')) {
        //			p.clear();
        //			int w = p.getW() - 5;
        //			p.setW(w);
        //		}
    }
    
    return 0;
}
