
// Created by Paulo Henrique Goncalves Coelho on 03/07/26.
//

#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

class Personagem{
        private:
            std::string Nome;
            float Vida, Ataque, Defesa;
            int Energia;
        public:
            Personagem(std::string name, int ataq, int defe){
                Nome = name;
                Ataque = ataq;
                Defesa = defe;
                Vida = 100.0;
                Energia = 100;
            }

            virtual ~Personagem(){}

            //Getters
            std::string getNome(){
                return Nome;
            }

            float getVida(){
                return Vida;
            }

            float getAtaque() {
                return Ataque;
            }

            float getDefesa(){
                return Defesa;
            }

            int getEnergia(){
                return Energia;
            }
            //setters
            float setVida(float num){
                return Vida = num;
            }

            int setEnergia(float num){
                return Energia = num;
            }


            virtual void AtaqueComum(Personagem *inimigo) = 0;
            virtual void AtaqueEspecial(Personagem *inimigo) = 0;

            virtual void receberDano(float danoRecebido){
                // todos personagens recebem a mesma quantidade de dano, só muda o quanto q a vida diminui no final
                float danoFinal = danoRecebido - getDefesa();

                if (danoFinal < 0 ){
                    danoFinal = 6.0; //minimo de dano é 6
                }

                setVida(getVida() - danoFinal);
            }

            virtual void recuperarEnergia(int acrescento) = 0;
        };

class Classicos : public Personagem{
        public:
            Classicos(std::string name, int ataq, int defe) : Personagem(name, ataq, defe){}

            void AtaqueComum(Personagem *inimigo) override {
                if (getEnergia() > 0){

                    float danoDado = getAtaque();

                    //aleatoriedade de dar critico ou raspao
                    int chanceCritico = rand() % 5;

                    if (chanceCritico == 4) {
                        std::cout << "Acertou Critico!" << std::endl;
                        danoDado = danoDado * 1.4;
                    } else if(chanceCritico == 0){
                        std::cout << "Acertou de raspao!" << std::endl;
                        danoDado = danoDado * 0.6;
                    }

                    inimigo->receberDano(danoDado); // finaliza chamando a funcao que faz o dano final

                    setEnergia(getEnergia() - 10);
                    if(getEnergia() < 0) setEnergia(0);
                } else { std::cout << "Sem energia suficiente para atacar" << std::endl; }
            }

            void AtaqueEspecial(Personagem *inimigo) override{
                if (getEnergia() > 59){

                    float danoDado = getAtaque() * 1.9;

                    //aleatoriedade de dar um bonus
                    int chanceCritico = rand() % 5;

                    if (chanceCritico == 4) {
                        std::cout << "Acertou Critico!" << std::endl;
                        danoDado = danoDado * 1.2;
                    }

                    inimigo->receberDano(danoDado); // finaliza chamando a funcao que faz o dano final

                    setEnergia(getEnergia() - 60);
                    if(getEnergia() < 0) setEnergia(0); // garante q a energia nao fique negativa
                } else { std::cout << "Sem energia suficiente para ataque especial" << std::endl; }
            }

            void recuperarEnergia(int acrescento) override{
                setEnergia(getEnergia() + 3 + acrescento);
                if (getEnergia() > 100) setEnergia(100);
            }
        };

class Humanos : public Personagem{
        public:
            Humanos(std::string name, int ataq, int defe) : Personagem(name, ataq, defe){}

            void AtaqueComum(Personagem *inimigo) override {
                if (getEnergia() > 0){

                    float danoDado = getAtaque();

                    //aleatoriedade de dar critico ou raspao
                    int chanceCritico = rand() % 5;

                    if (chanceCritico == 4) {
                        std::cout << "Acertou Critico!" << std::endl;
                        danoDado = danoDado * 1.4;
                    } else if(chanceCritico == 0){
                        std::cout << "Acertou de Raspao!" << std::endl;
                        danoDado = danoDado * 0.6;
                    }

                    inimigo->receberDano(danoDado); // finaliza chamando a funcao que faz o dano final

                    setEnergia(getEnergia() - 15);
                    if(getEnergia() < 0) setEnergia(0);
                } else { std::cout << "Sem energia suficiente para atacar" << std::endl; }
            }

            void AtaqueEspecial(Personagem *inimigo) override{
                if (getEnergia() > 59){

                    float danoDado = getAtaque() * 2.1;

                    //aleatoriedade de dar um bonus
                    int chanceCritico = rand() % 5;

                    if (chanceCritico == 4) {
                        std::cout << "Acertou Critico!" << std::endl;
                        danoDado = danoDado * 1.2;
                    }

                    inimigo->receberDano(danoDado); // finaliza chamando a funcao que faz o dano final

                    setEnergia(getEnergia() - 60);
                    if(getEnergia() < 0) setEnergia(0); // garante q a energia nao fique negativa
                } else { std::cout << "Sem energia suficiente para ataque especial" << std::endl; }
            }

        void recuperarEnergia(int acrescento) override{
            setEnergia(getEnergia() + 9 + acrescento);
            if (getEnergia() > 100) setEnergia(100);
        }
        };

class Robos : public Personagem{
            public:
            Robos(std::string name, int ataq, int defe) : Personagem(name, ataq, defe){}

