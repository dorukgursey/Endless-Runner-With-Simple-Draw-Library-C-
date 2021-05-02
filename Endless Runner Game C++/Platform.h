#pragma once
#include "SimpleDraw.h"
#include <math.h>
class Platform
{
	private:
		int x1, y1, x2, y2;
		int x, y, k;
		double theta;
	public:
		Platform();
		void updateCoords();
		void setXY(int x, int y);
		void setK(int k);
		double getT();
		void setT(double t);
		void draw();
		void clear();
		void move(int px, int py);
};

