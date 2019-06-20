//
//  main.cpp
//  文件1
//
//  Created by s20181106119 on 2019/6/20.
//  Copyright © 2019 s20181106119. All rights reserved.
//

#include <iostream>
#include<fstream>

using namespace std;
int main(int argc, const char * argv[]) {
    
    ifstream in("/Users/s20181106119/Desktop/裁判信息及分数.txt");
    ifstream inp("/Users/s20181106119/Desktop/学生信息.txt");
    {
        struct information
        {
            char name1[3]; //学生姓名
            int number[3];//学号
            char cllege[3];//学院
            int score[3],i,l,t; //裁判给学生的分数
            char name2[7]; //裁判姓名
        };
        
        
        
        
        
        
        in.close();
        inp.close();
    }
    ofstream output("/Users/s20181106119/Desktop/最终排名.txt");
    {
        int i,l;
        int s[3];
        char name[7];
        for(l=0;l<7;l++)
        {
            output<<name[l];
            for(i=0;i<3;i++)
            {
                output<<s[i];
                
            }
        }
        
        output.close();
    }
    
    return 0;
}
