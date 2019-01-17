//
//  filewrite.cpp
//  FILEIO
//
//  Created on 1/16/19.
//
//

#include <fstream>
#include <string>
#include <iostream>
using namespace std ;

int main()
{
    string haiku = "\n\tAn old silent pond..." ;
    haiku.append( "\n\tA frog jumps into the pond" ) ;
    haiku.append( "\n\tsplash! Silence again." ) ;

    
    ofstream writer( "haiku.txt" ) ;
    
    if( ! writer )
    {
        cout << "Error opening file for output" << endl ;
        return -1 ;
    }
    
    writer << haiku << endl ;
    
    writer.close() ;
    
    return 0 ;
}
