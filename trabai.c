#include <stdio.h>  //Conceito de Diretiva. Quando executada, faz com que o arquivo em questão seja incluído ao código fonte.
#include <stdlib.h> 
#include <locale.h>
#include <string.h>

int main()
{   
    setlocale(LC_ALL, "Portuguese");  //para permitir a acentua��o da lingua portuguesa
    printf("Integrantes:\nGuilherme Yago Valente, UC22200104, Ciência da Computação.\nJúlia Ogino Lima, UC22101304, Engenharia da Software.\nMiguel Felipe Almeida, UC22200727, Análise e Desenvolvimento de Software."); //nome, matricula e curso dos integrantes
    printf("\n------------------------------------------------------"); //formatação.
    
    int sessoes, qntdPessoas, i, idade, opc, inteira=  0, meia = 0, total = 0, mulher = 0, homem = 0, qh = 0, qm = 0; char sexo; // informacoes pessoais
    int crianca = 0, adolescente = 0, adulto = 0, idoso = 0, nRegistrados = 0; // classificacoes
    int homemMaior = 0, mulherMaior = 0; //variavel homens e mulheres maior de idade 

    printf("\n\nNúmero de sessões: "); //pedir numero de sessoes
    scanf("%d", &sessoes); 
    if ( sessoes != 2 ) // se for diferente de dois nao aceita
    {
        printf("Número de sessões inválido!"); // caso numero de sessoes foi invalido
    }   else    { //caso numero de sessoes for aceito
        printf("\nNúmero de pessoas que assistiram ao filme: "); //solicitando numero de pessoas
        scanf("%d", &qntdPessoas);
    }  
    if ( qntdPessoas > 10 ) //Conceito de Operadores Relacionais. Expressões lógicas. Caso verdadeiro, retorna valor positivo. // quantidade de pessoas tem q ser maior que 10
    {
        printf("Quantidade inválida de pessoas!"); // caso a quantidade de pessoas seja invalido
        return 0;
    }   
    
    for ( i = 0; i < qntdPessoas; i++) //caso a quantidade de pessoas seja aceito
    {   
        printf("\nSexo do %d cliente (M/F): ", i + 1); //solicitando o sejo do cliente
        scanf(" %c", &sexo);
        if (sexo == 'F' || sexo == 'f') //caso seja mulher 
        {
            mulher = mulher + 1; //adiciona uma mulher a contagem
            qm = mulher;
        }
        if (sexo == 'M' || sexo == 'm') //caso seja homem
        {
            homem = homem + 1; //adiciona um homem a contagem
            qh = homem;
        }
        printf("\nIdade do Cliente (03 à 100 anos): "); //solicita a idade do cliente
        scanf("%d", &idade);
        if( idade >= 3 && idade <= 13 ) //idade maior ou igual a 3 e menor ou igual a 13 indica crian�a
        {
            crianca = crianca + 1; //adiciona uma crian�a a contagem
        }
        if( idade >= 14 && idade <= 17 ) //idade maior ou igual a 14 e menor ou igual a 17 indica adolescente
        {
            adolescente = adolescente + 1; //adiciona um adolescente a contagem
        }
        if( idade >= 18 && idade <= 64 ) //idade maior ou igual a 18 e menor ou igual a 64 indica adulto
        {
            adulto = adulto + 1; //adiciona um adulto a contagem
        }
        if( idade >= 65 && idade <= 100 ) //idade maior ou igual a 65 e menor ou igual a 100 indica idoso
        {
            idoso = idoso + 1; //adiciona um idoso a contagem
        }
        if (idade < 3 || idade > 100) // caso a idade seja menor que 3 e maior de 100 sera nao registrado
        {
            nRegistrados = nRegistrados + 1; 
        }
        
        
        printf("\nInteira (1) ou Meia (2): \n"); //solicita se a entrada � inteira ou meia
        scanf("%d", &opc);
        switch (opc) //mosta as op��es
        {
        case 1:
            inteira = inteira + 50; //caso seja inteira soma 50
            break;
        case 2:
            meia = meia + 25; //caso seja meia soma 25
            break;
        default:
            printf("Opção Inválida!"); //caso nao seja nem inteira nem meia
            break;       
        }
        system("CLS"); //para limpar tela
        fflush(stdin); // limpar o buffering do teclado
        total = inteira + meia; //soma das entradas 

    }

    system("CLS"); //para limpar tela
    printf("\n--------------------------FILME--------------------------");
    printf("\n-------------------BASTARDOS-INGLÓRIOS-------------------"); //nome do filme
    printf("\nQuantidade de Homens: %d", qh);
    printf("\nQuantidade de Mulheres: %d", qm);
    printf("\nValor total arrecadado: %d", total);
    printf("\n\nNúmero de crianças: %d", crianca);
    printf("\nNúmero de adolescentes: %d", adolescente);
    printf("\nNúmero de adultos: %d", adulto);
    printf("\nNúmero de idosos: %d", idoso);
    printf("\nNão registrados: %d", nRegistrados);
    printf("\n--------------------------------------------------------"); //formatação.

}
