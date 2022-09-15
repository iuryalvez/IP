#include <stdio.h>  
 
int main () {
 
    unsigned long int CODIGO;
    double PRECO_COMPRA, PRECO_VENDA;
    int VENDAS_DE_MERC; 
    double RES_VENDA, GASTO_COMPRA, PERCENT_LUCRO;
    int MERC_MAIS_VENDIDA = 0;
    double MAIOR_PERCENT_L = 0; 
    int r = 0; 
    int s = 0; 
    int t = 0;
    unsigned long int u, v;
    double x = 0; 
    double y = 0;
    double z;
 
    while ((scanf("%lu %lf %lf %i", &CODIGO, &PRECO_COMPRA, &PRECO_VENDA, &VENDAS_DE_MERC)) != EOF) {
 
        GASTO_COMPRA = PRECO_COMPRA * VENDAS_DE_MERC;
        
        RES_VENDA = PRECO_VENDA * VENDAS_DE_MERC;
        
        PERCENT_LUCRO = 100 - (GASTO_COMPRA*100 / RES_VENDA);
        
        if (RES_VENDA < 1.1*GASTO_COMPRA) r++;
        
        else if (RES_VENDA >= 1.1*GASTO_COMPRA    && RES_VENDA <= 1.2*GASTO_COMPRA) s++;
        
        else if (RES_VENDA > 1.2*GASTO_COMPRA) t++;
        
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
        z = (y - x)*100 / x;
   
    }
    
    printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %i\n", r);
    printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %i\n", s);
    printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %i\n", t);
    printf("Codigo da mercadoria que gerou maior lucro: %lu\n", u);
    printf("Codigo da mercadoria mais vendida: %lu\n", v);
    printf("Valor total de compras: %.2f, valor total de vendas: %.2f e percentual de lucro total: %.2f%%\n", x, y, z);   
 
    return 0;
}