#include "Platform.h"


Platform::Platform()
{
	x = y = 200;
	k = 50;
	theta = 0;
	updateCoords();
}
void Platform::updateCoords() {
	x1 = x + k*cos(theta);
	y1 = y + k*sin(theta);
	x2 = x - k*cos(theta);
	y2 = y - k*sin(theta);
}
void Platform::setXY(int x, int y) {
	Platform::x = x;
	Platform::y = y;
	updateCoords();
}
void Platform::setK(int k) {
	Platform::k = k;
	updateCoords();
}
double Platform::getT() {
	return theta;
}
void Platform::setT(double t) {
	theta = t;
	updateCoords();
}
void Platform::draw() {
	usePen(PS_SOLID, 1, RGB(255, 0, 0));
	drawLine(x1, y1, x2, y2);
}
void Platform::clear() {
	usePen(PS_SOLID, 1, RGB(255, 255, 255));
	drawLine(x1, y1, x2, y2);
}

void Platform::move(int px, int py) {
	clear();
	setXY(px, py);
	draw();
}

