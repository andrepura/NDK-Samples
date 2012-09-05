/**
 * MULTITOUCH
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
 * mappau OG
 *
 * feel free to contact us:
 * blackberry@mappau.com
 * http://www.mappau.com
 *
 *
 */

#include <assert.h>
#include <screen/screen.h>
#include <bps/navigator.h>
#include <bps/screen.h>
#include <bps/bps.h>
#include <bps/event.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

#include <math.h>
#include <time.h>

#include <sys/keycodes.h>
#include <bps/virtualkeyboard.h>
#include <gestures/types.h>
#include <gestures/set.h>
#include <input/screen_helpers.h>

#include "bbutil.h"
#include "Render.h"
#include "EventHandler.h"
#include "InitBBSDK.h"

int main(int argc, char *argv[]) {

	int rc;
	int exit_application = 0;

	initBBSpecific();

	initOpenGL(screen_cxt);

	while (closeApplication == 0) {
		handleEvent();
		render();
	}

	//Stop requesting events from libscreen
	screen_stop_events(screen_cxt);

	//Shut down BPS library for this process
	bps_shutdown();

	//Use utility code to terminate EGL setup
	bbutil_terminate();

	//Destroy libscreen context
	screen_destroy_context(screen_cxt);
	return 0;
}

