cmdEntry_t cmdsTable[] =
{
  { "quit", cmd_quit, " : Quit TinyShell" },
  { "q",    cmd_quit, " : Alias for quit" },
  { "help", cmd_help, " : Display list of commands" },
  { "?",    cmd_help, " : Alias for help"},
  { "jobs", cmd_jobs, " : List running jobs" },
  { "bg",   cmd_bg,   " : Move program <pid> to the background" },
  { "fg",   cmd_fg,   " : Move program <pid> to the forground" }
};

char *path[] =
{
  "/bin",
  "/sbin"
  "/usr/bin",
  "/usr/sbin",
  "/usr/local/bin",
  "/usr/local/sbin",
};
/* Implementation of the functions */
int cmd_quit(int argc, char *argv[]){
  printf("We are quitting!\n");
  exit(0);
}

int cmd_help(int argc, char *argv[]){
  int i;

  printf("TinyShell provides these limited commands: \n");

  for(i=0;i<sizeof(cmdsTable)/sizeof(cmdsTable[0]);i++) {
    printf("%s %s\n", cmdsTable[i].cmd, cmdsTable[i].help);
  }
  return 1;
}

// because of the variable scope problem
// cmd_jobs, cmd_bg and cmd_fg are 
// defined in tsh.c
