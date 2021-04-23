//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"⌨", "sb-kbselect", 0, 30}, */
	{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	/* {"",	"sb-music",	0,	11},*/
	{"",	"ksm-date",	18000,	23},
	{"",	"sb-pacpackages",	0,	8},
	/* {"",	"sb-news",		0,	6}, */
	/* {"",	"sb-crypto",	0,	13}, */
	/* {"",	"sb-price bat \"Basic Attention Token\" 🦁",	0,	20}, */
	/* {"",	"sb-price btc Bitcoin 💰",				0,	21}, */
	/* {"",	"sb-price lbc \"LBRY Token\" 📚",			0,	22}, */
	/* {"",	"sb-torrent",	20,	7},  */
	{"",	"sb-memory",	10,	14},
	/* {"",	"sb-cpu",		10,	18}, */
	/* {"",	"sb-moonphase",	18000,	17}, */
	/* {"",	"sb-weather",	18000,	5},  */
	/* {"",	"sb-mailbox",	180,	12}, */
	/* {"",	"sb-nettraf",	1,	16}, */
	//{"",	"sb-teststatus",	0,	14},
	{"",	"sb-volume",	0,	10},
	{"",	"sb-lglight",	0,	11},
	{"",	"sb-battery",	60,	3}, //5
	{"",	"sb-clock",	60,	1},
//	{"",	"sb-hackernews",	0,	16},
	{"",	"sb-layout",	0,	12},
	{"",	"sb-internet",	0,	4}, //5
//	{"",	"sb-help-icon",	0,	15},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " │ ";

