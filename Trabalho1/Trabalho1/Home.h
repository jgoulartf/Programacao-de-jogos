/**********************************************************************************
// Home (Arquivo de Cabe�alho)
// 
// Cria��o:     18 Jan 2013
// Atualiza��o: 25 Ago 2021
// Compilador:  Visual C++ 2019
//
// Descri��o:   Tela de abertura do jogo PacMan
//
**********************************************************************************/

#ifndef _FUTBUTTON_HOME_H_
#define _FUTBUTTON_HOME_H_

// ------------------------------------------------------------------------------
// Inclus�es

#include "Game.h"
#include "Camp.h"
#include "Sprite.h"
#include "Scene.h"
#include "Button.h"
#include "Ball.h"

// ------------------------------------------------------------------------------


class Home : public Game
{
private:
    Sprite * backg  = nullptr;       // pano de fundo
    
    bool ctrlKeyESC = false;         // controle do ESC

    bool ctrlSpace  = false;          // controle do space
    bool ctrlKeyB   = false;           // controle da tecla B

    bool ctrlSpace = false;          // controle do space
    bool ctrlUp = false;             // controle da tecla up
    bool ctrlKeyDown = false;        // controle da tecla Down


    bool ctrlLMouse = false;

    Scene * scene   = nullptr;       // gerenciador de cena
    
    Point* buttonPositions1[11];
    Point* buttonPositions2[11];

    Camp * camp = nullptr;
    Ball * ball  = nullptr;

    Team* team1 = nullptr;
    Team* team2 = nullptr;




    bool ballCtrl;                  // flag para saber se bola esta em jogo ou nao


    bool viewBBox = false;          // habilita visualiza��o da bounding box
public:
    void Init();                    // inicializa��o
    void Update();                  // atualiza��o
    void Draw();                    // desenho
    void Finalize();                // finaliza��o
    void markButtonPositions();
};

// -----------------------------------------------------------------------------

#endif