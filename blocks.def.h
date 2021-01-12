//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/							/*Update Interval*/	/*Update Signal*/
	{"",		"bash $HOME/scripts/volume.sh",					0,			2},

	{"", 		"bash $HOME/scripts/musicBlock.sh get status",			1,			1},

	{"", 		"date +'%a %d %b %H:%M '",					5,			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
