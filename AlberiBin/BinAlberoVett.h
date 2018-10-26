
#ifndef BINALBEROVETT_H
#define BINALBEROVETT_H
#define MAXNUM 1024		//dimensione del vettore

using namespace std;

class BinAlberoVett
	{
		public:
 			typedef int tipoelem;
 			typedef int nodo;

         struct nucleo
         	{
         	    bool exist;
               tipoelem elem;
            };
            
         typedef struct nucleo componente;
         
            BinAlberoVett();
		    ~BinAlberoVett();
		 
         	void creaBinAlbero();
			bool binAlberoVuoto();
			nodo binRadice();
			nodo binPadre(nodo);
			nodo figlioSinistro(nodo);
			nodo figlioDestro(nodo);
			bool sinistroVuoto(nodo);
			bool destroVuoto(nodo);
			void cancSottoBinAlbero(nodo);
			tipoelem leggiNodo(nodo);
			void scriviNodo(tipoelem,nodo);
			void insBinRadice();
			void insFiglioSinistro(nodo);
			void insFiglioDestro(nodo);

 		private:
 			componente alberobin[MAXNUM];
	};

//implementazione dei costruttori e del distruttore
BinAlberoVett::BinAlberoVett()
{
   	creaBinAlbero();
}

BinAlberoVett::~BinAlberoVett()
{
}

void BinAlberoVett::creaBinAlbero()
{
     for(int i=0;i<MAXNUM;i++)
			alberobin[i].exist = false;
}

bool BinAlberoVett::binAlberoVuoto()
{
   	return alberobin[1].exist == false;
}

BinAlberoVett::nodo BinAlberoVett::binRadice()
{
      if(!binAlberoVuoto())
   		return 1;
}

BinAlberoVett::nodo BinAlberoVett::binPadre(nodo n)
{
      if(n>2)
	   	return (n/2);
}

BinAlberoVett::nodo BinAlberoVett::figlioSinistro(nodo n)
{
      if(alberobin[2*n].exist)
    		return 2*n;
      else
      	cout<<"\n Il nodo non ha figlio sinistro";
}

BinAlberoVett::nodo BinAlberoVett::figlioDestro(nodo n)
{
      if(alberobin[2*n+1].exist)
    		return 2*n+1;
      else
      	cout<<"\n Il nodo non ha figlio destro";
}

bool BinAlberoVett::sinistroVuoto(nodo n)
{
  		return !(alberobin[2*n].exist);
}

bool BinAlberoVett::destroVuoto(nodo n)
{
  		return !(alberobin[2*n+1].exist);
}

void BinAlberoVett::cancSottoBinAlbero(nodo n)
{
		if(alberobin[2*n].exist)
      	cancSottoBinAlbero(2*n);

		if(alberobin[2*n+1].exist)
      	cancSottoBinAlbero(2*n+1);

      alberobin[n].exist=false;
}

BinAlberoVett::tipoelem BinAlberoVett::leggiNodo(nodo n)
{
   	return alberobin[n].elem;
}

void BinAlberoVett::scriviNodo(tipoelem a,nodo n)
{
		alberobin[n].elem=a;
}

void BinAlberoVett::insbinradice()
{
   	if(binalberovuoto())
			alberobin[1].exist=true;
}

void BinAlberoVett::insFiglioSinistro(nodo n)
   {
		if(2*n <= MAXNUM)
			alberobin[2*n].exist=true;
      else
      	cout<<"\n Hai oltrepassato il limite di memoria disponibile";
   }

void BinAlberoVett::insFiglioDestro(nodo n)
   {
		if(2*n+1<=MAXNUM)
			alberobin[2*n+1].exist=true;
      else
      	cout<<"\n Hai oltrepassato il limite di memoria disponibile";
   }

#endif
