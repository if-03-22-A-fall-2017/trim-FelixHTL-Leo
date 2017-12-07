/**
* @mainpage
* The information concerning this assignment is available in @ref english and
* in @ref german

* @page english English
* @section intoduction Introduction
* A function trim() should be implemented which copies a part of a string
* into another by leaving leading and trailing blanks out.
*
* If we consider the string <pre>"   This string can be trimmed  .     "</pre> the
* trimmed version of it would be <pre>"This string can be trimmed  ."</pre>
*
* @section assignment Assignment
* -# Find a minimal value for the constant STRLEN in test_trim.cpp such that
* all unit tests can run without any memory corruption.
* -# Explain in a further comment what would happen if you would choose
* a too small value for this constant.
* -# Implement the function trim() such that all unit tests pass.
* -# Refactor trim() such that it calls at least another function.
* -# Explain in a comment above how you were able to limit the scope of
* this function and why you did this.
* -# Create a new file trim_str.cpp add a main() function and adapt the
* makefile in way such that the trim_str.cpp is built and called if the target
* "make all" (or simply "make") is called instead of "make test".
* -# Implement the newly created main() function such that it accpets a string
* as command line argument and
*  -# Stage 1: prints the command line arguments via printf().
*  -# Stage 2: copies the command line arguments via strcpy() or sprintf() or
*  character by character (a method you did not use when implmenting trim()) into a newly
*  declared character array of length 512.
*  -# Stage 3: calls the function trim() and outputs the result into the stdout.

* @page german Deutsch
* @section intro Einführung
* Es soll eine Funktion trim() implementiert werden, welche einen String in
* einen anderen kopiert und dabei die führenden und die nachfolgenden
* Leerzeichen auslässt.
*
* Wenn man den String <pre>"   This string can be trimmed  .     "</pre> betrachtet,
* ist die "getrimmte" Version <pre>"This string can be trimmed  ."</pre>
*
* @section todo Aufgabe
* -# Finden Sie den minimalen Wert für STRLEN in test_trim.cpp so dass alle
* unit test laufen können, ohne dass Speicher überschrieben wird.
* -# Erklären Sie in einem weiteren Kommentar, was passieren würde, wenn Sie
* einen zu kleinen Wert für diese Konstante wählen würden.
* -# Implementieren Sie die Funktion trim() so, dass alle Unit tests erfolgreich
* durchlaufen.
* -# Machen Sie ein Refactoring von trim() so, dass zumindest eine weitere Funktion
* von trim() aus aufgerufen wird.
* -# Erklären Sie in einem Kommentar über trim() wie Sie den Gültigkeitsbereich
* dieser Funktion eingeschränkt haben und warum Sie das getan haben.
* -# Erstellen Sie eine neue Datei trim_str.cpp und implementieren Sie darin
* eine main() Funktion. Adaptieren Sie das makefile so, dass trim_str.cpp gebaut
* wird, wenn das Target "make all" anstelle von "make test" (oder einfach "make")
* aufgerufen wird.
* -# Implementieren Sie die neue main() Funktion so, dass sie einen String als
* Command Line Argument entgegennimmt und
*  -# Stage 1: alle Command Line Argumente mittels printf() ausgibt.
*  -# Stage 2: alle Command Line Argumente mit strcpy() oder sprintf() oder
* zeichenweise (ein Verfahren, das Sie bei der Implementierung von trim() nicht
* verwendet haben) in ein neues Zeichenfeld der Länge 512 kopiert.
*  -# Stage 3: die Funktion trim() aufruft und das Ergebnis auf der
* stdout ausgibt.
*/
