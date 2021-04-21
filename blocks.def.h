//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/							/*Update Interval*/	/*Update Signal*/
	{"", 		"$S/musicBlock.sh get status",					1,			1},

	{"",		"$S/weather.sh",						3600,			4},

	{"",		"$S/volume.sh",							0,			2},

	{"",		"cat /tmp/scripts/alarm",					0,			3},

	{"",		"$S/date.sh",							5,			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "    ";
static unsigned int delimLen = 5;
