//
//  main.c
//  HomeworkOnePartB
//
//  Created by Yukkee chang on 2/14/19.
//  Copyright © 2019 Yukkee chang. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

int main(int argc, const char * argv[]) {
    //#0 Part B: create, open, and close file destination.txt
    int newfile = open("destination.txt", O_RDWR | O_CREAT);
    if(newfile == -1) printf("error opening the destination.txt");
    else printf("\n open destination.txt successful!\n");
    int closeFile = close(newfile);
    if(closeFile == 0) printf("\n  closing destination.txt successful\n");
    return 0;
}
