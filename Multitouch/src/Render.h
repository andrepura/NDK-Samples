/**
 *
 * The Main Renderer
 * This class includes all the rendering stuff
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

#ifndef RENDER_H_
#define RENDER_H_


#include <EGL/egl.h>
#include <GLES/gl.h>
#include <stdbool.h>
#include <time.h>
#include <bps/screen.h>

extern GLfloat vertices[8];
extern GLfloat verticesH[8];
extern GLfloat verticesTouchpoint[8];

extern GLfloat tex_coord[8];
extern GLfloat tex_coordH[8];
extern GLfloat tex_coord_touchpoint[8];

extern GLuint background;
extern GLuint backgroundH;
extern GLuint touchpoint;

extern float width, height;

extern float colors[4][3];

void enable_2d();
int initOpenGL(screen_context_t);
void render();

#endif /* RENDER_H_ */
