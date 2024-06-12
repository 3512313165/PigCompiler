// compile.h will contain all prototypes for functions that need to be accessed throughout our compiler
// using this we won't have to worry about having many header files,this can make it simple
#ifndef PIGCOMPILER_H
#define PIGCOMPILER_H
int compile_file(const char* filename, const char* out_filename, int flags);

struct compile_process
{

};
#endif