#include <stdio.h>
#include <string.h>
#include <map>

int main() { 
    std::map<char, char> lib;
    std::map<char, char> lib2;
    std::map<char, char> lib3;
    int i;
    char j, k;
    char n[100];
    
    // 初始化映射表
    for (j = 'a', k = '1'; j <= 'i'; j++, k++) {
        lib[j] = k;
        lib[k] = j;
    }

    for (j = 'j', k = '1'; j <= 'r'; j++, k++) {
        lib[j] = k;
        lib2[k] = j;
    }

    for (j = 's', k = '1'; j <= 'z'; j++, k++) {
        lib[j] = k;
        lib3[k] = j;
    }

    // 加密或解密第一行输入
    gets(n);
    int t = 0;
    for (i = 0; i < strlen(n); i++) {
        if (n[i] == '0') {
            t++;
            continue;
        }
        if (lib.find(n[i]) != lib.end()) {
            if (n[i] > 'i' && n[i] <= 'r') {
                printf("0");
            }
            if (n[i] > 'r' && n[i] <= 'z') {
                printf("00");
            }
            if (t == 0) {
                printf("%c", lib[n[i]]);
                t = 0;
            }
            if (t == 1) {
                printf("%c", lib2[n[i]]);
                t = 0;
            }
            if (t == 2) {
                printf("%c", lib3[n[i]]);
                t = 0;
            }
        } else {
            printf("%c", n[i]);
        }
    }

    // 加密或解密第二行输入
    gets(n);
    t = 0;
    for (i = 0; i < strlen(n); i++) {
        if (n[i] == '0') {
            t++;
            continue;
        }
        if (lib.find(n[i]) != lib.end()) {
            if (n[i] > 'i' && n[i] <= 'r') {
                printf("0");
            }
            if (n[i] > 'r' && n[i] <= 'z') {
                printf("00");
            }
            if (t == 0) {
                printf("%c", lib[n[i]]);
                t = 0;
            }
            if (t == 1) {
                printf("%c", lib2[n[i]]);
                t = 0;
            }
            if (t == 2) {
                printf("%c", lib3[n[i]]);
                t = 0;
            }
        } else {
            printf("%c", n[i]);
        }
    }

    return 0;
}