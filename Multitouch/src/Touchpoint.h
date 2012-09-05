/**
 *
 * The Touchpoint Header
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


#ifndef TOUCHPOINT_H_
#define TOUCHPOINT_H_

#include <list>

class Touchpoint {
public:
	Touchpoint(int,int,int);
	Touchpoint(const Touchpoint& p);
	virtual ~Touchpoint();

	float r;
	float g;
	float b;
	int x;
	int y;
	int startRotation;
	unsigned int id;

	bool visible;

	Touchpoint& operator=(const Touchpoint &source);
	void updatePosition(int,int);
	int getX();
	int getY();
	int getStartRotation();
	void setInvisible(void);
	void setColor(float,float,float);
};


#endif /* TOUCHPOINT_H_ */
