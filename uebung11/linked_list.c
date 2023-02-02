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

struct node *remove_at_head(struct node *list);

struct node *remove_at_tail(struct node *list);

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

    my_list = insert_at_tail(321, my_list);

    display_list(my_list);

    my_list = remove_at_tail(my_list);
    my_list = remove_at_tail(my_list);
    my_list = remove_at_tail(my_list);
    my_list = remove_at_tail(my_list);
    my_list = remove_at_tail(my_list);
    my_list = remove_at_tail(my_list);
    my_list = remove_at_tail(my_list);


// Die Listenelemente anzeigen
	display_list(my_list);

	int s = search(15, my_list);

	if (s == -1) {
		printf("Das Element wurde nicht gefunden\n");
	}
	else {
		printf("Das Element wurde gefunden an der Stelle %d\n", s);
	}

	printf("Sum of elements = %d\n", sum_up_elements(my_list));

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

int sum_up_elements(struct node *z) {
	int sum = 0;

	while (z != NULL) {
		sum += z->number;
		z = z->next;
	}
	return sum;
}

struct node *insert_at_tail(int x, struct node *list) {
	struct node *new_node = malloc(sizeof(struct node));
    struct node *node_at_tail = list;

    // catch memory allocation fail
    if (new_node == NULL) {
        printf("Fehler bei der Speicherallokation\n");
        return(NULL);
    }

    // insert at end of empty list
    if (list == NULL) {
        new_node->next = list;
        new_node->number = x;
        return new_node;
    }

    // insert at the end
	while (node_at_tail->next != NULL) {
        node_at_tail = node_at_tail->next;
    }

    new_node->number = x;
    node_at_tail->next = new_node;

    return list;
}

struct node *remove_at_head(struct node *list) {
    // empty list
    if (list == NULL) {
        return NULL;
    }

    // list with at least one element
    struct node *second_node = list->next;
    free(list);
    return second_node;
}

struct node *remove_at_tail(struct node *list) {
    if (list == NULL) {
        return NULL;
    }
    struct node *node_at_tail = list;
    struct node *second_to_last_node = list->next;

    if (second_to_last_node == NULL) {
        free(list);
        return(NULL);
    }

    while (node_at_tail->next != NULL) {
        second_to_last_node = node_at_tail;
        node_at_tail = node_at_tail->next;
    }

    second_to_last_node->next = NULL;
    free(node_at_tail);
    return list;
}
