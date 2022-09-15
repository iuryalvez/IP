#include <stdio.h>  

int main () {

    unsigned long int CODIGO, u, v;
    float PRECO_COMPRA, PRECO_VENDA;
    float GASTO_COMPRA, PERCENT_LUCRO;
    float MAIOR_PERCENT_L = 0; 
    int VENDAS_DE_MERC; 
    int MERC_MAIS_VENDIDA = 0;
    int r = 0; 
    int s = 0; 
    int t = 0;
    float x = 0; 
    float y = 0;
    float z;
    
    for ( ; scanf("%lu %f %f %i", &CODIGO, &PRECO_COMPRA, &PRECO_VENDA, &VENDAS_DE_MERC) != EOF; ) {
        
        PERCENT_LUCRO = 100 - (PRECO_COMPRA*100 / PRECO_VENDA);

        temp = (PRECO_COMPRA - PRECO_VENDA)*VENDAS_DE_MERC;
    
        if (PERCENT_LUCRO < 10) r++;
        
        else if (PERCENT_LUCRO >= 10 && PERCENT_LUCRO <= 10) s++;
        
        else if (PERCENT_LUCRO > 10) t++;
        
        if (PERCENT_LUCRO > MAIOR_PERCENT_L) {
            MAIOR_PERCENT_L = PERCENT_LUCRO;
            u = CODIGO;
        }
        
        if (VENDAS_DE_MERC > MERC_MAIS_VENDIDA) {
            MERC_MAIS_VENDIDA = VENDAS_DE_MERC;
            v = CODIGO;
        }
        
        x += (PRECO_COMPRA*VENDAS_DE_MERC);
        y += (PRECO_VENDA*VENDAS_DE_MERC);
   
    }
    z = (y - x)*100 / x;
    
    printf("Quantidade de mercadorias que geraram lucro menor que 10%% e menor ou igual a 20%%: %i\n", );
    printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %i\n", );
    printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %i\n", );
    printf("Codigo da mercadoria que gerou maior lucro: %lu\n", );
    printf("Codigo da mercadoria mais vendida: %lu\n", );
    printf("Valor total de compras: %.2f, valor total de vendas: %.2f e percentual de lucro total: %.2f%%\n", );   

    return 0;
}