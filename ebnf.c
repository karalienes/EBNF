#include <stdio.h>
#include <stdlib.h>
#include <string.h>



char  letter[26] = { 'a' , 'b', 'c' , 'd' , 'e' , 'f' , 'g' , 'h' , 'i' , 'j' , 'k' , 'l' , 'm' , 'n' , 'o' , 'p' , 'q' , 'r' , 's' , 't' , 'u' , 'v' , 'w' , 'x' , 'y' , 'z' };
char  Bletter[26] = { 'A' , 'B', 'C' , 'D' , 'E' , 'F' , 'G' , 'H' , 'Ý' , 'J' , 'K' , 'L' , 'M' , 'N' , 'O' , 'P' , 'Q' , 'R' , 'S' , 'T' , 'U' , 'V' , 'W' , 'X' , 'Y' , 'Z' };
int   digit[9] = { 1,2,3,4,5,6,7,8,9 };
char  op[5] = { '<', '>', '=', '!' };

void Substring(char[]);

int main(int argc, char** argv)
{
	char* path;
	if (argc < 1)
		return EXIT_FAILURE;
	path = argv[1];

	/* Open file */
	FILE* fp = fopen(path, "r");


	char chunk[500];


	while (fgets(chunk, sizeof(chunk), fp) != NULL) {

			Substring(chunk);	

	}

	fclose(fp);

	return 0;


}

void Substring(char chunk[])
{


	char* substr;
	char* substr2;
	char* substr3;
	char* substr4;
	char* substr5;



	substr = strstr(chunk, "if");
	if (substr != NULL)
	{
		for (int i = 0; i < 500; i++) {

			if (chunk[i] == '(') {

				substr2 = strchr(letter, chunk[i + 1]);
				substr3 = strchr(Bletter, chunk[i + 1]);
				substr4 = strchr(digit, chunk[i + 1]);
				if (substr2 != NULL || substr3 != NULL || substr4 != NULL) {


					for (int j = i + 2; j < 500; j++) {
						substr5 = strchr(op, chunk[j]);
						if (substr5 != NULL && chunk[j] != '\0') {


							for (int k = j + 2; k < 500; k++) {

								substr5 = strchr(op, chunk[k]);

								if (substr5 != NULL && chunk[k] != '\0') {
									printf("if hatalidir");
								}

								if (chunk[k] == ')') {

									for (int m = k + 1; m < 500; m++) {

										if (chunk[m] == ' ' || chunk[m] == '{' || chunk[m] == 'Ì' || chunk[m] == '\n' || chunk[m] == '\0') {

										}
										else {
											printf("if hatalidir");

										}

									}
								}

							}
						}

						else {

						}
					}
				}
				else {
					printf("if hatalidir");
				}

			}
		}

	}

		substr = strstr(chunk, "else if");
		if (substr != NULL)
		{
			for (int i = 0; i < 500; i++) {

				if (chunk[i] == '(') {

					substr2 = strchr(letter, chunk[i + 1]);
					substr3 = strchr(Bletter, chunk[i + 1]);
					substr4 = strchr(digit, chunk[i + 1]);
					if (substr2 != NULL || substr3 != NULL || substr4 != NULL) {

						for (int j = i + 2; j < 500; j++) {
							substr5 = strchr(op, chunk[j]);
							if (substr5 != NULL && chunk[j] != '\0') {

								for (int k = j + 2; k < 500; k++) {

									substr5 = strchr(op, chunk[k]);

									if (substr5 != NULL && chunk[k] != '\0') {
										printf("Else if hatalidir");
									}

									if (chunk[k] == ')') {

										for (int m = k + 1; m < 500; m++) {

											if (chunk[m] == ' ' || chunk[m] == '{' || chunk[m] == 'Ì' || chunk[m] == '\n' || chunk[m] == '\0') {
											}
											else {
												printf("Else if  hatalidir");

											}

										}
									}

								}
							}

							else {
							}
						}
					}
					else {
						printf("Else if hatalidir");
					}

				}
			}
	
		
		}      





		substr = strstr(chunk, "else ");
		if (substr != NULL)
		{
			for (int i = 0; i < 500; i++) {


				if (chunk[i] == ' ' || chunk[i] == '{' || chunk[i] == 'Ì' || chunk[i] == '\n' || chunk[i] == '\0') {
					//printf("dogrudur");
				}
				else {
					printf("Else kismi hatalidýr { açýlmamistir");

				}


			}




		}
}
