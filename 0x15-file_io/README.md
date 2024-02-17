0x15-file_io
I learned this from BigBoxSWE that projects aren't for perfection but for the process it takes
Learning to see different concepts and outcomes
This is the outcome for this project:


Messing with File descriptors and Opening, Closing and
Interaction of programs with files is the way to produce meaningful programs to assist in the solving problems
Muhwezi

Prototype: int create_file(const char *filename, char *text_content);
where filename is the name of the file to create and text_content is a NULL terminated string to write to the file
Returns: 1 on success, -1 on failure (file can not be created, file can not be written, write “fails”, etc…)
The created file must have those permissions: rw-------. If the file already exists, do not change the permissions.
if the file already exists, truncate it
if filename is NULL return -1
if text_content is NULL create an empty file

//Create_file called filename
	open(filename, O_Create)

