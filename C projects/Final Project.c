#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define tam 100

typedef struct Produto{

    char nome[100];
    int codigo;
    float preco;
    int estoque;
    float vendas;
    int data;
    float quantVendas;

} Produto;

void cadastra(struct Produto p[tam], int n){

    printf("Qual o nome do Produto?\n");
    setbuf(stdin, NULL);
    fgets(p[n].nome, 20, stdin);

    printf("Qual o c�digo do produto?\n");
    scanf("  %d", &p[n].codigo);

    printf("Qual o pre�o unit�rio do produto?\n");
    scanf("  %f", &p[n].preco);

    printf("Qual a quantidade em estoque do produto?\n");
    scanf("  %d", &p[n].estoque);

    }

void info_Produto(struct Produto prod){

    printf("\n\n Nome: %s C�digo: %d\n Pre�o unit�rio: R$ %.2f\n Estoque: %d itens\n Vendas: %.0f  venda(s) foi/foram realizada(s)!\n Montante de vendas: %.0f unidades\n\n",
               prod.nome, prod.codigo, prod.preco,
               prod.estoque, prod.vendas, prod.quantVendas);

}

void Ranking(struct Produto listaDeVendas[], int Registros){

    struct Produto lista[Registros];
    for(int i = 0; i < Registros; i++){

        lista[i].codigo = 0;
        lista[i].data = 0;
        lista[i].vendas = 0;
        lista[i].codigo = 0;
        lista[i].preco = 0;

        strcpy(lista[i].nome,"");
    }
    for(int i = 0; i < Registros; i++){
        for(int j = 0; j < Registros; j++){
            if(listaDeVendas[i].codigo == lista[j].codigo){
                lista[j].vendas += listaDeVendas[i].vendas;
            }
            if(j == Registros-1)
                lista[i] = listaDeVendas[i];
        }
    }
    for(int i = 0; i < Registros; i++){
        for(int j = 0; j < Registros; j++){
            if(lista[i].vendas < lista[j].vendas){
                struct Produto vendaAux = lista[i];
                lista[i] = lista[j];
                lista[j] = vendaAux;
            }
        }
    }
    for(int i = Registros - 1; i >= 0; i--){
        if(lista[i].codigo != 0){
            if((Registros - i) < 100)
                printf("\n*------ 0%d� Produto mais vendido -------*", Registros - i);
            else
                printf("\n*------ %d� Produto mais vendido ------*", Registros - i);
            printf("\n- C�digo do produto: %d",lista[i].codigo);
            printf("\n- Vendas: %.0f",lista[i].vendas);
            printf("\n- Nome do produto: %s", lista[i].nome);
            printf("- Pre�o Total: R$%.2f",lista[i].preco*lista[i].vendas);
                printf("\n*--------------------------------------*\n\n");

        }
    }
}

int num(int numero, struct Produto *todos){

    for (int i = 0; i < 100; i++){
            for(int j = 0; j < 100; j++){
        if (numero == todos[i].codigo){
            return 1;
        }
    }
}
    return 0;
}

int EncontraCodigo(int num, struct Produto *produtos){

    for (int i = 0; i < 100;i++){
        if (produtos[i].codigo == num){
            return i;
        }
    }
    return -1;
}

void procura_vender(struct Produto *todos, int registrados){

    int op;
    char op2;
    int quant;
    int numero;
    int indice;
    int mes;

    indice = EncontraCodigo(registrados, todos);

    printf("* Digite 1 para buscar por c�digo *: ");
            scanf("%d", &op);

    if(op != 1){
        printf("\n* N�o foi poss�vel prosseguir com a compra, tente novamente...\n\n");
        return;
    }

    if(op == 1){

        if((todos[indice].estoque = 0)){
            printf("\n* Sem estoque para realizar a opera��o!\n\n");
            return;
            }

        printf("* Digite o c�digo do produto: ");
        scanf("%d", &numero);

        if (!num(numero, todos)){
            printf("* Nao ha produtos com esse c�digo...\n");
            return;
        }
        indice = EncontraCodigo(numero, todos);
        printf("* Deseja realizar uma venda(s/n)?");
        scanf("%s", &op2);
        }

        if(op2 == 's'){

            printf("* Informe o m�s em que ser� realizada a venda(entre 1 e 12): ");
            scanf("%d", &mes);

            todos[indice].data = mes;

        if(mes < 1 || mes > 12){
            printf("M�s inv�lido!\n\n");
                return;}

            printf("* Informe a quantidade desse produto que ir� ser vendida: \n");
            scanf("%d", &quant);

            printf("\n* Total da venda R$: %.2f \n", todos[indice].preco*quant);
            printf("\n* Realizada no m�s: %d *\n", mes);
            printf("\n* Total de total de produtos vendidos nessa opera��o: %d\n", quant);

        if((todos[indice].estoque - quant) < 0){
                printf("\n* Estoque insuficente para essa opera��o!\n\n");
                        return;
            }else
            {
            printf("\n* Venda bem sucedida, atualizando estoque...\n\n");
        }
            todos[indice].estoque -= quant;
            todos[indice].vendas++;
            todos[indice].quantVendas += quant;

    }else if(op2 == 'n')
        {
            printf("\n* Retornando ao menu!\n\n");
            system("cls");
            return;
    }else
        printf("\n* Opera��o inv�lida! *\n\n");

}

