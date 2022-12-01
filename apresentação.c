#include <stdio.h>  //Conceito de Diretiva. Quando executada, faz com que o arquivo em quest�o seja inclu�do ao c�digo fonte.
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{   
    setlocale(LC_ALL, "Portuguese"); //para permitir a acentua��o da lingua portuguesa
    printf("Integrantes:\nGuilherme Yago Valente, UC22200104, Ci�ncia da Computa��o.\nJ�lia Ogino Lima, UC22101304, Engenharia da Software.\nMiguel Felipe Almeida, UC22200727, An�lise e Desenvolvimento de Software.");
    printf("\n------------------------------------------------------"); //formata��o.
    
    int sessoes, qntdPessoas, i, idade, opc, inteira=  0, meia = 0, total = 0, mulher = 0, homem = 0, qh = 0, qm = 0; char sexo; // informacoes pessoais
    int crianca = 0, adolescente = 0, adulto = 0, idoso = 0, nRegistrados = 0; // classificacoes
    int homemMaior = 0, mulherMaior = 0; //variavel homens e mulheres maior de idade 
    int nInteiras = 0, nMeias = 0;
    int avaliacao;
    float mediaAvaliacao;
    char filme[30];

    printf("\n\nN�mero de sess�es: "); //pedir numero de sessoes
    scanf("%d", &sessoes);
    printf("\nEscolha o nome do filme: ");
    fflush(stdin);
    gets(filme);
    if ( sessoes != 2 ) // se for diferente de dois n�o aceita
    {
        printf("N�mero de sess�es inv�lido!"); // caso numero de sessoes foi invalido
    }   else    { //caso numero de sessoes for aceito
        printf("\nN�mero de pessoas que assistiram ao filme: "); 
        scanf("%d", &qntdPessoas);  //solicitando numero de pessoas
    }  
    if ( qntdPessoas > 10 ) //Conceito de Operadores Relacionais. Express�es l�gicas. Caso verdadeiro, retorna valor positivo.
    {
        printf("Quantidade inv�lida de pessoas!"); // caso a quantidade de pessoas seja invalido
        return 0; // retorna valor negativo
    }   
    
    for ( i = 0; i < qntdPessoas; i++) //comando de repeti��o
    {   
        printf("\nSexo do %d cliente (M/F): ", i + 1); //sexo do cliente. I + 1 para retornar numero do cliente na fila da repeti��o.
        scanf(" %c", &sexo);
        if (sexo == 'F' || sexo == 'f') // caso sexo == feminino 
        {
            mulher = mulher + 1;  // aumenta em 1 a variavel de mulheres.
            qm = mulher;
        }
        if (sexo == 'M' || sexo == 'm') // caso sexo == masculino
        {
            homem = homem + 1; // aumenta em 1 a variavel de homens.
            qh = homem;
        }
        printf("\nIdade do Cliente (03 � 100 anos): ");
        scanf("%d", &idade); //solicita valor � variavel idade
        if( idade >= 3 && idade <= 13 )//
        {
            crianca = crianca + 1;
        }
        if( idade >= 14 && idade <= 17 )//
        {
            adolescente = adolescente + 1;
        }
        if( idade >= 18 && idade <= 64 )//
        {
            adulto = adulto + 1;
        }
        if( idade >= 65 && idade <= 100 )// CLASSIFICA��O DE IDADES, SEPARA��O E ADI��O PARA A CONTAGEM DE CADA VARI�VEL
        {
            idoso = idoso + 1;
        }
        if (idade < 3 || idade > 100)//
        {
            nRegistrados = nRegistrados + 1;
        }
        if ( idade >= 18 && sexo == 'M' )//
        {

            homemMaior = homemMaior + 1;
        }
        if ( idade >= 18 && sexo == 'F' )//
        {
            mulherMaior = mulherMaior + 1;
        }
        
        printf("\nInteira (1) ou Meia (2): \n");
        scanf("%d", &opc);
        switch (opc) //switchcase com a op��o de meia ou inteira entrada
        {
        case 1:
            inteira = inteira + 50; //adiciona 50 reais ao valor das inteiras
            nInteiras = nInteiras + 1; //aumenta em 1 o numero de enteiras compradas
            break;
        case 2:
            meia = meia + 25;//adiciona 25 reais ao valor das meias
            nMeias = nMeias + 1;// adiciona 1 meia comprada
            break;
        default:
            printf("Op��o Inv�lida!"); //op��o invalida. Nem meia nem inteira foram digitadas
            break;       
        }
        
        printf("\nAvalia��o de 1 � 10: ");
        scanf("%d", &avaliacao);
        mediaAvaliacao += avaliacao;  
        system("CLS"); //comando para limpar tela
        fflush(stdin);//comando para limpar buffering do teclado
        total = inteira + meia;// a variavel "total" recebe o valor armazenado de inteiras + meias entradas
    }
    

    system("CLS"); //limpar tela
    printf("\n----------------------------------------------------"); 
    printf("\n--------------------%s-------------------", filme); //�timo filme
    printf("\nQuantidade de Homens: %d", qh);// /////////////////////////////////////////////// 
    printf("\nQuantidade de Mulheres: %d", qm);
    printf("\n\nN�mero de crian�as: %d", crianca);
    printf("\nN�mero de adolescentes: %d", adolescente);
    printf("\nN�mero de adultos: %d", adulto);               //PRINT COM AS INFORMA��ES PEDIDAS.
    printf("\nN�mero de idosos: %d", idoso);
    printf("\nN�o registrados: %d", nRegistrados);
    printf("\nHomens maiores de idade: %d", homemMaior);
    printf("\nMulheres maiores de idade: %d", mulherMaior);
    printf("\nM�dia Avalia��o do filme: %.1f", (mediaAvaliacao)/i);
    printf("\nValor total arrecadado: %d", total);////////////////////////////////////////////////////////
    if (nInteiras > nMeias) //caso numero de inteiras for maior que o de meias entradas
    {
        printf("\nMaior quantidade de Entradas Inteiras."); //Printar isso
    }
    if (nInteiras < nMeias) //caso n�o
    {
        printf("\nMaior quantidade de Meias Entradas."); //printar isso.
    }
    printf("\n--------------------------------------------------------");
}
