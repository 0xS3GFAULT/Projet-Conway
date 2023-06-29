#include <stdlib.h>
#ifndef CONWAY
#define CONWAY

typedef struct DONNEESNOT
{
	int X;
	int Y;
	int rectXinit;
	int rectYinit;
	int rectXfin;
	int rectYfin;
	int blocage;
	int *blocageX;
	int *blocageY;
}DONNEESNOT;

typedef struct DONNEESOR
{
	int X;
	int Y;
	int rectXinit;
	int rectYinit;
	int rectXfin;
	int rectYfin;
	int blocage1;
	int blocage2;
	int *blocage1X;
	int *blocage1Y;
	int *blocage2X;
	int *blocage2Y;
}DONNEESOR;

typedef struct DONNEESAND
{
	int X;
	int Y;
	int rectXinit;
	int rectYinit;
	int rectXfin;
	int rectYfin;
	int blocage1;
	int blocage2;
	int *blocage1X;
	int *blocage1Y;
	int *blocage2X;
	int *blocage2Y;
}DONNEESAND;

int **grille=NULL;
int lignes_grilles=600; // MAX=600
int colonnes_grilles=600; // MAX=600
float lignes2=600;
float colonnes2=600;
int etat = 0;
int **grillet1=NULL;
int menu = 0;
int btnRad=5;
int limitetemp=0;
int temp=0;
int ordonnee;
int abscisse;
int boutong=1;
int boutond=1;
int pagemenu=1;
float ratio=1920/600; // A changer !!
DONNEESNOT *tabNOT=NULL;
DONNEESOR *tabOR=NULL;
DONNEESAND *tabAND=NULL;
int longueurtabNOT=0;
int longueurtabOR=0;
int longueurtabAND=0;
int reset=1;
int etatZoom=0;
int clicHautX=0;
int clicBasX=1920;
int clicHautY=1080;
int clicBasY=0;
int boutonGrille=0;
int compteurZoom=0;
int GrilleOnOff=0;
int LoupeOnOff=0;
int page = 0;
int menu2 = 0;
int AndOnOff = 0;
int NotOnOff = 0;
int OrOnOff = 0;
int CompilationOnOff = 0;

void cercle(float centreX, float centreY, float rayon);
void InitialisationGrille(void); 
void LibererMemoireGrille(void);
void AffichageMenu(void);
void AffichageMatrice(float lignes2,float colonnes2);
void AffichageGrille(float ligne2,float colonnes2);
void AfficheBtnLecture(void);
void InitialisationGrillet1(void);
void RemplirGrillet1(void);
int ScanCellules(int i,int j);
void ReglesConway(int nombre_voisin_vivant,int x,int y);
void AffichageGrillet1(float lignes2,float colonnes2);
void PassageTempsSuperieur(void);
void AfficheBtnReset(void);
void InitialiserLignesColonnesAffichage(void);
void AffichePointInterrogation(void);
void ResetGrille(void);
void AfficheBtnLectureHover(void);
void AfficheBtnResetHover(void);
void AffichePointInterrogationHover(void);
void AfficheBtnRadio(int btnRad);
void boutongauche(int boutond);
void boutondroite(int boutond);
void AfficheBtnZoom(void);
void GosperGliderGunDroite(int initX, int initY);
void GosperGliderGunGauche(int initX, int initY);
void LogicGateNOT(int initX,int initY,int blocage);
void LogicGateAND(int initX,int initY,int blocage1,int blocage2);
void LogicGateOR(int initX,int initY,int blocage1,int blocage2);
void InitialisationTableaux(void);
void afficherRectangleZoom(void);
void AffichageBoutonGrille(void);
void AfficheFlecheDroite(void);
void AfficheFlecheGauche(void);
void AfficheBtnGrille(void);
void AfficheBtnLoupe(void);
void AfficheLogicGateNOT(void);
void AfficheLogicGateAND(void);
void AfficheLogicGateOR(void);
void AfficheCompilationGates(void);
int ConversionBinaireDecimal(void);

#endif
