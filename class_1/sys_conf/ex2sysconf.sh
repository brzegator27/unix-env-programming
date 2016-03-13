#!/bin/bash

echo "#include <stdio.h>"
echo "#include <unistd.h>"
echo "#include <limits.h>"
echo "#include <errno.h>"

echo "int main(void) {"
echo "long r;"

for i in `cat sysconf.list.txt | grep _SC`
do
    echo '#ifdef '$i
    echo "errno = 0;"
    echo "r = sysconf($i);"
    echo "  if (r == -1) {
                if (errno == EINVAL) {
                    printf(\"The name $i is invalid.\\\\n\");
                } else {
                    printf(\"The $i has no definite limit\\\\n\");
                }
            } else { "
    echo "      printf(\"The value of $i is %d\\\\n\", (int)r);"
    echo "  }"
    echo "#else"
    echo "printf(\"The $i is undefined.\\\\n\");"
    echo '#endif'
done

echo "return 0;"
echo "}"