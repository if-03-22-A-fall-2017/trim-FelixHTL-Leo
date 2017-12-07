/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: <i>
 * Title:			Linked List
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * trim test driver.
 * ----------------------------------------------------------
 */
#include <stdio.h>
#include <string.h>

#include "trim.h"

#include "shortcut.h"
#include "test_trim.h"

int main(int argc, char *argv[])
{
	ADD_TEST(empty_substring);
	ADD_TEST(total_string);
	ADD_TEST(leading_blanks);
	ADD_TEST(trailing_blanks);
	ADD_TEST(leading_and_trailing_blanks);

	run_tests();
	return 0;
}
