gcc -o joetest -Wall -Werror -Wextra ../../testingFiles/main.c ../../testingFiles/libtest.a ./*.c

./joetest
rm joetest 
norminette -R CheckForbiddenSourceHeader

