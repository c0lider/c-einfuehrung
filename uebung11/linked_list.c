#include <stdio.h>
#include <stdlib.h>

// Datentyp fuer die Knoten der verketteten Liste. Die Listenelemente sind
// Zahlen. Ein Knoten besteht aus einer Zahl und aus einem Zeiger.
struct node {
	int number;
	struct node *next;
};


// Funktionsprototyp zum Hinzufuegen einer neuen Zahl in die Liste. 
// Die Zahl wird am Listenkopf hinzugefuegt.
// Erhaelt die Zahl und den aktuellen Listenkopf als Parameter, liefert
// den neuen Listenkopf zurueck
struct node *insert_at_head(int x, struct node *list);

// Funktionsprototyp zum Anzeigen der Listenelemente. Erhaelt den Listenkopf
// als Parameter, hat keinen Rueckgabewert (void)
void display_list(struct node *list);

// Funktionsprototyp zum Addieren der Zahlen in der Liste. Erhaelt den
// Listenkopf, liefert die Summe der Zahlen in der Liste zurueck. Liefert 0
// zurueck fuer die leere Liste. Den Funktionsrumpf weiter unten ergaenzen!
int sum_up_elements(struct node *list);

// Funktionsprototyp zum Hinzufuegen einer neuen Zahl in die Liste. 
// Die Zahl wird am Listenende hinzugefuegt.
// Erhaelt die Zahl und den aktuellen Listenkopf als Parameter, liefert
// den neuen Listenkopf zurueck. Den Funktionsrumpf weiter unten ergaenzen!
struct node *insert_at_tail(int x, struct node *list);

// Sucht das Element e in der Liste l.
// Falls e in l vorhanden ist, gibt sie die Stelle in der Liste zurueck.
// Ansonsten gibt sie eine -1 zurueck.
char search(int e, struct node *l);

int main() {
	// my_list ist ein Zeiger auf struct node. Urspruenglich NULL, Liste ist leer
	struct node *my_list = NULL;

	// Die Zahl 3 in die Liste hinzufuegen. Den zurueckgelieferten Zeiger 
	// der my_list zuweisen, d.h., my_list zeigt danach zum Knoten mit der Zahl
	// "3".
	my_list = insert_at_head(3, my_list);

	// Noch ein paar weitere Zahlen einfuegen

	my_list = insert_at_head(15, my_list);
	// Jetzt ist 15 am Listenkopf!

	my_list = insert_at_head(-4, my_list);
	// Jetzt ist -4 am Listenkopf!

	my_list = insert_at_head(99, my_list);
	// Jetzt ist 99 am Listenkopf!

	// Die Listenelemente anzeigen
	display_list(my_list);

  int s = search(15, my_list);
  if (s == -1) 
    printf("Das Element wurde nicht gefunden\n");
  else
    printf("Das Element wurde gefunden an der Stelle %d\n", s);

	return(0);
}	

char search(int e, struct node *l) {
  struct node *z = l;
  int count = 1;

  while (z != NULL) {
    if (e == z->number) {
      return(count);
    }
    ++count;
    z = z->next;
  }
  return(-1);
}

// Implementierung der Funktion insert_at_head
struct node *insert_at_head(int x, struct node *z) {
	struct node *new_node = malloc(sizeof(struct node));
	if (new_node == NULL) {
		printf("Fehler bei der Speicherallokation\n");
		return(NULL);
	}

	// Die Zahl x in den neuen Knoten speichern
	new_node->number = x;
	// Verweis zum naechsten Knoten, naemlich zum aktuellen Listenkopf
	new_node->next = z;

	// Zeiger zum neuen Knoten zurueckgeben
	return(new_node);
}

// Implementierung der Funktion display_list
void display_list(struct node *z) {
	while (z != NULL) {
		printf("%d ", z->number);
		z = z->next;
	}
	printf("\n");
}

// TODO:
int sum_up_elements(struct node *z) {
	// ...
  return(-1);
}

// TODO:
struct node *insert_at_tail(int x, struct node *list) {
  // ...
  return(NULL);
}
