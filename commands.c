cmdEntry_t cmdsTable[] =
{
  { "quit", cmd_quit, "\t : Quit TinyShell" },
  { "q",    cmd_quit, "\t : Alias for quit" },
  { "help", cmd_help, "\t : Display list of commands" },
  { "?",    cmd_help, "\t : Alias for help"},
  { "jobs", cmd_jobs, "\t : List running jobs" },
  { "bg",   cmd_bgfg, "\t : Move program <pid> to the background" },
  { "fg",   cmd_bgfg, "\t : Move program <pid> to the forground" }
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
int cmd_quit(char **argv){
  printf("We are quitting!\n");
  exit(0);
}

int cmd_help(char **argv){
  int i;

  printf("TinyShell provides these limited commands: \n");

  for(i=0;i<sizeof(cmdsTable)/sizeof(cmdsTable[0]);i++) {
    printf("%s %s\n", cmdsTable[i].cmd, cmdsTable[i].help);
  }
  return 1;
}

// because of the variable scope problem
// cmd_jobs and cmd_bgfg are defined in tsh.c
