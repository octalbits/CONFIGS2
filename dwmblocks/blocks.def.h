//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", 	"~/.config/dwmblocks/scripts/sb-volume",			0,		 1},
	{"",	"~/.config/dwmblocks/scripts/sb-battery",			5,		 0},
	{" ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	10,		 0},
	{" ", "date '+%a %B %d %I:%M%p'",					60,		 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
