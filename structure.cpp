#include <string>

using namespace std;

class PhpFile
{
  PhpZone zones[];
};


class PhpZone
{
  Operator operators[];
};

class Operator
{
  int id;
  string name;
  string representation;
  string documentation;
};

class Declaration: protected Operator
{
  static const int groupId = 0;
};

class Action: protected Operator
{
  static const int groupId = 1;
};

class Comment: protected Operator
{
  static const int groupId = 2;
};


