// [official Python Tutor example] 

// if you uncomment the destructor-related code, the visualization
// gets messed up :(
class Computer {
public:
  Computer();
  //~Computer();
  void setspeed ( int p );
protected:
  int processorspeed;
};

Computer::Computer() {
  processorspeed = 0;
}

//Computer::~Computer() {
//}

void Computer::setspeed ( int p ) {
  processorspeed = p;
}

int main() {
  Computer* heapComputeArray = new Computer[3];
  heapComputeArray[1].setspeed(1);
  delete[] heapComputeArray;
  return 0;
}

//in https://pythontutor.com/render.html#mode=edit step by step

// Other https://www.programiz.com/cpp-programming/online-compiler/