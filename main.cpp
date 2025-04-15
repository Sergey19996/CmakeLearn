#include <iostream>
#include <OLASConfig.h>

#include <glad/glad.h>
#include <GLFW/glfw3.h>



#ifdef USE_ADDER
#include <adder.h>
#endif


int main(int argc, char* argv[]){



    #ifdef USE_ADDER
std::cout<<"using Adder lib :  2 + 3  = " << nearlymath::add(2,3)<<'\n'<<std::endl;
#else
std::cout << " No adder include " << std::endl;
#endif

std::cout<<argv[0] << " VERSION " << OLAS_VERSION_MAJOR << "."<<OLAS_VERSION_MINOR<<'\n';



GLFWwindow* window;

    if( !glfwInit() )
    {
        fprintf( stderr, "Failed to initialize GLFW\n" );
        exit( EXIT_FAILURE );
    }

    // glfwWindowHint(GLFW_DEPTH_BITS, 16);
    // glfwWindowHint(GLFW_TRANSPARENT_FRAMEBUFFER, GLFW_TRUE);

    window = glfwCreateWindow( 300, 300, "Gears", NULL, NULL );
    if (!window)
    {
        fprintf( stderr, "Failed to open GLFW window\n" );
        glfwTerminate();
        exit( EXIT_FAILURE );
    }
glfwSwapInterval( 1 );

 // Main loop
    while( !glfwWindowShouldClose(window) )
    {
     

        // Swap buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // Terminate GLFW
    glfwTerminate();

    // Exit program
    exit( EXIT_SUCCESS );


return EXIT_SUCCESS;

}