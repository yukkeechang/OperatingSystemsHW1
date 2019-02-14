//
//  main.c
//  CPractice
//
//  Created by Yukkee chang on 2/14/19.
//  Copyright © 2019 Yukkee chang. All rights reserved.
//


#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
int main (int argc, char* argv[])
{ char* filepath = argv[1];
    //#0 Part A
    int returnval;
    int readAccess;
    int writeAccess;
    
    // Check file existence
    returnval = access (filepath, F_OK);
    // Check read access ...
    readAccess = access (filepath, R_OK);
    // Check write access ...
    writeAccess = access (filepath, W_OK);
    //see if we have read write access
    if (returnval == 0) printf ("\n %s exists\n", filepath);
    else {
        if (errno == ENOENT) printf ("%s does not exist\n", filepath);
        else if (errno == EACCES) printf ("%s is not accessible\n",filepath);
        else printf("none of the above ");
        return 0;
    }
    

    
    
    
    return 0;
}
