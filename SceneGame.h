/***********************************************************************
*Nome: SceneGame
*Descrição: Classe criada para implementar o mundo virtual da simulação
*Data: 04/04/12
*Local: UNITINS
************************************************************************/
#ifndef _SCENEGAME_
#define _SCENEGAME_

#include "CVRScene.h"
#include "CVRObjLoader.h"

class SceneGame: public CVRScene
{
public:
	SceneGame();
	~SceneGame();
	void Release();
	void Execute();
	bool Init();
	void Render();
	
private:
	float fAngle;
	CVRObjLoader* spr_Scooter;
	CVRFont* posicao;
	
};
#endif