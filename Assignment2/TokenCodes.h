#ifndef TOKENCODES_H
#define TOKENCODES_H

using namespace std;

enum TokenCodes
{
  PLUS, MINUS, TIMES, SLASH, EQL, LPAREN, RPAREN, PERIOD, COMMA, SEMICOLON,
  COLON, BECOMES, LSS, LEQ, NEQ, GTR, GEQ, ANDSYM, BEGINSYM, BOOLSYM, DIVSYM,
  DOSYM, DOWNTOSYM, ELSESYM, ENDSYM, FALSESYM, FORSYM, IFSYM, INTSYM, MODSYM,
  NOTSYM, ORSYM, PROGSYM, READSYM, READLNSYM, REALSYM, REPEATSYM, THENSYM,
  TOSYM, TRUESYM, UNTILSYM, VARSYM, WHILESYM, WRITESYM, WRITELNSYM, IDENT,
  NUMLIT, EOI, NAL
};

#endif
