static const char *colorname[] = {
	"$overlay",
	"$love",
	"$foam",
	"$gold",
	"$pine",
	"$iris",
	"$rose",
	"$text",

	"$muted",
	"$love",
	"$foam",
	"$gold",
	"$pine",
	"$iris",
	"$rose",
	"$text",

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"$base",
};


/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 7;
unsigned int defaultbg = 256;
unsigned int defaultcs = 7;
static unsigned int defaultrcs = 7;
