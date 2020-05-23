/* See LICENSE file for copyright and license details. */

/* appearance */
static const char font[]        = "monospace:size=9";
static const char* normbgcolor  = "#222222";
static const char* normfgcolor  = "#cccccc";
static const char* selbgcolor   = "#555555";
static const char* selfgcolor   = "#ffffff";
static const char* urgbgcolor   = "#111111";
static const char* urgfgcolor   = "#cc0000";
static const char before[]      = "<";
static const char after[]       = ">";
static const char titletrim[]   = "...";
static const int  tabwidth      = 200;
static const Bool foreground    = True;
static       Bool urgentswitch  = False;

/*
 * Where to place a new tab when it is opened. When npisrelative is True,
 * then the current position is changed + newposition. If npisrelative
 * is False, then newposition is an absolute position.
 */
static int  newposition   = -1;
static Bool npisrelative  = False;

#define MODKEY ControlMask
static Key keys[] = {
	/* modifier             key        function     argument */
	{ MODKEY|ShiftMask,     XK_t,      focusonce,   { 0 } },
	{ MODKEY|ShiftMask,     XK_t,      spawn,       { 0 } },

	{ MODKEY,               XK_comma,  rotate,      { .i = -1 } },
	{ MODKEY,               XK_period, rotate,      { .i = +1 } },


	{ MODKEY,               XK_q,      killclient,  { 0 } },

	{ 0,                    XK_F11,    fullscreen,  { 0 } },
};
