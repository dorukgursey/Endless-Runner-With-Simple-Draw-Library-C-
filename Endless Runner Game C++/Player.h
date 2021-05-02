#ifndef PLAYER_H
#define PLAYER_H

#include "SimpleDraw.h"

class Player {
	private:
		int x,y,w,h;
		int x1,y1,x2,y2;
		void recalculateCoords();
	public:
		Player();
		void setXY(int x, int y);
		void setWH(int w, int h);
		void setW(int w);
		int getW();
		void draw();
		void clear();
		void moveRight();
		void moveLeft();
		void Jump();
		void JumpRight();
		void JumpLeft();
};


#endif
