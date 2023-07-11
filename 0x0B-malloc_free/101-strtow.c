#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int word_len(char *str);
char **strtow(char *str);
int count_len(char *str);

/**
 * word_len - entry point
 * @str: string to be searched.
 *
 * Return: the index of the initial word pointer
 */

int word_len(char *str)
{
	int iNum = 0, length = 0;

	while (*(str + iNum) && *(str + iNum) != ' ')
	{
	length++;
	iNum++;
	}
	return (length);
}
/**
 * count_words - counts the number of words
 * @str: String to be counted
 *
 * Return: the number of words contained
 */
int count_words(char *str)
{
	int iNum = 0;
	int words = 0;
	int length = 0;

	for (iNum = 0; *(str + iNum); iNum++)
		length++;
	for (iNum = 0; iNum < length; iNum++)
	{
		if (*(str + iNum) != ' ')
		{
			words++;
			iNum += word_len(str + iNum);
		}
	}
	return (words);
}

/**
 * strtow - split a string into word
 * @str: The string to be split
 *
 * Return: Null if str = "" else apointer to an array
 */
char **strtow(char *str)
{
	char **string;
	int iNum, words, x, letters, y;

	iNum = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	string = malloc(sizeof(char *) * (words + 1));
	if (string == NULL)
		return (NULL);
	for (x = 0; x < words; x++)
	{
		while (str[iNum] == ' ')
			iNum++;

		letters = word_len(str + iNum);

		string[x] = malloc(sizeof(char) * (letters + 1));

		if (string[x] == NULL)
		{
		for (; x >= 0; x--)
			free(string[x]);
		free(string);
		return (NULL);
		}
		for (y = 0; y < letters; y++)
			string[x][y] = str[iNum++];
		string[x][y] = '\0';
	}
	string[x] = NULL;
	return (string);
}

