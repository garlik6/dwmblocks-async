#define CMDLENGTH 45
#define DELIMITER " | "
#define CLICKABLE_BLOCKS
#define LEADING_DELIMITER " "
const Block blocks[] = {
//	command / update interval / update signal
//	block("sb-mail",        1800, 17),
//	block("sb-music",       0,    18),
//	block("sb-disk",        1800, 19),
//	block("sb-memory",      10,   20),
//	block("sb-loadavg",     5,    21),
//	block("sb-mic",         0,    26),
//	block("sb-record",      0,    27),
//	BLOCK()
	BLOCK("sb-volume",      0,    22),
	BLOCK("sb-layout",      0,    20),
	BLOCK("sb-brightness",  0,    23),
	BLOCK("sb-battery",     5,    24),
	BLOCK("sb-date",        1,    25)
};                              
