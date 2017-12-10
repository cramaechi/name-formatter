# Name Formatter
A program that reads a person's name in a specific format and then outputs the name in another format.

### Synopsis
This is a program that reads a person's name in the following format: first name, then middle name, and then last name.
The program then outputs the name in the following format:

**Last_Name, First_Name, Middle_Initial**

The program places a period after a given middle initial even if the input did not contain a period.

The program accepts input names that contain no middle name or initial. For example, the input

Mary User

should produce the output

User, Mary

## Setup
1. Download and install [Git](https://git-scm.com/downloads), if you don't already have it.

2. Open terminal and run the git clone command:

   ```
   $ git clone https://github.com/cramaechi/name-formatter.git
   ```
    or [download as ZIP](https://github.com/cramaechi/name-formatter/archive/master.zip).

3. Go to the project folder:

   ```
   $ cd name-formatter
   ```

4. Compile:

   ```
   $ make
   ```
   
## Usage
Run:

```
$ ./name_formatter
```

Sample Output:
```
Enter name: Chibuikem B. Amaechi                                                                                      
                                                                                                                      
Formatted name: Amaechi, Chibuikem B.


Enter name: Chibuikem Amaechi                                                                                         
                                                                                                                      
Formatted name: Amaechi, Chibuikem


Enter name: Chibuikem B Amaechi                                                                                       
                                                                                                                      
Formatted name: Amaechi, Chibuikem B.
```
