# Update

## Specification

| JIRA ID           |  SEOS-000         |
|-------------------|-------------------|
| Owner             | Slawomir Kwasniak |
| Deputy            |                   |
| Start Date        |                   |
| Estimated Effort  |                   |

### Description

Firmware Update Manager

### Architecture

@startuml
title Component Diagram

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
4. Actual numbers don't matter, just that it's a number greater than the
  previous.
    1. Ordered sub-list
5. And another item.
    * There shall be an abstract interactive shall reachable via UART and
      Ethernet can authenticate a user and accepts commands send by the user.
    * If the user sends a new firmware to shell, the shell shall forward it to
      the Secure Update component.

* Update shall store a given firmware in some storage (non-volatile).
* Update shall only allow an update to the newer version of the Firmware.
* Update shall allow rolling back to the previous version of the Firmware.

### Constraints

What are the possible development constraints?

### Preconditions

What are the possible development preconditions?

* Requires drivers for target platform up & running.
* Requires a stable FOO component.

### Coding Language

* C on the SEOS side (server).
* Client implementation TBD (Python?).

## Design Stage I

### API Definition

TBD

### Test Definition

* Unit tests.
* Shell tests with a mock of the Secure Update.
* Secure Update with a mock of the shell.
* Integration tests.

## Design Stage II

| Milestone                                                             | MW |
|---|---|
| Do this                                                               | 2  |
| Do that                                                               | 1  |
| Do other things                                                       | 11 |

### Development Process and Milestones

## Implementation

Definition of Done:

| Criteria                                        | Done? |
|---|---|
| Code is reviewed                                |       |
| Code is commented                               |  Yes  |
| All unit tests passing on the integration line  |       |
| Full review performed                           |       |
| Component is used in the demo applications      |       |
| Documentation is available                      |       |

This DoD is applicable for every component (exceptions are to be listed below):

| Name | Reason |
|---|---|
| Bar  | No need for the demo, as this would impact the companies productivity |

## Markdown syntax examples

### Code Snippets

``` cpp
void main()
{
  std::cout << "Hello World!\n";
}
```

### Images

Here's our logo (hover to see the title text):

Inline-style:
![alt text](https://github.com/adam-p/markdown-here/raw/master/src/common/images/icon48.png "Logo Title Text 1")

Reference-style:
![alt text][logo]

[logo]: https://github.com/adam-p/markdown-here/raw/master/src/common/images/icon48.png "Logo Title Text 2"
