#include "Worker.h"

char* Worker::createPost(char const* post)
{
	char* temp = new char[strlen(post) + 1];
	strcpy_s(temp, strlen(post) + 1, post);
	return temp;
}

char* Worker::createName(char const* name)
{

	char* temp = new char[strlen(name) + 1];
	strcpy_s(temp, strlen(name) + 1, name);
	return temp;

}
