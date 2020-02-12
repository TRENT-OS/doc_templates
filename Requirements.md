# Update

## Specification

Data
| JIRA ID           |  SEOS-000         |
|-------------------|-------------------|
| Owner             | Slawomir Kwasniak |
| Deputy            |                   |
| Start Date        |                   |
| Estimated Effort  |                   |

## Description

Firmware Update Manager

## Architecture

@startuml
Component Diagram

actor firmware_vendor

cloud artifactory {
    artifact new_firmware
}

rectangle MCU {
    component shell
    component update

    database flash
}

firmware_vendor -0)- artifactory

firmware_vendor     -(0- shell : UART
firmware_vendor     -0)- shell : Ethernet

shell -0)- update
update -0)- flash

@enduml

@dot
digraph G {
  "Welcome" -> "To"
  "To" -> "Web"
  "To" -> "GraphViz!"
}
@enddot

## Requirements

1. First ordered list item
2. Another item
    * Unordered sub-list.
4. Actual numbers don't matter, just that it's a number greater then the
  previous.
    1. Ordered sub-list
5. And another item.
    * There shall be an abstract interactive shall reachable via UART and
      Ethernet that is able to authenticate a user and accepts commands send by
      the user.
    * If user sends a new firmware to shell, the shell shall forward it to the
      Secure Update component.

* Update shall store a given firmware in some a storage (non-volatile).
* Update shall only allow update to the newer version of the Firmware.
* Update shall allow rolling back to the previous version of the Firmware.

## Code Snippets

``` cpp
void main()
{
  std::cout << "Hello World!\n";
}
```

## Images

Here's our logo (hover to see the title text):

Inline-style:
![alt text](https://github.com/adam-p/markdown-here/raw/master/src/common/images/icon48.png "Logo Title Text 1")

Reference-style:
![alt text][logo]

[logo]: https://github.com/adam-p/markdown-here/raw/master/src/common/images/icon48.png "Logo Title Text 2"
