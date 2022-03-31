# Matryoshka
program that prints number of given Matryoshka's

The steps described below will help you make progress.  You may want to see if you can first do it on your own without these steps.  Then if you get stuck you can come back and take a look.
After prompting for how many dolls, use a loop to display a single forward slash on a single line for each section, with a line of three dashes after each one.  Thus if the user chooses 3 dolls the output might look like:

2. Add a loop inside your existing loop so each doll has the appropriate number of lines, though each line is still just a forward slash.  This should work for any input number, giving the right number of dolls, and the right number of lines per doll.

3. Add a loop or a setw() output width specifier to display the appropriate number of blanks before each forward slash.  To do this you will need to figure out a formula.  On each line you know how many dolls there are and which line you are on.  Using these two numbers figure out some formula that gives the appropriate width of blank spaces to be displayed before each '/'.  Your output should now look like:

4. Now that we have the top section of the doll, lets add an additional loop that will generate the dolls bottom section. Maybe also add the code to give the correct number of leading spaces before the "-" lines as well.  This should now look like:

5. Similarly continue with figuring out the number of blank spaces to be displayed before the '\' for top section and  "/" for bottom section is displayed at the end of each line.  At this point you've probably got the hang of it, breaking down the problem into smaller steps where each one may be challenging, but possible to do.  Don't forget to check the programs grading criteria in the syllabus, and don't forget to submit the final version to Gradescope so we can give you program style points.
