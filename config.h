//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
					     //	{"",       "cat /tmp/recordingicon 2>/dev/null",	       0,                  9     },
    {"󰄽 ", "songs", 2, 9},
    {"󰄽 ", "pacpackages", 0, 8},
    //	{"|",	   "news",						0,	            6     },
    {"󰄽 ", "memory", 10, 14},
    //	{"|",	   "mailbox",						180,	            12    },
    {"󰄽 ", "volume", 0, 10},
    {"󰄽 ", "clock", 60, 1},
    // {"|",	   "internet",						5,	            4     },
    {"󰄽 ", "dnd", 0, 16},
    //	{"|",	   "help-icon",						0,	            15    },
    {"󰄽", "", 0, 17},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
