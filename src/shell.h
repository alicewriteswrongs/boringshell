#include <stdio.h>

/* data structures */
typedef struct {
				char* progname;
			  int redirect[2];
				char* args[];
} cmd_struct;

int promptLine(char *prompt, char **line, size_t *len);
cmd_struct* parse_command(char* str);
char* next_non_empty(char **line);
pid_t forkexec(cmd_struct* command);
