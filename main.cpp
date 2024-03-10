#include "vec3.h"
#include "color.h"


#include <iostream>

int main(){
    //image dimensions
    int image_width = 256;
    int image_height = 256;

    //render
    std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";
    for(int j  = 0;j < image_height;++j){
        std::clog << "\rScanlines remaining: " << (image_height - j) << ' ' << std::flush;
        for(int i = 0;i < image_width;++i){
           auto pixel_color = color(double(i)/(image_width-1), double(j)/(image_height-1), (double(i)+double(j))/(image_height + image_width)/1.5);
            write_color(std::cout, pixel_color);
        }
    }
    std::clog << "\rDone.                 \n";
}

/*
TODO:
1. Raytracer
2. Spring Backend project
3. Socket.io for messaging app
4. node.js chess multiplayer
*/