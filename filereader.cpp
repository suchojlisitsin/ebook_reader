//============================================================================
// Name        : filereader.cpp
// Author      : da
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>

#include <codecvt>
#include <fcntl.h>
#include <io.h>
#include <string>
#include <Windows.h>
#include <cstdio>

int main (){
	SetConsoleOutputCP(CP_UTF8);
	setvbuf(stdout, nullptr, _IOFBF, 1000);


  std::ifstream file("books\\razni.txt");
  std::string str;

  while(getline(file,str)){
	  std::cout << str << std::endl;
  }
  std::cin>>str;


  //while (std::getline(file, str)) {
  /*while (std::getline(file, str)) {
    std::cout << str << std::endl;
  }*/
  /*wchar_t c;
  while ((c = file.get()) != file.eof()){
          std::wcout << c;
      }
      file.close();*/
	  return 0;

}
