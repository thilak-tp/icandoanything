#include <iostream>

// A function to implement memcpy function
using namespace std;

// A general memcpy to copy data from source to destination buffer of the
// given size
void memcpyClone( void* dest, const void* src, int size) {
   
   // Convert the void pointers to character pointers 
   // so that we can reference each of the bytes  
   char* d = (char*) dest;
   const char* s = (char*) src;

  // Loop throught the size and copy from source to destination
  for(int i=0; i<size; i++) {
    d[i] = s[i];
  }
}

int main() {
  char sourceStr[] = "Source String";
  char dstStr[20];
  int sourceSize = 0;
  while (sourceStr[sourceSize] != '\0') {
    sourceSize++;
  }
  sourceSize++;
  memcpyClone(dstStr, sourceStr, sourceSize);
  cout<<"The copied data is "<<dstStr;

  int srcArr[] = {1,2,3,4,5,6};
  int dstArr[10];
  int srcCount = sizeof(srcArr) / sizeof(int);
  int srcSize = sizeof(srcArr);
  memcpyClone(dstArr, srcArr, srcSize);

  cout<<"The destination array is "<<endl;
  for( int i=0; i<srcCount; i++) {
    cout<<dstArr[i]<<"->";
  }
  return 0;
}
