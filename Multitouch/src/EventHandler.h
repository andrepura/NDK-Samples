/**
 *
 * The Eventhandler Header
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
 */

#ifndef EVENTHANDLER_H_
#define EVENTHANDLER_H_

#include <bps/bps.h>
#include <bps/event.h>
#include "Touchpoint.h"


extern int closeApplication;
extern int navigator_domain;
extern std::list<Touchpoint> points;
extern int oriention_side_up;

void handleEvent(void);
void init(void);
void handleScreenEvent(bps_event_t *event);
void handleNavigatorEvent(bps_event_t *event);
void handle_dialog_response(bps_event_t *event);
void show_alert();
int resize(bps_event_t *event);



#endif /* EVENTHANDLER_H_ */
