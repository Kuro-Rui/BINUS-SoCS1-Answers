#include <stdio.h>

int main() {
    char S[101];
    scanf("%100[^\n]", S);
    puts("#include <stdio.h>");
    puts("int main()");
    puts("{");
    printf("    printf(\"%%s\\n\",\"%s\");\n", S);
    puts("    return 0;");
    puts("}");
    return 0;
}