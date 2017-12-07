/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			test_trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 15, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.
 * ----------------------------------------------------------
 */
#include <string.h>

#include "shortcut.h"
#include "trim.h"
#include "test_trim.h"

#define STRLEN 16
/* Es würde sonst etwas wegschneiden */

/******************************************************************************
 * empty_substring: tests that trimming an empty string yields an empty
 * string.
 *
 ******************************************************************************/
TEST(empty_substring)
{
	char str[STRLEN] = "";
	char trimmed[STRLEN] = "no content";

	trim(str, trimmed);
	ASSERT_EQUALS("", trimmed);
}

/******************************************************************************
 * total_string: describe yourself.
 *
 *
 ******************************************************************************/
TEST(total_string)
{
	char str[STRLEN] = "PRPR is fun";
	char trimmed[STRLEN] = "no content";

	trim(str, trimmed);
	ASSERT_EQUALS(str, trimmed);
}

/******************************************************************************
 * leading_blanks: describe yourself.
 *
 *
 ******************************************************************************/
TEST(leading_blanks)
{
	char str[STRLEN] = "    PRPR is fun";
	char trimmed[STRLEN] = "no content";

	trim(str, trimmed);
	ASSERT_EQUALS("PRPR is fun", trimmed);
}

/******************************************************************************
 * trailing_blanks: describe yourself.
 *
 *
 ******************************************************************************/
TEST(trailing_blanks)
{
	char str[STRLEN] = "PRPR is fun    ";
	char trimmed[STRLEN] = "no content";

	trim(str, trimmed);
	ASSERT_EQUALS("PRPR is fun", trimmed);
}

/******************************************************************************
 * leading_and_trailing_blanks: describe yourself.
 *
 *
 ******************************************************************************/
TEST(leading_and_trailing_blanks)
{
	char str[STRLEN] = " PRPR is fun ";
	char trimmed[STRLEN] = "no content";

	trim(str, trimmed);
	ASSERT_EQUALS("PRPR is fun", trimmed);
}