void vendas_mes(struct Produto Vendas[], int quant){

        EncontraCodigo(quant, Vendas);
        int mes = -1;

        while (mes == -1){
            printf("\nDigite o m�s da venda: ");
            scanf("%d", &mes);
            if(mes < 1 || mes > 12){
                return;
            }
        }

        int RegFinal = 1000;
        float VendaTotal = 0;
        float precototal = 0;

        for(int i = 0; i < 100; i++){
            if(Vendas[i].vendas >= 0 && Vendas[i].vendas < RegFinal){
                VendaTotal += Vendas[i].vendas++;
                precototal += Vendas[i].preco*Vendas[i].vendas;
            }
            Vendas[i].vendas = 0;
            Vendas[i].preco = 0;
        }

        printf("\n* --------------------------------- *\n");
        printf("\n-> Quantidade de vendas no m�s %d: %.0f \n\n",mes, VendaTotal);
        printf("\n-> Valor total das vendas nesse m�s: R$ %.2f \n",precototal);
        printf("\n* --------------------------------- *\n\n");

        VendaTotal = 0;

}

void deleta(struct Produto *todos){

    int Num;

    printf("* Digite o c�digo do produto que deseja que seja deletado: ");
    scanf("%d", &Num);

    if (!num(Num, todos)){
        printf("[-] Produto de c�digo %d n�o encontrado...\n", Num);
        return;
    }
    int index = EncontraCodigo(Num, todos);

    memset(&todos[index], 0, sizeof(struct Produto));

    printf("* Produto foi Deletado com sucesso...\n");

    system("cls");
}

void imprime(struct Produto *cadastrados){

int found = 0;

    for (int i = 0; i < 100; i++){
        if (cadastrados[i].codigo != 0){
            found = 1;
            break;
        }
    }
    if (found == 0){
        printf("* Nenhum produto cadastrado no momento...\n\n");
        return;
    }
    printf("* Produtos cadastrados: \n");
    printf("\n");
    printf("+==========================+");
    for (int i = 0; i < 100; i++){
        if (cadastrados[i].codigo != 0)
            info_Produto(cadastrados[i]);
    }

    printf("+==========================+\n\n");


}

void altera(struct Produto *todos){
    int Num, op, i;
    char v2[] = "1 - Nome\n2 - C�digo\n3 - Pre�o\n4 - Estoque\n5 - Vendas\n";

    printf("* Digite o c�digo do produto: ");

    scanf("%d", &Num);

    if (!num(Num, todos)){
        printf("* Produto nao encontrado...\n");
        return;
    }
    i = EncontraCodigo(Num, todos);
    printf("%s", v2);
    printf(" Escolha qual campo mudar: ");
    scanf("%d", &op);
    getchar();
    switch (op){
        case 1:
            printf("* Altere o nome: ");
            setbuf(stdin, NULL);
            fgets(todos[i].nome, 100, stdin);
            break;

        case 2:
            printf("* Altere o pre�o: ");
            scanf("%f", &todos[i].preco);
            break;

        case 3:
            printf("* Altere o c�digo do produto: ");
            scanf("%d", &todos[i].codigo);
            if(num(todos[i].codigo, todos)){
                printf("* c�digo j� usado por outro produto....\n");
                printf("* Digite o c�digo do produto: ");
                scanf("%d", &todos[i].codigo);
                }

        case 4:
            printf("* Altere a quantidade em estoque do produto: ");
            scanf("%d", &todos[i].estoque);
            break;

        case 5:
            printf("* Altere o montante de vendas do produto: ");
            scanf("%f", &todos[i].vendas);
            break;

        default:
            printf("* Opcao n�o existe...\n");
    }
}

void salva(struct Produto *todosP){

    FILE *fp = fopen("stprod.txt", "wb+");
    if (fp == NULL){
        printf("* Erro ao salvar...");
    }else if(fp != NULL){
        fwrite(todosP, sizeof(struct Produto), 100, fp);
        printf("* Arquivado com sucesso!\n\n");
    }

    fclose(fp);
}

void carrega(struct Produto *todosP){

    FILE *fp = fopen("stprod.txt", "rb+");
    fread(todosP, sizeof(struct Produto), 100, fp);
    fclose(fp);
}

int main(){

    setlocale(LC_ALL,"");

    Produto P[tam];

    memset(P, 0, sizeof(P));

    int cadastrados = 0, op2;

    char nome[20];

    carrega(P);

        printf("*==================================*");

        printf("\n");

        printf(" *SISTEMA DE VENDAS GUILHERME TOSI* ");

        printf("\n");

        printf("*=================================*\n");

        printf("\n");

        printf("* Digite seu nome: %s\n\n", nome);

        fgets(nome, 20, stdin);

        printf("\n Ol�, %s", nome);

        printf("\n");

    while((cadastrados < tam)){

        printf("* Produtos cadastrados: %d *\n\n", cadastrados);

        printf("(1) - Cadastrar novo produto\n(2) - Listar produtos\n(3) - Procurar por produto por c�digo para realizar venda\n(4) - Alterar dados\n(5) - Deletar dados\n(6) - Arquivar dados\n(7) - Limpar dados anteriores\n(8) - Produtos mais vendidos\n(9) - Vendas de um m�s\n(10) - Sair\n\n");
        scanf("%d", &op2);

    switch(op2){

    case 1:
         cadastra(P, cadastrados);
         cadastrados++;
         break;

    case 2:
        imprime(P);
        break;

    case 3:
        if(cadastrados == 0){
            printf("\n* N�o h� cadastrados no momento!\n\n!");
        }else
            procura_vender(P, cadastrados);
        break;

    case 4:
        altera(P);
        break;

    case 5:
        deleta(P);
        break;

    case 6:
        salva(P);
        break;

    case 7:
        system("cls");
        break;

    case 8:
        Ranking(P, cadastrados);
        break;

    case 9:
        vendas_mes(P, cadastrados);
        break;

    case 10:
        printf("\n* Espero que tenha um �timo dia! *\n\n");
        exit(0);

        default:
            printf("\n* Comando inexistente, tente novamente!\n\n");
    }
}
    return 0;
}
