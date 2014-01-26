/* Declaration of the functions */
int cmd_quit(int argc, char *argv[]);
int cmd_help(int argc, char *argv[]);
int cmd_jobs(int argc, char *argv[]);
int cmd_bg(int argc, char *argv[]);
int cmd_fg(int argc, char *argv[]);
int eval_external(char *argc, char *argv[]);

typedef int(*cmdFnProcessor)(int argc, char *argv[]);
typedef struct {
  const char *cmd;
  cmdFnProcessor cmdFn;
  const char *help;
}cmdEntry_t;

extern cmdEntry_t cmdsTable[];
extern char *path[];
