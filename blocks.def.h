//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/	 	                            /*Update Interval*/	/*Update Signal*/
    {" 🐧 ", "~/.config/scripts/kernel",	  360,		          2},

	{" 🔺 ", "~/.config/scripts/upt",		  60,		          2},

	{" 📦 ", "~/.config/scripts/pacupdate", 360,		          9},
	
	{" 💻 ", "~/.config/scripts/memory",	  6,		          1},

	{" 🔊 ", "~/.config/scripts/volume",    0,		          10},

	{" 🕑 ", "~/.config/scripts/clock",	  60,	              0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' | ';
\\