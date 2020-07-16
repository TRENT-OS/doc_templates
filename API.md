# API Documentation Template

## Overview

What is the purpose of this API; just a short text.

### Concepts

(Only if API has new concepts that need to be understood to use it)

### Architecture

(Only if API is sufficiently complex and interacts with other parts of the system)

### Implementation

No details, just a few generic points how it works internally.

## Usage

This is how the API can be instantiated in the system.

### Declaration of API library in CMake

Some short text about how to declare the API in the CMakeLists.txt:

The API library can be compiled in three different modes:

* os_api_x
* os_api_y
* os_api_z

## Example

Describe examples for the usage for all the relevant parts.

### Instantiation of API in CMake

See above, just with concrete names and parameters.

```C
DeclareCAmkESComponent(
    <NameOfComponent>
    SOURCES
        ...
    C_FLAGS
        ...
    LIBS
        ...
        os_api_x
)
```

### Using the API in C

Maybe add some minimal code examples.

Keep it minimal: We have the doxygen documentation to document all the parameters, functions, etc.

```C
#include "API.h"

static const API_cfg = {
}

...

int run()
{
    API_init(&hApi, &cfg);

    API_do(x, y);

    API_free(hApi);
}
```
