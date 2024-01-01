//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  { "",    "volume_blocks",             0,                    5},
  { "",    "battery_blocks",            30,                   4},
  { "",    "cpu_usage_blocks",          10,                   3},
  { "",    "ram_memory_blocks",         5,                    2},
  { "",    "clock_blocks",              5,                    1},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = "";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
