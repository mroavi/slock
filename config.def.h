/* user and group to drop privileges to */
static const char *user  = "mroavi";
static const char *group = "mroavi";

static const char *colorname[NUMCOLS] = {

  [INIT] =   "black",     /* after initialization */

  //// tender
  //[INPUT] =  "#73cef4",   /* during input */
  //[FAILED] = "#f43753",   /* wrong password */

  //// rose-pine
  //[INPUT] =  "#26233a",   /* during input */
  //[FAILED] = "#eb6f92",   /* wrong password */

  // catppuccin
  [INPUT] =  "#1E1E2E",   /* during input */
  [FAILED] = "#f38bA8",   /* wrong password */

};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
