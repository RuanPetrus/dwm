static const char col_base03[] =    "#002b36";
static const char col_base02[] =    "#073642";
static const char col_base01[] =    "#586e75";
static const char col_base00[] =    "#657b83";
static const char col_base0[] =     "#839496";
static const char col_base1[] =     "#93a1a1";
static const char col_base2[] =     "#eee8d5";
static const char col_base3[] =     "#fdf6e3";
static const char col_yellow[] =    "#b58900";
static const char col_orange[] =    "#cb4b16";
static const char col_red[] =       "#dc322f";
static const char col_magenta[] =   "#d33682";
static const char col_violet[] =    "#6c71c4";
static const char col_blue[] =      "#268bd2";
static const char col_cyan[] =      "#2aa198";
static const char col_green[] =     "#859900";

static const char *colors[][3] = {
    /*               fg              bg                  border */
    [SchemeNorm] =  { col_base01,   col_base03,      col_base0 },
    [SchemeSel]  =  { col_base1,    col_base02,      col_yellow },
};
