/* user and group to drop privileges to */
static const char *user  = "mroavi";
static const char *group = "mroavi";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#73cef4",   /* during input */
	[FAILED] = "#f43753",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
