//
//  main.cpp
//  TimeToEmoji
//
//  Created by Andrea Ruffino on 12/03/2016.
//  Copyright © 2016 Andrea Ruffino. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <string>
#include <time.h>


time_t t = time( 0 );
struct tm * now = localtime( &t );


std::string emojiTime(int h, int m)
{
    std::ostringstream out;
    out << h << ":" << m << std::endl;
    
    if (m > 45){ h++; m = 0; }
    
    int hr = h % 12;
    int qm = (m > 15) ? 1 : 0;
    
    switch (hr)
    {
        case 0:
            return ((qm == 1)? "🕧" : "🕛");break;
            
        case 1:
            return ((qm == 1)? "🕜" : "🕐");break;
            
        case 2:
            return ((qm == 1)? "🕝" : "🕑");break;
            
        case 3:
            return ((qm == 1)? "🕞" : "🕒");break;
            
        case 4:
            return ((qm == 1)? "🕟" : "🕓");break;
            
        case 5:
            return ((qm == 1)? "🕠" : "🕔");break;
            
        case 6:
            return ((qm == 1)? "🕡" : "🕕");break;
            
        case 7:
            return ((qm == 1)? "🕢" : "🕖");break;
            
        case 8:
            return ((qm == 1)? "🕣" : "🕗");break;
            
        case 9:
            return ((qm == 1)? "🕤" : "🕘");break;
            
        case 10:
            return ((qm == 1)? "🕥" : "🕙");break;
            
        case 11:
            return ((qm == 1)? "🕦" : "🕚");break;
            
        default:
            return "⚠️";break;
    }
    
    return out.str();
}

int main(int argc, const char * argv[])
{
    std::cout << emojiTime(now->tm_hour, now->tm_min) << std::endl;
    return 0;
}
