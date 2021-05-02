#include "Player.h"

Player :: Player() {
	w = 20;
	h = 60;
	x = 100;
	y = 100;
	recalculateCoords();
	draw();
}

void Player :: recalculateCoords() {
	x1 = x - w/2;
	x2 = x + w/2;
	y1 = y - h/2;
	y2 = y + h/2;
}

void Player :: setXY(int x, int y) {
	Player::x = x;
	Player::y = y;
	recalculateCoords();
}

void Player :: setWH(int w, int h) {
	Player::w = w;
	Player::h = h;
	recalculateCoords();
}
void Player :: setW(int w) {
	Player :: w = w;
	recalculateCoords();
}
int Player :: getW() {
	return w;
}

void Player :: draw() {
	usePen(PS_SOLID, 1, RGB(0,0,0));
	useBrush(1, RGB(255, 0, 0));
	drawRectangle(x1,y1,x2,y2);
}

void Player :: clear() {
	usePen(PS_SOLID, 1, RGB(255,255,255));
	useBrush(1, RGB(255, 255, 255));
	drawRectangle(x1,y1,x2,y2);
	
}

void Player :: moveRight() {
	clear();
	x=x+5;
	recalculateCoords();
	draw();
	
}
void Player :: moveLeft(){
	clear();
	x=x-5;
	recalculateCoords();
	draw();
}
void Player :: Jump(){
	clear();
	y=y-40;
	recalculateCoords();
	draw();
	Sleep(200);
	clear();
	y=y+40;
	recalculateCoords();
	draw();
}
void Player :: JumpRight(){
	clear();
	y=y-40;
	x=x+20;
	recalculateCoords();
	draw();
	Sleep(20);
	clear();
	x=x+20;
	recalculateCoords();
	draw();
	Sleep(20);
	clear();
	y=y+40;
	x=x+20;
	recalculateCoords();
	draw();
}
void Player::JumpLeft(){
	clear();
	y = y - 40;
	x = x - 20;
	recalculateCoords();
	draw();
	Sleep(20);
	clear();
	x = x - 20;
	recalculateCoords();
	draw();
	Sleep(20);
	clear();
	y = y + 40;
	x = x - 20;
	recalculateCoords();
	draw();
}
	
	

