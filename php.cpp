#include<iostream>
#include<string>

using namespace std;

class Variable
{
protected: int typeId;
protected: string name;
protected: Type value;
};

class Type
{
protected: int id;
protected: string name;
};

class Integer: protected Type
{
protected: int id = 1;
protected: string name = "integer";
protected: long minValue32      = -2147483648;
protected: long maxValue32      =  2147483647;
protected: long long minValue64 = -9223372036854775807;
protected: long long maxValue64 =  9223372036854775807;
};

class Double: protected Type
{
protected: int id = 2;
protected: string name          = "double";
protected: int mantMin          = -308;
protected: int mantMax          =  308;
protected: double minModMantMin = -2.23;
protected: double maxModMantMin =  2.23;
protected: double minModMantMax = -1.79;
protected: double maxModMantMax =  1.79;    
};

class string: protected Type
{
protected: int id       = 3;
protected: string name  = "string";
protected: long maxSize = 2147483648;
};






int main(int argc, char* argv[])
{
  return 0;
}

