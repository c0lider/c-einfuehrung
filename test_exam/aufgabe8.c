#include <stdio.h>
#include <stdlib.h>

// Datentyp fuer die Knoten der verketteten Liste. Die Listenelemente sind
// Fließkommazahlen. Ein Knoten besteht aus einer Fließkommazahl und aus einem 
// Zeiger.
struct node {
	double data;
	struct node *next;
};

// Funktion zum Ausgeben der Listenelemente. Der Listenkopf wird als 
// Parameter übergeben. Sie liefert keinen Rückgabewert zurück (void-Funktion).
void print_list(struct node *current_node) {
	while (current_node != NULL) {
		printf("%.2lf  ", current_node->data);
		current_node = current_node->next;
	}
	printf("\n");
}

int count_occurrence(double d, struct node *current_node) {
    int occurences = 0;

    while (current_node != NULL) {
        if (current_node->data == d) {
            occurences++;
        }
        current_node = current_node->next;
    }
    return occurences;
}

struct node *insert_sorted(double number, struct node *z) {
    struct node *newNode = malloc(sizeof(struct node));

    if (newNode == NULL) {
        printf("Fehler bei der Speicherallokation.");
        exit(1);
    }

    struct node *currentNode = z;
    struct node *previousNode = NULL;
    
    while (currentNode != NULL && currentNode-> data < number) {
        previousNode = currentNode;
        currentNode = currentNode->next;
    }
    newNode->next = currentNode;
    newNode->data = number;

    if (previousNode == NULL) {
        return newNode;
    }

    previousNode->next = newNode;
    return(z);
}

int main() {
	// Die Liste ist ursprünglich leer, Listenkopf ist NULL.
	struct node *list = NULL;

	list = insert_sorted(30, list);
    list = insert_sorted(17.3, list);
	list = insert_sorted(-2.0, list);
	list = insert_sorted(7.3, list);
	list = insert_sorted(-1.0, list);
	list = insert_sorted(17.3, list);
	list = insert_sorted(-2.0, list);
	list = insert_sorted(20, list);
    
	// Die Elemente der Liste ausgeben.
	print_list(list);

    printf("\n17.3 kommt %d mal vor\n", count_occurrence(17.3, list));

	return(0);
	
}