                     -----------Comments and instructions on this repository------------
					by dimpellos

- Comments:

  1) Solutions for these excercises were developed in Visual Studio.


- Instructions:

  1) In order to avoid warnings of Visual Studio for i.e. 'strcpy()'
  , do the following: 
  
  Go to --> ProjectProperties -> Configuration Properties -> C/C++ -> Preprocessor -> Preprocessor Definitions 

  and put there these 2 definitions-->   	_CRT_SECURE_NO_DEPRECATE
  						_CRT_NONSTDC_NO_DEPRECATE 

  or instead you can use the proposed by VS ---> _CRT_SECURE_NO_WARNINGS
 

  2) Git instructions

	- a) when to insert/update a folder:
             - drive to the respective directory
             - git add 'name_of_the_folder'
	     - git commit -m "message for the commited files"
             - git push origin master(*depends on the branch) 						