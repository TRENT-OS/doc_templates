# Component Template

## Overview

What is the purpose of this component; just a short text.

### Concepts

(Only if the component has new concepts that need to be understood to
use it)

### Architecture

(Only if the component is sufficiently complex and interacts with other parts of
the system)

### Implementation

No details, just a few generic points on how it works internally.

## Usage

This is how the component can be instantiated in the system.

### Declaration of the component in CMake

Some short text about how to declare the component in the CMakeLists.txt, wether
it needs an XXX_client as well and what them params of the
DeclareCAmkESComponent_XXX() are:

```C
DeclareCAmkESComponent_XXX(
    <NameOfComponent>
)
```

### Configuration of the component in system_config.h

Some short text about the defines to be set here and what they mean:
```C

```

### Instantiation and configuration in CAmkES

Some short text about CAmkES setup:

#### Declaring the component

```C
#include "XXX/XXX.camkes"
DECLARE_COMPONENT_XXX(<NameOfComponent>)
```

#### Instantiating and connecting the component

```C
DECLARE_AND_CONNECT_INSTANCE_XXX(
    <NameOfComponent>, <NameOfInstance>,
    YYY.yyy_rpc,
    YYY.yyy_dp)
```

#### Configuring the instance

```C
CONFIGURE_INSTANCE_XXX(
    <NameOfInstance>,
    0, 1, 2, ...)
```

## Example

Describe examples for the usage of all the relevant parts.

### Instantiation of the component in CMake

See above, just with concrete names and parameters.

### Configuration in system_config.h

See above, just with concrete names and parameters.

### Instantiation and configuration of the component  in CAmkES

See above, just with concrete names and parameters.

#### Declaring the component in the main CAmkES file

See above, just with concrete names and parameters.

#### Instantiating and connecting the component in the main CAmkES file

See above, just with concrete names and parameters.

#### Configuring the instance in the main CAmkES file

See above, just with concrete names and parameters.

### Using the component's interfaces in C

Maybe add some minimal code examples, e.g. highlighting how to use client-side
libraries. But keep it minimal!!
