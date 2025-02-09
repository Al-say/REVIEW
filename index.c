#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_header() {
    printf("Content-type: text/html\n\n");
}

void print_style() {
    printf("<style>\n");
    printf("pre { background-color: #f5f5f5; padding: 15px; border-radius: 5px; }\n");
    printf("body { font-family: monospace; max-width: 800px; margin: 20px auto; padding: 0 20px; }\n");
    printf("</style>\n");
}

int main() {
    print_header();
    printf("<!DOCTYPE html>\n<html>\n<head>\n");
    printf("<title>C Language Website</title>\n");
    printf("<meta charset=\"UTF-8\">\n");
    print_style();
    printf("</head>\n<body>\n");

    printf("<h1>C���Ա�д����վ</h1>\n");
    
    printf("<pre>\n");
    printf("#include &lt;stdio.h&gt;\n");
    printf("#include &lt;stdlib.h&gt;\n\n");
    printf("int main() {\n");
    printf("    printf(\"Welcome to my C website!\\n\");\n");
    printf("    return 0;\n");
    printf("}\n");
    printf("</pre>\n");

    printf("<h2>�ص㣺</h2>\n");
    printf("<pre>\n");
    printf("1. ʹ��C���Ա�д\n");
    printf("2. ��Ч���ڴ����\n");
    printf("3. ֱ��ϵͳ����\n");
    printf("4. ����ִ���ٶ�\n");
    printf("</pre>\n");

    printf("<h2>����ʾ����</h2>\n");
    printf("<pre>\n");
    printf("/* ��Ч���ڴ����ʾ�� */\n");
    printf("void *memory = malloc(1024);\n");
    printf("if (memory != NULL) {\n");
    printf("    /* ʹ���ڴ� */\n");
    printf("    free(memory);\n");
    printf("}\n");
    printf("</pre>\n");

    printf("<h2>ϵͳ��Ϣ��</h2>\n");
    printf("<pre>\n");
    printf("Compiled time: %s %s\n", __DATE__, __TIME__);
    printf("File: %s\n", __FILE__);
    printf("</pre>\n");

    printf("</body>\n</html>");
    return 0;
}
