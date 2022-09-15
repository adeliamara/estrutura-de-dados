ypedef char ItemPilha;

typedef struct pilha {
    int max;  // Capacidade da pilha
    int topo; // Posi��o do topo
    ItemPilha *item; // Itens da pilha
} *Pilha;

Pilha criarPilha(int tamanho) {
    Pilha pilha = malloc(sizeof(struct pilha)); // Aloca �rea na mem�ria

    pilha->max = tamanho; // indica capacidade de itens da pilha
    pilha->topo = -1; // Indica que a pilha est� (inicialmente) vazia
    pilha->item = malloc(sizeof(ItemPilha));

    return pilha;
}

void empilhar(ItemPilha itemp, Pilha pilha) {

    if( !ehPilhaCheia(pilha)) {

        pilha->topo++;
        pilha->item[pilha->topo] = itemp;
    } else {
        printf("Pilha cheia!");
        abort();
    }

}

ItemPilha desempilhar(Pilha pilha) {
    
    if( ehPilhaVazia(pilha)) { puts("A pilha est� vazia!"); abort(); }
    
    ItemPilha item = pilha->item[pilha->topo];
    pilha->topo--;

    return item;
}

void destruirPilha(Pilha *ponteiroPilha) {
    
    free((*ponteiroPilha)->item);
    free(*ponteiroPilha);
    *ponteiroPilha = NULL;
}

int ehPilhaVazia(Pilha pilha) {
    return pilha->topo == -1;
}

int ehPilhaCheia(Pilha pilha) {
    return pilha->topo == pilha->max-1;
}

ItemPilha getTopo(Pilha pilha) {

    if( ehPilhaVazia(pilha)) { puts("A pilha est� vazia!"); abort(); }
    return pilha->item[pilha->topo];

}