/* Declaration of the functions */
int cmd_quit(char *argv);
int cmd_help(char *argv);
int cmd_jobs(char *argv);
int cmd_bgfg(char *argv);
pid_t Fork();

typedef int(*cmdFnProcessor)(char *argv);
typedef struct {
  const char *cmd;
  cmdFnProcessor cmdFn;
  const char *help;
}cmdEntry_t;

extern cmdEntry_t cmdsTable[];
extern char *path[];
