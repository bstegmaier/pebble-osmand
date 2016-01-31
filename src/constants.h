/* configuration */

#define CONFIG_BACKLIGHT_ON_MESSAGE 1
#define CONFIG_VIBRATE_ON_MESSAGE 1

/* app message communication */

#define MESSAGE_TYPE 0
#define ALERT_MESSAGE 1
#define NAVIGATION_INFO_MESSAGE 2
#define INSTRUCTION_MESSAGE 3

#define ALERT_TYPE 10
#define ALERT_TEXT 19

#define GENERIC_ALERT 100

#define NAVIGATION_DESTINATION 20
#define NAVIGATION_DIST_TO_DEST 21
#define NAVIGATION_ETA 22

#define INSTRUCTION_TYPE 30
#define INSTRUCTION_DISTANCE 38
#define INSTRUCTION_TEXT 39

#define GO_STRAIGHT_INSTRUCTION 301
#define KEEP_LEFT_INSTRUCTION 302
#define KEEP_RIGHT_INSTRUCTION 303
#define TURN_LEFT_INSTRUCTION 304
#define TURN_RIGHT_INSTRUCTION 305
#define TURN_SHARPLY_LEFT_INSTRUCTION 306
#define TURN_SHARPLY_RIGHT_INSTRUCTION 307
#define TURN_SLIGHTLY_LEFT_INSTRUCTION 308
#define TURN_SLIGHTLY_RIGHT_INSTRUCTION 309
#define MAKE_UTURN_LEFT_INSTRUCTION 310
#define MAKE_UTURN_RIGHT_INSTRUCTION 311
#define EXIT_ROUNDABOUT_INSTRUCTION 312

/*** TODO
 * arrive at destination/waypoint
 * nearby poi/favourite/..
 * off route / back on route
 * gps signal lost/recovered
 * phone battery low
*/
