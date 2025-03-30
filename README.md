# Export settings
Template name: C++ Empty Project \
Template descritpion: YES THIS ONE!

## Disable warnings for headers
```
#pragma warning(push, 1)
#include <....>
#include <....>
#pragma warning(pop)
```

## Disable warnings for block of code
```
#pragma warning(push)
#pragma warning(disable: 4191 4190)
// code
// code
// code
#pragma warning(pop)
```
## Disable warnings for one line
```
#pragma warning(suppress: 4191 4190)
// line that triggers specfic warning
```
