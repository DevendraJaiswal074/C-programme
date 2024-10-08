// Given n names and phone numbers, assemble a phone book that maps friends' names to their respective phone numbers. You will then be given an unknown number of names to query your phone book for. For each name queried, print the associated entry from your phone book on a new line in the form name=phoneNumber; if an entry for the name is not found, print Not found instead.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

typedef struct pair {
	char* first;
	char* second;
	struct pair* next;
} pair;

typedef struct dict {
	int size;
	pair** table;
} dict;

unsigned int hash(char* s) {
	unsigned int hashval = 1337;
	for (int i=0; i<(int)strlen(s); i++) {
		hashval = hashval * s[i] + 0xdeadbeef;
		hashval %= 0x3f3f3f3f;
	}
	return hashval;
}

void setsize(dict* d, int s) {
	d->table = malloc(s * sizeof(pair*));
	d->size = s;
	bzero(d->table, s * sizeof(pair*));
}

void insert(dict* d, char* k, char* v) {
	pair* p = malloc(sizeof(pair));

	char* s = malloc(strlen(k) * sizeof(char) + 1);
	char* t = malloc(strlen(v) * sizeof(char) + 1);
	strcpy(s, k);
	strcpy(t, v);

	p->first = s;
	p->second = t;
	p->next = NULL;

	unsigned int hashval = hash(k);
	if (d->table[hashval % d->size] == NULL)
		d->table[hashval % d->size] = p;
	else {
		pair* q = d->table[hashval % d->size];
		while (q->next)
			q = q->next;
		q->next = p;
	}
}

char* retreive(dict* d, char* k) {
	unsigned int hashval = hash(k);
	pair* p = d->table[hashval % d->size];

	if (!p) return NULL;

	while (strcmp(p->first, k) != 0) {
		if (p->next) p = p->next;
		else return NULL;
	}

	return p->second;
}

int main(void) {
	dict* d = malloc(sizeof(dict));
	setsize(d, 10000007);

	int T;
	scanf("%d", &T);

	char s[37];
	char t[37];
	while(T--) {
		scanf("%s %s", s, t);
		insert(d, s, t);
	}

	while(scanf("%s", s) != EOF) {
		if (retreive(d, s) != NULL)
			printf("%s=%s\n", s, retreive(d, s));
		else
			printf("Not found\n");
	}

	return 0;
}