//Nome: Jessé de Paula Maciel Júnior.     Matricula: 2019005014       ECO 2019

#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

char v1[30]= {'O','X','O','X','O','X','O','X','O','X',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','A','B','C','D','E'};
int cont1=5,cont2=5;

typedef struct      //Struct que auxilia na movimentação das peças
{
    int col;
} t_jogador;
void imprime()    // Função que imprime o tabuleiro
{
    int i;

    for(i=0; i<10; i++)
    {
        printf(" %d  ",i);
    }
    printf("\n");
    for(i=0; i<10; i++)
    {
        printf("[%c] ",v1[i]);
    }
    printf("\n");
    for(i=19; i>=10; i--)
    {
        printf(" %d ",i);
    }
    printf("\n");
    for(i=19; i>=10; i--)
    {
        printf("[%c] ",v1[i]);
    }
    printf("\n");
    for(i=20; i<30; i++)
    {
        printf(" %d ",i);
    }
    printf("\n");
    for(i=20; i<30; i++)
    {
        printf("[%c] ",v1[i]);
    }
    printf("\n");
    printf("\n");
}
void instrucoes()       // Printa as instruções do jogo
{
    printf(" _______________________________________________________________________________________   R E G R A S  D O  J O G O   _______________________________________________________________________________________\n");
    printf("|                                                                                                                                                                                                             |\n");
    printf("|                                                                                                                                                                                                             |\n");
    printf("|[1]- Cada jogada consiste em lancar os quatro estiletes e movimentar uma peca de acordo com o resultado obtido no lancamento.                                                                                |\n");
    printf("|                                                                                                                                                                                                             |\n");
    printf("|[2]- Os jogadores lancam alternadamente os estiletes ate que um deles obtenha 1. Esse jogador fica com as pecas posicionadas nas casas de numeracao par. O mesmo jogador lanca os estiletes e joga de novo.  |\n");
    printf("|                                                                                                                                                                                                             |\n");
    printf("|[3]- Se o lancamento for de 1, 4 ou 6, o jogador move uma das suas pecas o correspondente numero de casas e lança de novo os estiletes.                                                                      |\n");
    printf("|                                                                                                                                                                                                             |\n");
    printf("|[4]- Se o lancamento for de 2,3 ou 5, o jogador move uma das suas pecas e passa a vez.                                                                                                                       |\n");
    printf("|                                                                                                                                                                                                             |\n");
    printf("|[5]- Quando uma peca cai em uma casa contendo uma peca de outro jogador esta peca diz-se atacada, trocando de lugar entre elas.                                                                              |\n");
    printf("|                                                                                                                                                                                                             |\n");
    printf("|[6]- Cada casa pode conter apenas uma peca.                                                                                                                                                                  |\n");
    printf("|                                                                                                                                                                                                             |\n");
    printf("|[7]- Se existem duas pecas em sequencia de um jogador ambas ficam protegidas, nao podendo portanto serem atacadas.                                                                                           |\n");
    printf("|                                                                                                                                                                                                             |\n");
    printf("|[8]- Se o jogador nao possuir nenhuma possibilidade de movimentacao entao a vez passa para o adversario.                                                                                                     |\n");
    printf("|                                                                                                                                                                                                             |\n");
    printf("|[9]- A casa 26 e amaldicoada pelos deuses antigos, sendo a peca que cair sobre essa casa jogada para a casa 15, se esta casa ja estiver ocupada a peca volta para o inicio do tabuleiro.                     |\n");
    printf("|                                                                                                                                                                                                             |\n");
    printf("|[10]- As casas 25,27 e 28 sao seguras, nao permitindo que as pecas que sobrecaiam sobre elas sejam atacadas.                                                                                                 |\n");
    printf("|                                                                                                                                                                                                             |\n");
    printf("|[11]- Vence o jogador que conseguir retirar todas as pecas do tabuleiro.                                                                                                                                     |\n");
    printf("|                                                                                                                                                                                                             |\n");
    printf("|                                                                                                                                                                                                             |\n");
    printf("|                                                                             Q U E  O S I R I S  E S T E J A  C O M  V O C E S!!!!!                                                                          |\n");
    printf("|_____________________________________________________________________________________________________________________________________________________________________________________________________________|\n");
    printf("\n");
    printf("\n");
}
void curiosidades()     //Printa as curiosidades do jogo
{
    printf(" __________________________________________________________________________________   C U R I O S I D A D E S  D O  J O G O   ________________________________________________________________________________\n");
    printf("|                                                                                                                                                                                                             |\n");
    printf("|                                                                                                                                                                                                             |\n");
    printf("|[1] O Senet significa 'Jogo da Passagem', pois acreditava-se que era preciso vencer uma partida de Senet contra o Deus Ra, apos a morte, para poder entrar no paraiso.                                       |\n");
    printf("|                                                                                                                                                                                                             |\n");
    printf("|[2] O jogo tem aproximadamente 5000 anos e remonta o Egito Antigo, sendo considerado um dos jogos de tabuleiro mais antigos conhecidos e possivelmente um antecessor do gamao.                               |\n");
    printf("|                                                                                                                                                                                                             |\n");
    printf("|[3] O jogo era extremamente popular em todas as camadas da sociedade e muitos tabuleiros eram encontrados em tumulos tanto de plebeus quanto de faraos.                                                      |\n");
    printf("|                                                                                                                                                                                                             |\n");
    printf("|[4] Historiadores chegaram o mais proximo das regras originais do Senet por meio de hieroglifos e pinturas nas paredes, ou seja, as regras que hoje usamos podem nao ser totalmente fieis as originais.      |\n");
    printf("|                                                                                                                                                                                                             |\n");
    printf("|_____________________________________________________________________________________________________________________________________________________________________________________________________________|\n");
    printf("\n");
    printf("\n");
}
void creditos()         //Printa os créditos do jogo
{
    printf(" ____________________________   C R E D I T O S   __________________________\n");
    printf("|                                                                           |\n");
    printf("|                                                                           |\n");
    printf("|         _____   ____   ____   _____    ____       _____  ___              |\n");
    printf("|           |    |      |___   |____    |             |   |___|             |\n");
    printf("|           |    |----      |       |   |----         |   | \\               |\n");
    printf("|        |__|    |____  ____|   ____|   |____      |__|   |  \\              |\n");
    printf("|                                                                           |\n");
    printf("|                                                                           |\n");
    printf("|                                                                           |\n");
    printf("|          ____    ____    _____        _____    _____       ____           |\n");
    printf("|         |       |       |     |            |  |     |   | |    |          |\n");
    printf("|         |----   |       |     |        -----  |     |   | |____|          |\n");
    printf("|         |____   |____   |_____|       |_____  |_____|   |      |          |\n");
    printf("|                                                                           |\n");
    printf("|                                                  /\\                       |\n");
    printf("|                              O                  /  \\                      |\n");
    printf("|                             / \\                /    \\                     |\n");
    printf("|                            /   \\              /      \\                    |\n");
    printf("|                           /     \\            /        \\                   |\n");
    printf("|                          /       \\          /          \\                  |\n");
    printf("|                         /         \\        /  /~\\       \\                 |\n");
    printf("|                        /           \\      /  |00 )       \\                |\n");
    printf("|                       /             \\    /   _\\=/_        \\               |\n");
    printf("|                  ____/               \\  /   /  _  \\        \\              |\n");
    printf("|               _ / ()  \\ _             \\/   //|/.\\|\\\\        \\             |\n");
    printf("|              | |  ===  | |            /     \\|\\ /| ||        \\            |\n");
    printf("|              |_|   O   |_|           /      # _ _/  #         \\           |\n");
    printf("|               ||   O   ||           /        | | |             \\          |\n");
    printf("|               ||__ * __||          /         | | |              \\         |\n");
    printf("|              |~ \\_____/ ~|        /          []|[]               \\        |\n");
    printf("|             //=\\  /=\\  /=\\       /           | | |                \\       |\n");
    printf("|____________/__[_]_[_]_[_]_______/___________/_]_[_\\________________\\______|\n");
    printf("|___________________________________________________________________________|\n");
    printf("\n");
    printf("\n");
}
int sorteiaEstilete()   // Sorteia qual jogador inicia o jogo
{
    char v2;
    int sorteio,i,j=1;
    do
    {
        sorteio = rand()%6 + 1;
        if(j==1)
        {
            if(sorteio!=1)
            {
                j++;
                continue;
            }
        }
        if(j==2)
        {
            if(sorteio!=1)
            {
                j--;
            }
        }
    }
    while(sorteio!=1);

    if(j==2)
    {
        for(i=0; i<10; i=i+2)
        {
            v2=v1[i];
            v1[i]=v1[i+1];
            v1[i+1]=v2;
        }

    }

    return j;
}
int sorteioEstilete()  // Sorteia os estiletes durante o jogo
{
    int est;
    est=rand()%6 + 1;
    return est;
}
void movimentacao(int sorteio,t_jogador player[30],int jogador)  // Mecânica do jogo
{
    int i,dono,novo,c;
    while(1)      //Utilizado para quando o jogador seleciona uma peça inválida ou algum movimento não permitido
    {
        printf("Deseja movimentar qual peca? ");
        scanf("%d",&c);
        printf("\n");
        dono=jogador;

        for(i=0; i<30; i++)
        {
            if(c==player[i].col)
            {
                novo=c+sorteio;
                if(novo<25)
                {
                    if((dono==1))
                    {
                        if(v1[i]=='X')
                        {
                            if(v1[player[novo].col]=='O')
                            {
                                if((v1[novo+1]=='O')||(v1[novo-1]=='O'))
                                {
                                    printf("A peca na posicao %d nao pode ser atacada!\n",novo);       //Regra Numero 5
                                    printf("\n");
                                }
                                else
                                {
                                    v1[player[novo].col]='X';     //REGRA 3
                                    v1[player[i].col]='O';
                                    return;
                                }
                            }
                            if(v1[player[novo].col]=='X')
                            {
                                printf("Voce ja possui uma peca na posicao %d!\n",novo);
                                printf("\n");
                            }
                            if((v1[player[novo].col]!='O')&&(v1[player[novo].col]!='X'))
                            {
                                v1[player[novo].col]='X';
                                v1[player[i].col]=' ';
                                return;
                            }
                            else
                            {
                                jogador++;      //Regra numero 7
                            }


                        }
                        else
                        {
                            printf("Por favor jogador %d, mova as suas pecas!!!\n",dono);
                            printf("\n");
                        }
                    }
                    else
                    {
                        if(v1[i]=='O')
                        {
                            if(v1[player[novo].col]=='X')
                            {
                                if((v1[novo+1]=='X')||(v1[novo-1]=='X'))
                                {
                                    printf("A peca %d nao pode ser atacada!\n",novo);       //Regra Numero 5
                                    printf("\n");
                                }
                                else
                                {
                                    v1[player[novo].col]='O';            //REGRA 3
                                    v1[player[i].col]='X';
                                    return;
                                }
                            }
                            if(v1[player[novo].col]=='O')
                            {
                                printf("Voce ja possui uma peca na posicao %d!\n",novo);
                                printf("\n");
                            }
                            if((v1[player[novo].col]!='O')&&(v1[player[novo].col]!='X'))
                            {
                                v1[player[novo].col]='O';
                                v1[player[i].col]=' ';
                                return;
                            }
                            else
                            {
                                jogador--;      //Regra numero 7
                            }
                        }
                        else
                        {
                            printf("Por favor jogador %d, mova as suas pecas!!!\n",dono);
                            printf("\n");
                        }
                    }
                }
                if(novo==25)  // A Casa da Felicidade      //Regra Numero 9
                {
                    if(dono==1)
                    {
                        if(v1[25]=='O')
                        {
                            printf("Essa casa nao pode ser atacada!\n");
                            printf("\n");
                        }
                        else
                        {
                            v1[25]='X';
                            v1[i]=' ';
                            return;
                        }
                    }
                    else
                    {
                        if(v1[25]=='X')
                        {
                            printf("Essa casa nao pode ser atacada!\n");
                            printf("\n");
                        }
                        else
                        {
                            v1[25]='O';
                            v1[i]=' ';
                            return;
                        }
                    }
                }
                if(novo==26)  //A Casa de Água      //Regra Numero 8
                {
                    if(dono==1)
                    {
                        if((v1[15]=='O')||(v1[15]=='X'))
                        {
                            v1[sorteio-1]='X';
                            v1[i]=' ';
                            return;
                        }
                        else
                        {
                            v1[15]='X';
                            v1[i]=' ';
                            return;
                        }
                    }
                    else
                    {
                        if((v1[15]=='O')||(v1[15]=='X'))
                        {
                            v1[sorteio-1]='O';
                            v1[i]=' ';
                            return;
                        }
                        else
                        {
                            v1[15]='O';
                            v1[i]=' ';
                            return;
                        }
                    }
                }
                if(novo==27)  //Casa das Três Verdades      //Regra Numero 9
                {
                    if(dono==1)
                    {
                        if(v1[27]=='O')
                        {
                            printf("Essa casa nao pode ser atacada!\n");
                            printf("\n");
                        }
                        else
                        {
                            v1[27]='X';
                            v1[i]=' ';
                            return;
                        }
                    }
                    else
                    {
                        if(v1[27]=='X')
                        {
                            printf("Essa casa nao pode ser atacada!\n");
                            printf("\n");
                        }
                        else
                        {
                            v1[27]='O';
                            v1[i]=' ';
                            return;
                        }
                    }
                }
                if(novo==28)  //Casa de Re-Atouma       //Regra Numero 9
                {
                    if(dono==1)
                    {
                        if(v1[28]=='O')
                        {
                            printf("Essa casa nao pode ser atacada!\n");
                            printf("\n");
                        }
                        else
                        {
                            v1[28]='X';
                            v1[i]=' ';
                            return;
                        }
                    }
                    else
                    {
                        if(v1[28]=='X')
                        {
                            printf("Essa casa nao pode ser atacada!\n");
                            printf("\n");
                        }
                        else
                        {
                            v1[28]='O';
                            v1[i]=' ';
                            return;
                        }
                    }
                }
                if(novo==29)
                {
                    if(dono==1)
                    {
                        if(v1[novo]=='O')
                        {
                            v1[novo]='X';
                            v1[i]='O';
                            return;
                        }
                        else
                        {
                            v1[novo]='X';
                            v1[i]=' ';
                            return;
                        }
                    }
                    else
                    {
                        if(v1[novo]=='X')
                        {
                            v1[novo]='O';
                            v1[i]='X';
                            return;
                        }
                        else
                        {
                            v1[novo]='O';
                            v1[i]=' ';
                            return;
                        }
                    }
                }
                if(novo>29)
                {
                    if(dono==1)
                    {
                        if((v1[0]!='X')&&(v1[1]!='X')&&(v1[2]!='X')&&(v1[3]!='X')&&(v1[4]!='X')&&(v1[5]!='X')&&(v1[6]!='X')&&(v1[7]!='X')&&(v1[8]!='X')&&(v1[9]!='X'))          //Regra Numero 10 (extra)
                        {
                            v1[i]=' ';
                            cont1--;
                            return;
                        }
                        else
                        {
                            printf("O jogador %d ainda possui pecas na primeira fileira!\n",dono);
                            printf("\n");
                        }
                    }
                    else
                    {
                        if((v1[0]!='O')&&(v1[1]!='O')&&(v1[2]!='O')&&(v1[3]!='O')&&(v1[4]!='O')&&(v1[5]!='O')&&(v1[6]!='O')&&(v1[7]!='O')&&(v1[8]!='O')&&(v1[9]!='O'))          //Regra Numero 10 (extra)
                        {
                            v1[i]=' ';
                            cont2--;
                            return;
                        }
                        else
                        {
                            printf("O jogador %d ainda possui pecas na primeira fileira!\n",dono);
                            printf("\n");
                        }
                    }
                }
            }
        }
    }
}

int main(int argc, char*argv[])
{
    srand(time(NULL));
    int i,jogador,sorteio,opcao=1;
    t_jogador player[30];

    printf("Bem Vindos ao Senet! Que Ra, Thoth e Osiris os acompanhem. Iniciaremos o jogo.\n");
    printf("\n");
    printf("\n");
    jogador=sorteiaEstilete();                      //Regra Numero 1
    printf("O jogador %d comeca!\n",jogador);
    printf("\n");
    imprime();

    for(i=0; i<30; i++)
    {
        player[i].col=i;
    }

    do
    {
        printf("1-Movimentar uma peca\n2-Regras\n3-Curiosidades do jogo\n4-Creditos\n5-Finalizar jogo\n");
        scanf("%d",&opcao);
        printf("\n");
        printf("\n");

        switch(opcao)
        {
        case 1:
            do
            {
                imprime();
                printf("\n");
                sorteio=sorteioEstilete();
                printf("O jogador %d tirou %d! ",jogador,sorteio);
                if((sorteio==1)||(sorteio==4)||(sorteio==6))    //Regra Numero 2
                {
                    movimentacao(sorteio,player,jogador);
                    imprime();
                }
                else
                {
                    movimentacao(sorteio,player,jogador);
                    imprime();
                    if(jogador==1)
                    {
                        jogador++;
                    }
                    else
                    {
                        jogador--;
                    }
                }
                printf("\n");
                printf("PLACAR DO JOGO:\n");
                printf("Pecas jogador 1: %d\n",cont1);
                printf("Pecas jogador 2: %d\n",cont2);
                if(cont1==cont2)
                {
                    printf("O jogo esta empatado!\n");
                    printf("\n");
                }
                else
                {
                    if(cont1>cont2)
                    {
                        printf("O jogador 2 esta na frente!\n");
                        printf("\n");
                    }
                    else
                    {
                        printf("O jogador 1 esta na frente!\n");
                        printf("\n");
                    }
                }
                printf("\n");
            }
            while((cont1!=0)&&(cont2!=0));
            if(cont1==0)
            {
                printf("PARABENS, O PLAYER 1 GANHOU O JOGO!!!!!!!!\n");
                printf("\n");
            }
            if(cont2==0)
            {
                printf("PARABENS, O PLAYER 2 GANHOU O JOGO!!!!!!!!\n");
                printf("\n");
            }
            break;
        case 2:
            instrucoes();
            break;
        case 3:
            curiosidades();
            break;
        case 4:
            creditos();
            break;
        case 5:
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }
    }
    while(opcao!=5);

    return 0;
}
