#include "apue.h"
#ifdef SOLARIS
#include <sys/mkdev.h>
#include <sys/sysmacros.h>  // 添加这行
#endif

int
main(int argc, char *argv[])
{
    int i;
    struct stat buf;

    for (i = 1; i < argc; i++) {
        printf("%s: ", argv[i]);
        if (stat(argv[i], &buf) < 0) {
            err_ret("stat error");
            continue;
        }

        printf("dev = %d/%d", gnu_dev_major(buf.st_dev), gnu_dev_minor(buf.st_dev));

        if (S_ISCHR(buf.st_mode) || S_ISBLK(buf.st_mode)) {
            printf(" (%s) rdev = %d/%d",
                   (S_ISCHR(buf.st_mode)) ? "character" : "block",
                   gnu_dev_major(buf.st_rdev), gnu_dev_minor(buf.st_rdev));
        }
        printf("\n");
    }

    exit(0);
}