            void AtaqueComum(Personagem *inimigo) override {
                if (getEnergia() > 0){

                    float danoDado = getAtaque() * 1.3;

                    //aleatoriedade de dar critico
                    int chanceCritico = rand() % 5;

                    if (chanceCritico == 4) {
                        std::cout << "Acertou Critico!" << std::endl;
                        danoDado = danoDado * 1.4;
                    } else if(chanceCritico == 0){
                        std::cout << "Acertou de Raspao!" << std::endl;
                        danoDado = danoDado * 0.6;
                    }

                    inimigo->receberDano(danoDado); // finaliza chamando a funcao que faz o dano final

                    setEnergia(getEnergia() - 20);
                    if(getEnergia() < 0) setEnergia(0); // garante q a energia nao fique negativa
                } else { std::cout << "Sem energia suficiente para atacar" << std::endl; }
            }

            void AtaqueEspecial(Personagem *inimigo) override{
                if (getEnergia() > 59){

                    float danoDado = getAtaque() * 2;

                    //aleatoriedade de dar um bonus
                    int chanceCritico = rand() % 5;

                    if (chanceCritico == 4) {
                        std::cout << "Acertou Critico!" << std::endl;
                        danoDado = danoDado * 1.2;
                    }

                    inimigo->receberDano(danoDado); // finaliza chamando a funcao que faz o dano final

                    setEnergia(getEnergia() - 60);
                    if(getEnergia() < 0) setEnergia(0); // garante q a energia nao fique negativa
                } else { std::cout << "Sem energia suficiente para ataque especial" << std::endl; }
            }

    void recuperarEnergia(int acrescento) override{
        setEnergia(getEnergia() + 2 + acrescento);
        if (getEnergia() > 100) setEnergia(100);
    }
        };

void limpar(Personagem *lista[]){
    for (int i = 0; i < 10; i++){
        delete lista[i];
    }
}

void oponenteGolpe(int golpe, Personagem* lista[], int jogador, int CPU){
    if(golpe == 0){
        lista[CPU]->AtaqueComum(lista[jogador]);
        //std::cout << "Ataque comum a cpu fez" << std::endl;
    } else if(golpe == 1 && (lista[CPU]->getEnergia() > 60)){
        lista[CPU]->AtaqueEspecial(lista[jogador]);
        //std::cout << "Ataque especial a cpu fez" << std::endl;
    } else if((golpe == 2) && (lista[CPU]->getEnergia() < 30)) {
        lista[CPU]->recuperarEnergia(10);
        //std::cout << "recupera energia a cpu fez" << std::endl;
    } else {
        lista[CPU]->AtaqueComum(lista[jogador]);
    }
}

int main(){

    unsigned seed = time(0);
    srand(seed);

    Personagem *lista[10];

    lista[0] = new Classicos("Scorpion", 26, 18);
    lista[1] = new Classicos("Sub-Zero", 25, 12);
    lista[2] = new Classicos("Raiden", 16, 20);
    lista[3] = new Classicos("Kung Lao", 25, 10);

    lista[4] = new Humanos  ("Liu Kang", 22, 16);
    lista[5] = new Humanos  ("Johnny Cage", 21, 14);
    lista[6] = new Humanos  ("Sonya Blade", 18, 29);
    lista[7] = new Humanos  ("Jax Briggs", 21, 19);

    lista[8] = new Robos    ("Cyrax", 40, 6);
    lista[9] = new Robos    ("Sektor", 19, 29);


    std::cout << "Escolha um personagem digitando o numero dele: " << std::endl;
    for (int i = 0; i < 10; i++){
        std::cout << i <<" - " << lista[i]->getNome() << std::endl;
    }

    int escolhaDoJogador;

    std::cin >> escolhaDoJogador;

    std::cout << "Jogador escolhido: " << lista[escolhaDoJogador]->getNome() << std::endl;

    std::cout << "A CPU ira escolher o oponente" << std::endl;


    int CPU = rand() % 10;
    while (CPU == escolhaDoJogador) {
        CPU = rand() % 10;
    }

    std::cout << "A CPU escolheu: " << lista[CPU]->getNome() << std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << "FIGHT!" << std::endl;


    while(lista[escolhaDoJogador]->getVida() > 0){
        if (lista[CPU]->getVida() < 1) break;
        std::cout << "-------------------------------------------------------" << std::endl;
        std::cout << "Sua vida: " << lista[escolhaDoJogador]->getVida() << " | Vida do oponente: " << lista[CPU]->getVida() << std::endl;
        std::cout << "Sua energia: " << lista[escolhaDoJogador]->getEnergia() << " | Energia do oponente: " << lista[CPU]->getEnergia() << std::endl;
        int escolha;
        std::cout << "Escolha seu ataque digitando o numero: " << std::endl;
        std::cout << "1 - Ataque comum" << std::endl << "2 - Ataque especial (60 de energia necessario)" << std::endl << "3 - Fazer nada (recupera energia)" << std::endl;
        std::cin >> escolha;
        if (escolha == 1) lista[escolhaDoJogador]->AtaqueComum(lista[CPU]);
        else if (escolha == 2) lista[escolhaDoJogador]->AtaqueEspecial(lista[CPU]);
        else if (escolha == 3) lista[escolhaDoJogador]->recuperarEnergia(10);
        else std::cout << "Voce nao escolheu um golpe valido!" << std::endl;

        //robos -> 20
        //huumano -> 15
        // classicos -> 10

        //vez do oponente bater

        if(lista[CPU]->getVida() < 1) break;

        int golpeCPU = rand()%3;
        oponenteGolpe(golpeCPU, lista, escolhaDoJogador, CPU);

    }

    std::cout << "FIM DE JOGO! ";
    if (lista[CPU]->getVida() <= 0){
        std::cout << "VOCE VENCEU! Nome do lutador: "<< lista[escolhaDoJogador]->getNome() << std::endl;
    } else {
        std::cout << "A CPU VENCEU! Nome do lutador: "<< lista[CPU]->getNome() << std::endl;
    }

    limpar(lista);

    return 0;
}