# CMakeList.txt : CMake project for Design Patterns, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("Design Patterns")

# Add source to this project's executable.
add_executable (CMakeTarget 

# Main program source files
    "Main.cpp"
    
    # Singleton pattern
    "Singleton/SingletonClass.h"
    "Singleton/SingletonClass.cpp"
    "Singleton/SingletonTest.cpp"
    "Singleton/SingletonTest.h"

    # Builder pattern
    "Builder/House.h"
    "Builder/House.cpp"
    "Builder/Builder.h"
    "Builder/WoodHouseBuilder.h"
    "Builder/WoodHouseBuilder.cpp"
    "Builder/BrickHouseBuilder.h"
    "Builder/BrickHouseBuilder.cpp"
    "Builder/Director.h"
    "Builder/Director.cpp"
    "Builder/BuilderTest.h"
    "Builder/BuilderTest.cpp"
    
    # Prototype pattern
    "Prototype/Shape.h"
    "Prototype/Shape.cpp"
    "Prototype/Circle.h"
    "Prototype/Circle.cpp"
    "Prototype/Rectangle.h"
    "Prototype/Rectangle.cpp"
    "Prototype/PrototypeTest.h"
    "Prototype/PrototypeTest.cpp"

    # Factory pattern
    "Factory/CommandFactory.h" 
    "Factory/Command.h"
    "Factory/AddCommand.h"
    "Factory/AddCommand.cpp"
    "Factory/RemoveCommand.h"
    "Factory/RemoveCommand.cpp"
    "Factory/FactoryTest.h"
    "Factory/FactoryTest.cpp"

    # Abstract Factory pattern
    "Abstract Factory/CommandFactory.h"
    "Abstract Factory/Command.h" 
    "Abstract Factory/AddCommand.h" 
    "Abstract Factory/AddCommand.cpp"
    "Abstract Factory/RemoveCommand.h" 
    "Abstract Factory/RemoveCommand.cpp"
    "Abstract Factory/AbstractFactoryTest.cpp"
    "Abstract Factory/AddCommandFactory.h"
    "Abstract Factory/RemoveCommandFactory.h"
    "Abstract Factory/RemoveCommandFactory.cpp"
    "Abstract Factory/AddCommandFactory.cpp"

    # Adapter pattern
    "Adapter/ILogger.h"  
    "Adapter/Logger.h"  
    "Adapter/Logger.cpp" 
    "Adapter/ThirdPartyLogger.h" 
    "Adapter/ThirdPartyLogger.cpp"
    "Adapter/LoggerAdapter.h" 
    "Adapter/LoggerAdapter.cpp" 
    "Adapter/AdapterTest.h" 
    "Adapter/AdapterTest.cpp" 
    
    #Composite pattern
    "Composite/OrganizationComponent.h"
    "Composite/Employee.h"
    "Composite/Employee.cpp"
    "Composite/Department.h" 
    "Composite/Department.cpp" 
    "Composite/CompositeTest.h" 
    "Composite/CompositeTest.cpp"
    
    )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeTarget PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
