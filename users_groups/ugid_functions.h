#include <pwd.h>
char * userNameFromId(uid_t uid);
uid_t userIdFromName(const char *name);
char * groupNameFromId(gid_t gid);
gid_t gourpIdFromName(const char *name);

