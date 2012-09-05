/**
 *
 * The Touchpoint class represents a single touchpoint
 *
 * License: CC http://creativecommons.org/licenses/by/3.0/
 * Overview:
 * You are free ...
 *
 * to Share — to copy, distribute and transmit the work
 * to Remix — to adapt the work
 * to make commercial use of the work
 * But:
 * You must attribute the work in the manner specified by the author or licensor (but not in any way that suggests that they endorse you or your use of the work).
 *
 * 2012
 * Author: mappau OG
 *
 * feel free to contact us:
 * blackberry@mappau.com
 * http://www.mappau.com
 *
 *
 */

#include "Touchpoint.h"
#include <time.h>


int x = 0, y = 0;
int id = 0;
bool visible= true;
int startRotation = 0;

float r;
float g;
float b;

Touchpoint::Touchpoint(int x, int y, int id) {
	this->x = x;
	this->y = y;
	this->id = id;
	startRotation = x+y;

	r = 1.0f/(float)(time(NULL)%1000);
	g = 1.0f/(float)(time(NULL)%22);
	b = 1.0f/(float)(time(NULL)%10);
}

Touchpoint::Touchpoint(const Touchpoint& p) {
	x = p.x;
	y = p.y;
	id = p.id;
	startRotation = p.startRotation;
	visible = p.visible;
	r = p.r;
	g = p.g;
	b = p.b;
}

Touchpoint::~Touchpoint() {

}

void Touchpoint::updatePosition(int x, int y) {
	this->x = x;
	this->y = y;
	visible = true;
}
int Touchpoint::getX() {
	return x;
}
int Touchpoint::getY() {
	return y;
}
int Touchpoint::getStartRotation() {
	return startRotation;
}
Touchpoint& Touchpoint::operator=(const Touchpoint &source){
	x = source.x;
	y= source.y;
	id = source.id;
	visible = source.visible;
	startRotation = source.startRotation;

	r = source.r;
	g = source.g;
	b = source.b;

	return *this;
}

void Touchpoint::setInvisible(void){
	visible = false;
}
void Touchpoint::setColor(float rr,float gg,float bb){
	r = rr;
	g = gg;
	b = bb;
}
