# 创建libapue静态库
add_library(apue ../lib/error.c)
#添加可执行文件
add_executable(hello hello.c)
target_link_libraries(hello apue)

add_executable(ls1 ls1.c)
target_link_libraries(ls1 apue)

add_executable(getcputc getcputc.c)
target_link_libraries(getcputc apue)

add_executable(mycat mycat.c)
target_link_libraries(mycat apue)

add_executable(shell1 shell1.c)
target_link_libraries(shell1 apue)

add_executable(testerror testerror.c)
target_link_libraries(testerror apue)

add_executable(shell2 shell2.c)
target_link_libraries(shell2 apue)

add_executable(uidgid uidgid.c)
target_link_libraries(uidgid apue)