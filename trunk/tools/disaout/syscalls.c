/* List of system calls, per UNIX version */
#include "aout.h"


struct syscallinfo v1syscalls[]= {
	{ "rele", 0 },
	{ "exit", 0 },
	{ "fork", 0 },
	{ "read", 2 },
	{ "write", 2 },
	{ "open", 2, },
	{ "close", 0 },
	{ "wait", 0 },
	{ "creat", 2 },
	{ "link", 2 },
	{ "unlink", 1 },
	{ "exec", 2 },
	{ "chdir", 1 },
	{ "time", 0 },
	{ "mkdir", 2 },
	{ "chmod", 2 },
	{ "chown", 2 },
	{ "break", 1 },
	{ "stat", 2 },
	{ "seek", 2 },
	{ "tell", 3 },
	{ "mount", 2 },
	{ "umount", 1 },
	{ "setuid", 1 },
	{ "getuid", 1 },
	{ "stime", 0 },
	{ "quit", 1 },
	{ "intr", 1 },
	{ "fstat", 2 },
	{ "cemt", 1 },
	{ "smdate", 1 },
	{ "stty", 2 },
	{ "gtty", 2 },
	{ "ilgins", 1 }
};

struct syscallinfo bsd211syscalls[]= {
  { "indir", 0 },
  { "exit", 0 },
  { "fork", 0 },
  { "read", 0 },
  { "write", 0 },
  { "open", 0 },
  { "close", 0 },
  { "wait4", 0 },
  { NULL, 0 },
  { "link", 0 },
  { "unlink", 0 },
  { "execv", 0 },
  { "chdir", 0 },
  { "fchdir", 0 },
  { "mknod", 0 },
  { "chmod", 0 },
  { "chown", 0 },
  { "chflags", 0 },
  { "fchflags", 0 },
  { "lseek", 0 },
  { "getpid", 0 },
  { "mount", 0 },
  { "umount", 0 },
  { "__sysctl", 0 },
  { "getuid", 0 },
  { "geteuid", 0 },
  { "ptrace", 0 },
  { "getppid", 0 },
  { NULL, 0 },
  { NULL, 0 },
  { NULL, 0 },
  { "sigaction", 0 },
  { "sigprocmask", 0 },
  { "access", 0 },
  { "sigpending", 0 },
  { "sigaltstack", 0 },
  { "sync", 0 },
  { "kill", 0 },
  { "stat", 0 },
  { "_getlogin", 0 },
  { "lstat", 0 },
  { "dup", 0 },
  { "pipe", 0 },
  { "setlogin", 0 },
  { "profil", 0 },
  { "setuid", 0 },
  { "seteuid", 0 },
  { "getgid", 0 },
  { "getegid", 0 },
  { "setgid", 0 },
  { "setegid", 0 },
  { "acct", 0 },
  { "phys", 0 },
  { "lock", 0 },
  { "ioctl", 0 },
  { "reboot", 0 },
  { NULL, 0 },
  { "symlink", 0 },
  { "readlink", 0 },
  { "execve", 0 },
  { "umask", 0 },
  { "chroot", 0 },
  { "fstat", 0 },
  { NULL, 0 },
  { NULL, 0 },
  { "pselect", 0 },
  { "vfork", 0 },
  { NULL, 0 },
  { NULL, 0 },
  { "sbrk", 0 },
  { NULL, 0 },
  { NULL, 0 },
  { NULL, 0 },
  { NULL, 0 },
  { NULL, 0 },
  { NULL, 0 },
  { "vhangup", 0 },
  { NULL, 0 },
  { NULL, 0 },
  { "getgroups", 0 },
  { "setgroups", 0 },
  { "getpgrp", 0 },
  { "setpgrp", 0 },
  { "setitimer", 0 },
  { NULL, 0 },
  { NULL, 0 },
  { "getitimer", 0 },
  { NULL, 0 },
  { NULL, 0 },
  { "getdtablesize", 0 },
  { "dup2", 0 },
  { NULL, 0 },
  { "fcntl", 0 },
  { "select", 0 },
  { NULL, 0 },
  { "fsync", 0 },
  { "setpriority", 0 },
  { "socket", 0 },
  { "connect", 0 },
  { "accept", 0 },
  { "getpriority", 0 },
  { "send", 0 },
  { "recv", 0 },
  { "sigreturn", 0 },
  { "bind", 0 },
  { "setsockopt", 0 },
  { "listen", 0 },
  { "sigsuspend", 0 },
  { NULL, 0 },
  { NULL, 0 },
  { NULL, 0 },
  { NULL, 0 },
  { "old sigstack", 0 },
  { "recvmsg", 0 },
  { "sendmsg", 0 },
  { NULL, 0 },
  { "gettimeofday", 0 },
  { "getrusage", 0 },
  { "getsockopt", 0 },
  { NULL, 0 },
  { "readv", 0 },
  { "writev", 0 },
  { "settimeofday", 0 },
  { "fchown", 0 },
  { "fchmod", 0 },
  { "recvfrom", 0 },
  { NULL, 0 },
  { NULL, 0 },
  { "rename", 0 },
  { "truncate", 0 },
  { "ftruncate", 0 },
  { "flock", 0 },
  { NULL, 0 },
  { "sendto", 0 },
  { "shutdown", 0 },
  { "socketpair", 0 },
  { "mkdir", 0 },
  { "rmdir", 0 },
  { "utimes", 0 },
  { NULL, 0 },
  { "adjtime", 0 },
  { "getpeername", 0 },
  { NULL, 0 },
  { NULL, 0 },
  { "getrlimit", 0 },
  { "setrlimit", 0 },
  { "killpg", 0 },
  { NULL, 0 },
  { "setquota", 0 },
  { "quota", 0 },
  { "getsockname", 0 },
  { NULL, 0 },
  { "nostk", 0 },
  { "fetchi", 0 },
  { "ucall", 0 },
  { "fperr", 0 },
};

struct syscallinfo *systab=v1syscalls;	/* Pointer to one of the following tables */
int numsyscalls= 34;
