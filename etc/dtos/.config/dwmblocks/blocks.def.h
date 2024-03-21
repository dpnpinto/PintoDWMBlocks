//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/	 	                            /*Update Interval*/	/*Update Signal*/
    {" 🐧 ", "/etc/dtos/.config/dwmblocks/scripts/kernel",	  360,		          2},

	{" 🔺 ", "/etc/dtos/.config/dwmblocks/scripts/upt",		  60,		          2},

	{" 📦 ", "/etc/dtos/.config/dwmblocks/scripts/pacupdate", 360,		          9},
	
	{" 💻 ", "/etc/dtos/.config/dwmblocks/scripts/memory",	  6,		          1},

	{" 🔊 ", "/etc/dtos/.config/dwmblocks/scripts/volume",    0,		          10},

	{" 🕑 ", "/etc/dtos/.config/dwmblocks/scripts/clock",	  60,	              0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' | ';
