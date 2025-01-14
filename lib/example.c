#include "bruter.h"

function(example_function)
{
    // code goes here...
    return -1;
}

init(example)
{
    register_builtin(vm,"example.function",example_function);

}
