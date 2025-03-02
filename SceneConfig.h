/***********************************************************************
*Nome: SceneConfig
*Descri��o: Classe criada para implementar as configuracoes do simulador
*Data: 04/04/12
*Local: UNITINS
************************************************************************/
#ifndef _SCENECONFIG_
#define _SCENECONFIG_


#include "CVRScene.h"
#include "CVRObjLoader.h"
#include "CVRFont.h"


class SceneConfig: public CVRScene
{
public:
	SceneConfig();
	~SceneConfig();
	void Release();
	void Execute();
	bool Init();
	void UpdateMouse();
	
private:
	CVRSprite* spr_backgroundConfig;
	CVRObjLoader* spr_Scooter;
	CVRObjLoader* spr_Custom;
	CVRObjLoader* spr_Cbr;
	float fAngle;
	CVRFont* posicao;
	CVRSprite* spr_mouse[2];
	
};
#endif