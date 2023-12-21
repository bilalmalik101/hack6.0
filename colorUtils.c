#include<stdio.h>
#include<math.h>
#include"colorUtils.h"
//function to find max 
double max(double red,double green,double blue){
    double max=(red>green)?red:green;
    return(max>blue)?max:blue;
}
//convert rgb value to scale
double scale(int r){
    return(double)r/255.0;
}