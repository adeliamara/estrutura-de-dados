#include <stdio.h>

main(){
    int anos, meses, dias;

    printf("Digite a idade em anos:meses:dias ");
    scanf("%d:%d:%d", &anos, &meses, &dias);

    dias = anos * 365 + meses * 30 + dias;

    printf("%d dias", dias);
}