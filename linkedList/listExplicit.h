#ifndef listexplicit_h_included
#define listexplicit_h_included

struct listelement{
	int info;
	listelement* next;
};

struct listexplicit{
	listelement* first;
};

void createempty(listexplicit& i);
void insertfirst(listexplicit& i, listelement* inputelement);
void insertfirst(listexplicit& i, int inputinteger);

#endif
