#define MAXINCLUDES 500

char* includes[MAXINCLUDES];
char* noincludes[MAXINCLUDES];
static countincludes = 0;
static countnoincludes = 0;

void placeinclude(char* include) {
     includes[countincludes] = include;
     countincludes++;
     }

void placenoincludes(char* noinclude) { 
    noincludes[countnoincludes] = noinclude;
    countnoincludes++;
    }

int is_empty_includes(){ return sizeof(includes); }
int is_empty_noincludes() {return sizeof(noincludes); }

int is_in_includes(char* entry){ 
    char* entryptr = includes;
    char* entry2ptr = entry;
    for(; *entryptr != '\0'; entryptr++) { 
        if (*entryptr == entry) { 
            return 1;
        }
    }
    return 0;
}

