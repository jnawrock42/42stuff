gcc -o joetest -Wall -Werror -Wextra ../../testingFiles/main.c ../../testingFiles/libtest.a ./*.c

./joetest
./joetest asdf
./joetest z
./joetest asdf zxcv
./joetest asdf qwer zxcv uiop hjkl
./joetest asdf qwer xcv uiop hjkl
./joetest '' '' z '' ''
./joetest '' '' a '' ''
./joetest zxcv asdf
./joetest zxcv asdf zxcv
./joetest z z z z z
./joetest asdf qwer io uiop zxcxcvzzzzzz
rm joetest 
norminette -R CheckForbiddenSourceHeader