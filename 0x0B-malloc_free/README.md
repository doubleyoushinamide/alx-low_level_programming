# Malloc and free
## Memory management in C

<ins> **Outline** </ins>
* Float like a butterfly, string like a bee of prototype <br>
``` char *create_array(unsigned int size, char c); ```
* The woman who has no imaginations has no wings <br>
* Prototype: ``` char *_strdup(char *str); ```
** The ``` _strdup() ``` function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
** Returns ``` NULL ``` if ``` str = NULL ```
** On success, the _strdup function returns a pointer to the duplicated string.<br> It returns ``` NULL ``` if insufficient memory was available
...
