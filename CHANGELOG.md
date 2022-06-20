## 2022-06-19

* Fix compile error (add -libm to compile command)

## 2006-04-30 (1.0.0)

* First release

## 2006-04-15

* Updated alt record - added a new id section
    * id1 for tnode
    * id2 for same tnode, different occurrence
    * used in regexps with a multiple/variable length group with alternation
      like (a|b){2}

## 2004-08-21

* altlist - a list of alternation records
* grouplist - a list of group records
* grouprecord - a record to remember features about a group
* re_perm - A list of charsets.  When a single character from each of the
  charsets is selected, a single word of the regular expression grammar is
  created.
* vlrlist - a list of vlrs

## 2004-08-15

* alt - a record to keep track of alternation nodes
* vlr - a record to keep track of alternations and variable length nodes

## 2004-07-10

* parse_regex - functions for parsing a regex into a tnode tree

## 2004-07-09

* char_set - character set
* debug - debugging print functions

## 2004-07-04

* build_structs - read the element tree, and build permutation structures for
  each possible arrangement of the varying length quantifiers
* data
* main
* tnode - node of tree representing parsed regular expression
* program_args

## 2004-02-27

* memory - safe functions for memory usage
* silist - simple list structure for integers
