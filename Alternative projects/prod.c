#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <unistd.h>



int main(int argc, char *argv[])
 {
        time_t hora;
        char linha[100];
        char linha1[100];
        char linha2[100];
        char linha3[100];
        char linha4[100];
        char linha5[100];
        char linha6[100];
        char linha7[100];
        char linha8[100];
        char linha9[100];
        char linha10[100];
        char linha11[100];
        char linha12[100];
         char linhafunc[100];
        char linha1func[100];
        char linha2func[100];
        char linha3func[100];
        char linha4func[100];
        char linha5func[100];
        char linha6func[100];
        char linha7func[100];
        char linha8func[100];
        char linha9func[100];
        char linha10func[100];
        char linha11func[100];
        char linha12func[100];
        char corproduto[10][100]; // cor do produto para salvar
        int quantcorprod;
       int tamanhoprod[12]; //12 tipos de tamanho
       int quantidadetamanho; // numero de tamanhos diferentes pra scanear no registro do tamanho
       int quantidadetamanhoprod; // numero pra salvar a Quantidade de produtos deste tamanho no estoque
        char       * ini_name ;
        char *       nomeprodutosalvo; // pega o nome do produto salvo.
        float infopreco,quantpreco;
        char nomeprod[200],localprod[300],localfunc[300],localfuncnovo[200],info[500],infopre[100],infoquant[100],infocod[100],senha[30];
        char nomefunc[100];
        char *  nomefuncionario; // nome pra pegar e alterar
        int opcao,tecla,teclasair,teclagerenciar,nprod,nfunc,i,quantprod,quantprodvendida,MAX_PROD = 2000,teclafuncionarios,codigofunc,codigofuncantigo,nvendas;
        int nvendasantes,nvendasmenor; // vendas antes,no caso o que esta no arquivo,numero de vendas do produto,nvendasmenor para pegar o menor numero de vendas pro relatorio
        int ncores; // numero de cores que o produto vai ter,pra registrar
        time_t currentTime;
        struct tm *timeinfo;
        float preco;
        system("mode con:cols=150 lines=30"); // definir tamanho da tela
        MENU:
            system ("cls");
            system("title Gerenciar Estoque/funcionarios");
            system ("color f9");
                while (!kbhit()){

                    system ("cls");
                    printf("1-Gerenciar Estoque\n");
                    printf("2-Gerenciar Funcionarios\n");
                     printf("3-Ver relatorios\n");
                    /* Pega a hora atual do sistema. */
                    currentTime= time(NULL);
                    /* Converte-o em uma estrutura tm. */
                    timeinfo= localtime(&currentTime);
                    printf("\n\n\n\n\n\n\n\n\n\n                                                    Hora Atual : %02d:%02d:%02d do dia : %02d/%02d/%02d \n", timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec,timeinfo->tm_mday,timeinfo->tm_mon+1,timeinfo->tm_year+1900);
                    Sleep(500);
                }
    tecla = getch();
 	switch(tecla){
 		case 49:
                while (!kbhit()){
                    Sleep(500);
                    system ("cls");
                    printf("1-Cadastrar Produto\n");
                    printf("2-Consultar Produto\n");
                    printf("3-Ver Estoque\n");
                    printf("4-Registrar Venda\n");
                    printf("5-Excluir produto\n");
                    printf("6-Editar produto\n");
                    /* Pega a hora atual do sistema. */
                    currentTime= time(NULL);
                    /* Converte-o em uma estrutura tm. */
                    timeinfo= localtime(&currentTime);
                    printf("\n\n\n\n\n\n\n\n\n\n                                                     Hora Atual : %02d:%02d:%02d no dia : %02d/%02d/%02d \n", timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec,timeinfo->tm_mday,timeinfo->tm_mon+1,timeinfo->tm_year+1900);

                }
                    teclagerenciar = getch();
                	switch(teclagerenciar){
                        case 49:
                        system ("cls");
                        printf("________________________Cadastro de Produto____________________________\n");
                                    // registrar produto
                                    printf("1-Coloque o nome do produto: ");
                                    scanf("%s",&nomeprod);
                                    REPETIRCODIGO:
                                    printf("Coloque o codigo do produto  %s:",nomeprod);
                                    scanf("%d",&nprod);
                                    sprintf(localprod,"produtos\\%d.ini",nprod);
                                     if(ini = fopen( localprod, "r") != 0){
                                            printf("Ja existe um produto com esse Codigo!\n");
                                            goto REPETIRCODIGO;
                                        }

                                printf("Coloque o preco do produto  %s:",nomeprod);
                                scanf("%f",&infopreco);
                                printf("Coloque a quantidade do produto  %s:",nomeprod);
                                scanf("%d",&quantprod);
                                system ("cls");
                                system("color 4E");
                                printf("Voce registrou o produto: %s \ncodigo : %d\nQuantidade : %d\nPreco : %.2f",nomeprod,nprod,quantprod,infopreco);
                                Beep(1000,500);
                                if (argc<2) {
                                    ini_name = localprod;
                                } else {
                                    ini_name = argv[1] ;
                                }
                                ini = fopen(localprod, "w");
                                fprintf(ini,
                                "#\n"
                                "# Informacoes do produto\n"
                                "#\n"
                                "\n"
                                "[info]\n"
                                "\n"
                                "nome       = %s ;\n"
                                "codigo = %d ;\n"
                                "preco   = %f ;\n"
                                "quantidade    = %d ;\n"
                                "produto cadastrado = %02d:%02d:%02d no dia : %02d/%02d/%02d;\n"

                                "Quantidade_vendida = 0;\n"
                                "[cores]\n",nomeprod,nprod,infopreco,quantprod,timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec,timeinfo->tm_mday,timeinfo->tm_mon+1,timeinfo->tm_year+1900);
                                fclose(ini);
                               /* Pega a hora atual do sistema. */
                              currentTime= time(NULL);
                               /* Converte-o em uma estrutura tm. */
                              timeinfo= localtime(&currentTime);
                               Sleep(2000);
                               system ("cls");
                               // segunda etapa,registrar cor e tamanho
                               printf("________________________Cadastro de Cores____________________________\n");
                               printf("Quantas cores o produto %s vai ter?",nomeprod);
                               scanf("%d",&ncores);
                                for(i=1;i<=ncores;i++){

                                printf("Coloque a %d cor:\n",i);
                                   scanf("%s",&corproduto[i]);
                                   printf(" Coloque quantidade de produto desta cor:\n");
                                    scanf("%d",&quantcorprod);
                                    if(i<ncores){
                                   ini = fopen(localprod,"a");
                                    fprintf(ini,"%s=%d;\n",corproduto[i],quantcorprod);
                                    fclose(ini);
                                    }
                                    if(i==ncores)
                                    {
                                         ini = fopen(localprod,"a");
                                    fprintf(ini,"%s=%d\n",corproduto[i],quantcorprod);
                                    fclose(ini);
                                    }
                                }

                              Sleep(1000);
                                system("cls");
                                printf("_____________________Cadastro de Tamanhos________________________\n");
                                printf("Quantos tamanhos deseja registrar para o produto %s",nomeprod);
                                scanf("%d",&quantidadetamanho);
                                 ini = fopen(localprod,"a");
                                    fprintf(ini,"[tamanhos]\n",corproduto[i],quantcorprod);
                                    fclose(ini);
                                for(i=1;i<=quantidadetamanho;i++)
                                {
                                    if(i<quantidadetamanho)
                                    {


                                    printf("Coloque o %d Tamanho do produto: \n",i);
                                    scanf("%d",&tamanhoprod[i]);
                                     printf("Coloque a quantidade de produtos com o tamanho %d: \n",tamanhoprod[i]);
                                    scanf("%d",&quantidadetamanhoprod);
                                     ini = fopen(localprod,"a");
                                    fprintf(ini,"%d=%d;\n",tamanhoprod[i],quantidadetamanhoprod);
                                    fclose(ini);
                                    }
                                    if(i==quantidadetamanho)
                                    {
                                        printf("Coloque o %d Tamanho do produto: \n",i);
                                    scanf("%d",&tamanhoprod[i]);
                                     printf("Coloque a quantidade de produtos com o tamanho %d: \n",tamanhoprod[i]);
                                    scanf("%d",&quantidadetamanhoprod);
                                         ini = fopen(localprod,"a");
                                    fprintf(ini,"%d=%d\n",tamanhoprod[i],quantidadetamanhoprod);
                                    fclose(ini);
                                    }

                                }
                            printf("Você completou o registro do produto %s",nomeprod);
                               Sleep(1200);
                              goto MENU;

               break;
// consultar produto
    teclagerenciar = 0;
    int teclaconsulta;
                case 50:
                    system ("cls");
                    printf("1-Consultar por Codigo \n");
                    printf("2-Consultar por nome \n");
                    teclaconsulta = getch();
                    switch(teclaconsulta){
                           case 49: // numero 1
                                system ("cls");
                                system("color 8F");
                                consultarprod:
                                printf("___________________________________________\n");
                                printf("Coloque o codigo do produto a ser consultado: \n");
                                printf("___________________________________________\n");
                                scanf("%d",&nprod);
                                sprintf(localprod,"produtos\\%d.ini",nprod);
                                ini = fopen(localprod, "r");
                                fscanf(ini,"%s",info);
                                while(fgets(info,200,ini) != NULL){
                                printf("%s",info);
                                }
                                Sleep(15000);
                            break;
                           case 50: //numero 2
                                system ("cls");
                                system("color 8F");

                                printf("___________________________________________\n");
                                printf("Coloque o nome do produto a ser consultado: \n");
                                printf("___________________________________________\n");
                                scanf("%s",&info);
                                char        *   s ;
                                for(i=0;i<= MAX_PROD;i++){
                                    sprintf(localprod,"produtos\\%d.ini",i);
                                    if(ini = fopen( localprod, "r") != 0){ // VER SE ARQUIVO EXISTE
                                        ini = fopen(localprod, "r");
                                        ini = iniparser_load(localprod);
                                        s =  iniparser_getstring(ini, "info:nome", NULL );

                                             if (strncmp (info,s,5) == 0){ // compara as strings,se tiver 5 letras iguais

                                            nprod =  iniparser_getint(ini, "info:codigo", NULL );
                                        quantprod =  iniparser_getint(ini, "info:quantidade", NULL );
                                        printf("Nome = %s      Codigo = %d     Quantidade = %d\n",s,nprod,quantprod);
                                            }
                                    }
                                }
                                Sleep(15000);
                            break; // PARA O SWITCH INTERNO
                        }
                goto MENU;
                    break; // PARA O SWITCH EXTERNO

    case 51:
        // ver produtos do estoque
                    system ("cls");
                    printf("Produtos no estoque :\n");
                    i=0; //ZERA  A VARIAVEL I PARA COMEÇAR A CONTAR
                    for(nprod =0; nprod<=500; nprod++){

                                sprintf(localprod,"produtos\\%d.ini",nprod);

                                  if(ini = fopen(localprod, "r") != 0){ // se o arquivo existir,somar o I e mostrar o nome.
                                         ini = iniparser_load(localprod);
                                        nomeprodutosalvo =  iniparser_getstring(ini, "info:nome", NULL );
                                        nprod =  iniparser_getint(ini, "info:codigo", NULL );
                                        quantprod =  iniparser_getint(ini, "info:quantidade", NULL );
                                        printf("Nome = %s      Codigo = %d     Quantidade = %d\n",nomeprodutosalvo,nprod,quantprod);
                                        i++;
                                }

                                    if(nprod == 500){
                                    printf("numero total de produtos : %d",i);
                                    }
                    }

                break;
	case 52: // registrar venda
            REGISTRARVENDA:
            system ("cls");
            printf("Digite o codigo do Produto para registrar venda :");
            scanf("%d",&nprod);
            printf("Digite o codigo do funcionario para registrar venda :");
            scanf("%d",&codigofunc);
            sprintf(localprod,"produtos\\%d.ini",nprod);
            sprintf(localfunc,"funcionarios\\%d.ini",codigofunc);

            // tirar o produto do estoque !
            ini = iniparser_load(localprod);
            quantprod = iniparser_getint(ini,"info:quantidade",-1);
            quantprodvendida = iniparser_getint(ini,"info:Quantidade_vendida",NULL);
            infopreco = iniparser_getint(ini,"info:preco",NULL);
            nomeprodutosalvo = iniparser_getstring(ini,"info:nome",NULL);
            if(quantprod == 0){
                system ("cls");
                Beep(3000,1000);
                printf("Esse produto nao existe no estoque!\n");
                Sleep(1500);
                goto REGISTRARVENDA;
            }

// checar se o produto e o funcionario existem
        if(ini = fopen( localfunc, "r") == 0){
            system ("cls");
            printf("nao existe um funcionario com esse codigo !\n");
            Beep(3000,1000);
            Sleep(1500);
            goto REGISTRARVENDA;
        }
        if(ini = fopen( localprod, "r") == 0){
            system ("cls");
            printf("nao existe um produto com esse codigo !\n");
            Beep(3000,1000);
            Sleep(1500);
            goto REGISTRARVENDA;
        }
ini = fopen(localprod,"r");
fgets(linha, 100, ini);  // #
fgets(linha1, 100, ini); // #
fgets(linha2, 100, ini); // #
fgets(linha3, 100, ini); //
fgets(linha4, 100, ini); //[info]
fgets(linha5, 100, ini); //
fgets(linha6, 100, ini);//nome
fgets(linha7, 100, ini);//codigo
fgets(linha8, 100, ini);//preco
fgets(linha9, 100, ini);//quantidade do estoque
fgets(linha10, 100, ini);//produto cadastrado
fgets(linha11, 100, ini); // produto cadastrado
fclose(ini);
ini = fopen(localprod,"w");
sprintf(linha9,"quantidade    = %d ;",quantprod-1); // edita a linha de quantidade estoque
sprintf(linha11,"Quantidade_vendida = %d",quantprodvendida+1); // edita a linha quantidade de produto vendido
fprintf(ini,"%s%s%s%s%s%s%s%s%s%s\n%s%s\n",linha,linha1,linha2,linha3,linha4,linha5,linha6,linha7,linha8,linha9,linha10,linha11);
fclose(ini); // \n no final pra poder indicar fim do arquivo

// dar a venda pro funcionario
ini = fopen(localfunc,"r");
fgets(linhafunc, 100, ini);  // #
fgets(linha1func, 100, ini); // #
fgets(linha2func, 100, ini); // #
fgets(linha3func, 100, ini); //
fgets(linha4func, 100, ini); //[info]
fgets(linha5func, 100, ini); //
fgets(linha6func, 100, ini);//nome
fgets(linha7func, 100, ini);//codigo
fgets(linha8func, 100, ini);//preco
fgets(linha9func, 100, ini);//quantidade
fgets(linha10func, 100, ini); // quantidade preço total
fgets(linha11func, 100, ini);//produto cadastrado
fclose(ini);
ini = iniparser_load(localfunc);
 nvendas = iniparser_getint(ini,"info:quantidade_de_produtos_vendidos",NULL);
  quantpreco = iniparser_getint(ini,"info:preço_total_das_vendas",NULL);
  int precototalvendas = infopreco + quantpreco;
ini = fopen(localfunc,"w");
sprintf(linha8func,"quantidade_de_produtos_vendidos   = %d ;\n",nvendas+1); // poi a quantidade de vendas pro vendedor
sprintf(linha9func,"preço_total_das_vendas   = %d ;\n",precototalvendas); // o preco vendido por ele
fprintf(ini,"%s%s%s%s%s%s%s%s%s%s%s",linhafunc,linha1func,linha2func,linha3func,linha4func,linha5func,linha6func,linha7func,linha8func,linha9func,linha10func,linha11func);
fclose(ini);
// por no relatorio
ini = iniparser_load(localfunc);
nomefuncionario = iniparser_getstring(ini,"info:nome",NULL);
ini = fopen("produtos\\relatorio.ini","a");
 /* Pega a hora atual do sistema. */
                    currentTime= time(NULL);
                    /* Converte-o em uma estrutura tm. */
                    timeinfo= localtime(&currentTime);
fprintf(ini,"o produto  [%s] foi vendido pelo funcionario(a) [%s]  ,Hora: %02d:%02d:%02d no dia : %02d/%02d/%02d \n",nomeprodutosalvo,nomefuncionario, timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec,timeinfo->tm_mday,timeinfo->tm_mon+1,timeinfo->tm_year+1900);
fclose(ini);
                		printf("venda registrada");
                		Beep(3000,500);
                		Sleep(1000);
                		goto REGISTRARVENDA;
	break;
	case 53:
            system ("cls");
            printf("Digite o codigo do Produto para ser excluido:  ");
            scanf("%d",&nprod);
            sprintf(localprod,"produtos\\%d.ini",nprod);
            if(remove(localprod) == 0){
		        printf("Produto com codigo %d foi removido com sucesso!\n",nprod);
		        Beep(3000,500);
		        Sleep(2000);
                system ("cls");
                goto MENU;

            }else{
                    system ("cls");
                    printf("Produto com codigo %d nao existe !.\n",nprod);
                    Beep(3000,1000);
                    Sleep(1000);
                    system ("cls");
                    goto MENU;
                }
        break;
    case 54:
         system ("cls");
         printf("1-Alterar Nome do  produto\n");
        printf("2-Alterar Codigo do  produto\n");
          printf("3-Alterar quantidade no estoque do  produto\n");
        printf("3-Alterar quantidade de produtos vendidos do produto\n");
        printf("4-Alterar Preco total das vendas do produto\n");

        int controlareditarprod = getch();
        switch(controlareditarprod)
        {
        case 49:
            printf("1");
            Sleep(5000); // pra nao sair bugado
            break;
        }
        // pra nao sair bugado
        break; // para o menu anterior

 	} // quebra o switch do 1 menu
break; // quebra o case 49
 	case 50: // NUMERO 2
 	    system ("cls");
        printf("1-Cadastrar Funcionario\n");
        printf("2-Alterar Dados de  Funcionario\n");
        printf("3-consultar Funcionario\n");
        printf("4-Excluir Funcionario\n");
        printf("5-Ver Funcionarios registrados\n");
        teclafuncionarios = getch();
        int teclacadastrar;
        switch(teclafuncionarios){
        // switch pra controle dos funcionarios
            case 49: // NUMERO 1
        //teclafuncionarios = getch();
                REPETIRFUNC:
                system ("cls");
                printf("Digite o nome do funcionario:\n");
                scanf("%s",&nomefunc);
                printf("Digite o novo codigo do funcionario:\n");
                scanf("%d",&codigofunc);
                sprintf(localfunc,"funcionarios\\%d.ini",codigofunc);
                if(ini = fopen( localfunc, "r") != 0){
                    printf("Ja existe um funcionario com esse codigo !\n");
                    goto REPETIRFUNC;
                }
                system ("cls");
                system("color 4E");
                printf("Funcionario Cadastrado :%s\nCodigo = %d",nomefunc,codigofunc);
                Beep(1000,500);
                if (argc<2) {
                    ini_name = localprod;
                } else {
                    ini_name = argv[1] ;
                }

                ini = fopen(localfunc, "w");

                fprintf(ini,
                "#\n"
                "# Informacoes do Funcionario\n"
                "#\n"
                "\n"
                "[info]\n"
                "\n"
                "nome       = %s ;\n"
                "codigo = %d ;\n"
                "quantidade_de_produtos_vendidos    = 0 ;\n"
                "preço_total_das_vendas = 0;\n"
                "Funcionario Cadastrado = %02d:%02d:%02d no dia : %02d/%02d/%02d  "
                "\n",nomefunc,codigofunc,timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec,timeinfo->tm_mday,timeinfo->tm_mon+1,timeinfo->tm_year+1900);
                fclose(ini);
                            Sleep(3000);
                            goto MENU;
                    break;
    case 50: // numero 2
        system ("cls");
        printf("1-Alterar Nome de  Funcionario\n");
        printf("2-Alterar Codigo de  Funcionario\n");
        printf("3-Alterar quantidade de produtos vendidos de um  Funcionario\n");
        printf("4-Alterar Preco total das vendas de um  Funcionario\n");
        int teclacontrole = getch();
        switch(teclacontrole){
            case 49: //alterar o nome do funcionario
                system ("cls");
                printf("____________________Alterar Nome de Funcionario____________\n");
                printf("1-Digite o codigo do  Funcionario\n");
// perguntar
                scanf("%d",&codigofunc);
                sprintf(localfunc,"funcionarios\\%d.ini",codigofunc);
                ini = iniparser_load(localfunc);
                nomefuncionario = iniparser_getstring(ini,"info:nome",-1);
                printf("Escreva o novo nome para o funcionario [%s]\n",nomefuncionario);
                scanf("%s",&nomefunc);
                                sprintf(localfunc,"funcionarios\\%d.ini",codigofunc);
                ini = fopen(localfunc,"r");
                fgets(linha, 100, ini);  // #
                fgets(linha1, 100, ini); // #
                fgets(linha2, 100, ini); // #
                fgets(linha3, 100, ini); //
                fgets(linha4, 100, ini); //[info]
                fgets(linha5, 100, ini); //
                fgets(linha6, 100, ini);//nome
                fgets(linha7, 100, ini);//codigo
                fgets(linha8, 100, ini);//preco
                fgets(linha9, 100, ini);//quantidade
                fgets(linha10, 100, ini);//produto cadastrado
                fgets(linha11, 100, ini);
                fclose(ini);
                ini = fopen(localfunc,"w");
                sprintf(linha6,"nome       = %s ;\n",nomefunc); // linha pra alterar o codigo
                fprintf(ini,"%s%s%s%s%s%s%s%s%s%s%s",linha,linha1,linha2,linha3,linha4,linha5,linha6,linha7,linha8,linha9,linha10,linha11);
                fclose(ini);

                break;
            case 50: // alterar codigo do funcionario
                system ("cls");
                printf("Digite o  codigo atual  do Funcionario\n");
                scanf("%d",&codigofuncantigo);
                printf("Digite o  codigo novo  para Funcionario\n");
                scanf("%d",&codigofunc);
                sprintf(localfunc,"funcionarios\\%d.ini",codigofuncantigo);
                sprintf(localfuncnovo,"funcionarios\\%d.ini",codigofunc);
                ini = fopen(localfunc,"r");
                fgets(linha, 100, ini);  // #
                fgets(linha1, 100, ini); // #
                fgets(linha2, 100, ini); // #
                fgets(linha3, 100, ini); //
                fgets(linha4, 100, ini); //[info]
                fgets(linha5, 100, ini); //
                fgets(linha6, 100, ini);//nome
                fgets(linha7, 100, ini);//codigo
                fgets(linha8, 100, ini);//preco
                fgets(linha9, 100, ini);//quantidade
                fgets(linha10, 100, ini);//produto cadastrado
                fgets(linha11, 100, ini);
                fclose(ini);
                ini = fopen(localfunc,"w");
                sprintf(linha7,"codigo = %d;\n",codigofunc); // linha pra alterar o codigo
                fprintf(ini,"%s%s%s%s%s%s%s%s%s%s%s",linha,linha1,linha2,linha3,linha4,linha5,linha6,linha7,linha8,linha9,linha10,linha11);
                fclose(ini);
                rename(localfunc,localfuncnovo);
                printf("O codigo foi Alterado de %d para %d",codigofuncantigo,codigofunc);
                Sleep(2000);
                break;
            case 51: // alterar quantidade de produtos vendidos por um funcionario
                system ("cls");
                 printf("Digite o  codigo   do Funcionario para alterar a quantidade de produtos vendidos\n");
                scanf("%d",&codigofunc);
                 sprintf(localfunc,"funcionarios\\%d.ini",codigofunc);
                   ini = iniparser_load(localfunc);
                nvendas = iniparser_getint(ini,"info:quantidade_de_produtos_vendidos",-1);
                printf("o funcionario tem %d vendas,digite o novo valor para alterar: ",nvendas);
                scanf("%d",&nvendas);
                printf("Quantidade de produtos vendidos pelo funcionario foi alterado para : %d!",nvendas);

                ini = fopen(localfunc,"r");
                fgets(linha, 100, ini);  // #
                fgets(linha1, 100, ini); // #
                fgets(linha2, 100, ini); // #
                fgets(linha3, 100, ini); //
                fgets(linha4, 100, ini); //[info]
                fgets(linha5, 100, ini); //
                fgets(linha6, 100, ini);//nome
                fgets(linha7, 100, ini);//codigo
                fgets(linha8, 100, ini);//preco
                fgets(linha9, 100, ini);//quantidade
                fgets(linha10, 100, ini);//produto cadastrado
                fgets(linha11, 100, ini);
                fclose(ini);
                ini = fopen(localfunc,"w");
                sprintf(linha8,"quantidade_de_produtos_vendidos   = %d ;\n",nvendas); // linha pra alterar a quantidade de vendas
                fprintf(ini,"%s%s%s%s%s%s%s%s%s%s%s",linha,linha1,linha2,linha3,linha4,linha5,linha6,linha7,linha8,linha9,linha10,linha11);
                fclose(ini);
                Sleep(2000); // espera um pouco para sair
                break;
            case 52: // alterar o preco total das vendas de um funcionario
                system ("cls");
                printf("Digite o  codigo   do Funcionario para alterar o preco total das vendas\n");
                scanf("%d",&codigofunc);
                sprintf(localfunc,"funcionarios\\%d.ini",codigofunc);
                ini = iniparser_load(localfunc);
                quantpreco = iniparser_getint(ini,"info:preço_total_das_vendas",-1);
                printf("o funcionario tem %f reais de vendas,digite o novo preco para alterar: ",quantpreco);
                scanf("%f",&quantpreco);
                printf("Quantidade de produtos vendidos pelo funcionario foi alterado para : %f REAIS!",quantpreco);

                ini = fopen(localfunc,"r");
                fgets(linha, 100, ini);  // #
                fgets(linha1, 100, ini); // #
                fgets(linha2, 100, ini); // #
                fgets(linha3, 100, ini); //
                fgets(linha4, 100, ini); //[info]
                fgets(linha5, 100, ini); //
                fgets(linha6, 100, ini);//nome
                fgets(linha7, 100, ini);//codigo
                fgets(linha8, 100, ini);//preco
                fgets(linha9, 100, ini);//quantidade
                fgets(linha10, 100, ini);//produto cadastrado
                fgets(linha11, 100, ini);
                fclose(ini);
                ini = fopen(localfunc,"w");
                sprintf(linha9,"preço_total_das_vendas = %f;\n",quantpreco); // linha pra alterar a quantidade de total de reais
                fprintf(ini,"%s%s%s%s%s%s%s%s%s%s%s",linha,linha1,linha2,linha3,linha4,linha5,linha6,linha7,linha8,linha9,linha10,linha11);
                fclose(ini);
                Sleep(2000); // espera um pouco para sair
                break;
        } // quebra o switch pra alterar info do funcionario
        break; //quebra pra nao pular pro case 51
        case 51: // continua o switch anterior,caso aperte 3,consultar funcionario
            system ("cls");
            printf("Coloque o codigo para consultar o funcionario: ");
            scanf("%d",&codigofunc);
            sprintf(localfunc,"funcionarios\\%d.ini",codigofunc);
                                ini = fopen(localfunc, "r");
                                fscanf(ini,"%s",info);
                                while(fgets(info,200,ini) != NULL){
                                    printf("%s",info);
                                }
            break;
        case 52: // continua o switch anterior,caso aperte 4,Excluir funcionario
                system ("cls");
                printf("Digite o codigo do funcionario para  excluir:  ");
                scanf("%d",&codigofunc);
                sprintf(localfunc,"funcionarios\\%d.ini",codigofunc);
                if(remove(localfunc) == 0){
                    printf("funcionario com codigo %d foi removido com sucesso!\n",codigofunc);
                    Beep(3000,500);
                    Sleep(2000);
                    system ("cls");
                    goto MENU;

                }else{
                    system ("cls");
                    printf("funcionario com codigo %d nao existe !.\n",codigofunc);
                    Beep(3000,1000);
                    Sleep(1000);
                    system ("cls");

                    }
            break;
        case 53: // continua o switch anterior,caso aperte 5,mostrar todos os funcionarios
            system ("cls");
            i=0; // zera o i pra contagem
            for(nfunc =0; nfunc<=2000;nfunc++){
                                sprintf(localfunc,"funcionarios\\%d.ini",nfunc);
                                 if(ini = fopen(localfunc, "r") != 0){ // se o arquivo existir,somar o I e mostrar o nome.
                                            ini = iniparser_load(localfunc);
                                            nomefuncionario =  iniparser_getstring(ini, "info:nome", NULL );
                                            nprod =  iniparser_getint(ini, "info:codigo", NULL );
                                            quantprod =  iniparser_getint(ini, "info:quantidade_de_produtos_vendidos", NULL );
                                            quantpreco = iniparser_getint(ini,"info:preço_total_das_vendas",NULL);
                                            printf("Nome = %s    Codigo = %d  Quantidade de produtos vendidos = %d    Preco total = %f\n",nomefuncionario,nprod,quantprod,quantpreco);
                                            i++;
                                }

                                    if(nfunc == 2000){
                                        printf("numero total de funcionarios : %d",i);
                                    }


            }
            Sleep(5000); break;
    }
break; // para o menu do funcionario
// quebra o switch geral
 //break;
        case 51:
            system("cls");
            printf("1-Ver relatorio de Vendas\n");
            printf("2-Ver relatorio de Produtos\n");
            printf("3-Ver relatorio de Funcionarios");
             int teclarelatorios = getch();
            switch(teclarelatorios){
             case 49:
                 system("cls");
                 ini = fopen("produtos\\relatorio.ini", "r");
                                fscanf(ini,"%s",info);
                                while(fgets(info,200,ini) != NULL){
                                printf("%s",info);
                                }
                break;
             case 50:

                 system("cls");
                 // relatorio de produto
                 // tem que ter no minimo 2 produtos para fazer a comparação

                 i=0; // zera o i pra contagem
                 nvendas = 0; // zera para comparar depois
            for(nprod =0; nprod<=2000;nprod++){
                                sprintf(localprod,"produtos\\%d.ini",nprod);
                                 if(ini = fopen(localprod, "r") != 0){ // se o arquivo existir,somar o I e mostrar o nome.
                                            ini = iniparser_load(localprod);

                                            nvendasantes =  iniparser_getint(ini, "info:Quantidade_vendida", NULL );
                                            if(nvendasantes > nvendas){
                                           nvendas = nvendasantes;
                                           nomeprodutosalvo = iniparser_getstring(ini, "info:nome", NULL );

                                            }


                                }

                                    if(nprod == 2000){
                                        printf("O produto mais vendido foi [%s],com quantidade de vendas  : [%d]\n",nomeprodutosalvo,nvendas);
                                    }


            }
                break;
             case 51:
                  system("cls");

                 nvendas = 0; // zera para comparar depois
                for(nfunc =0; nfunc<=2000;nfunc++){
                                sprintf(localfunc,"funcionarios\\%d.ini",nfunc);
                                 if(ini = fopen(localfunc, "r") != 0){ // se o arquivo existir,somar o I e mostrar o nome.
                                            ini = iniparser_load(localfunc);

                                            nvendasantes =  iniparser_getint(ini, "info:quantidade_de_produtos_vendidos", NULL );
                                            if(nvendasantes > nvendas){
                                           nvendas = nvendasantes;
                                           nomefuncionario = iniparser_getstring(ini, "info:nome", NULL );

                                            }


                                }
                                    if(nfunc == 2000){
                                        printf("O Funcionario que  mais vendeu foi [%s],com quantidade de vendas  : [%d]\n",nomefuncionario,nvendas);
                                    }


            }

                break;
             }
            break;
 	}
 	getch();
 	goto MENU;

	return 0;
}
