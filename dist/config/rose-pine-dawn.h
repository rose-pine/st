static const char *colorname[] = {
    "#f2e9e1",
    "#b4637a",
    "#56949f",
    "#ea9d34",
    "#286983",
    "#907aa9",
    "#d7827e",
    "#575279",
    "#9893a5",
    "#b4637a",
    "#56949f",
    "#ea9d34",
    "#286983",
    "#907aa9",
    "#d7827e",
    "#575279",
    [255] = 0,
    /* more colors can be added after 255 to use with DefaultXX */
    [256] = "#faf4ed",
};


/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultbg = 256;
unsigned int defaultfg = 7;
unsigned int defaultcs = 7;
unsigned int defaultrcs = 7;
