# CMPE/CSCI 1370 - 01 Computer Science I

<https://github.com/jjlumagbas/1370>

There's more to Computer Science than programming, but programming is a great way to learn about how computers "think", and how we can use them as tools to solve problems. In this course, we'll learn how to analyze real-world problems, identify the parts of the problem that a computer could solve much more efficiently than we can, and create a program, which is a set of instructions that tell a computer what to do.

We'll focus on what our textbook authors call the Design Recipe, which is a structured process to creating programs. This process will allow us to solve problems in a step-by-step manner, to produce a program that:

a. provably works  
b. can be easily modified to account for future changes  
c. is well documented so that programmers can understand what it's for  

We'll start the course learning the recipe using the programming language Racket, and then transition to C++ later in the term to prove that the recipe is transferrable to any programming language.

<!-- TOC depthFrom:1 depthTo:6 withLinks:1 updateOnSave:1 orderedList:0 -->

- [Instructor](#instructor)
	- [Office hours](#office-hours)
- [Objectives](#objectives)
- [Course topics calendar](#course-topics-calendar)
- [Textbook](#textbook)
- [Software](#software)
	- [Racket](#racket)
	- [C++](#c)
- [Grading](#grading)
	- [In-class participation](#in-class-participation)
	- [Reading quizzes](#reading-quizzes)
	- [Labs](#labs)
- [Course policies](#course-policies)
	- [Communication](#communication)
	- [Office hours](#office-hours)
	- [Submissions](#submissions)
	- [Late submissions](#late-submissions)
		- [Deadline extensions](#deadline-extensions)
	- [Academic honesty](#academic-honesty)
	- [In-class device policy](#in-class-device-policy)
- [UTRGV Policies](#utrgv-policies)
	- [Students with disabilities](#students-with-disabilities)
		- [Pregnancy, Pregnancy-related, and Parenting Accommodations](#pregnancy-pregnancy-related-and-parenting-accommodations)
		- [Student Accessibility Services](#student-accessibility-services)
	- [Mandatory course evaluation period](#mandatory-course-evaluation-period)
	- [Attendance](#attendance)
	- [Scholastic integrity](#scholastic-integrity)
	- [Sexual harassment, discrimination, and violence](#sexual-harassment-discrimination-and-violence)
	- [Course drops](#course-drops)
	- [Student services](#student-services)

<!-- /TOC -->

## Instructor

JJ Lumagbas  
<jedaiah.lumagbas@utrgv.edu>

### Office hours

**Important:** Email me first to set an appointment before coming to the office! I can't guarantee that I'll be there if we haven't set a prior appointment.

Office number: IEAB 3.226

MW 10:40 am - 12:00 pm  
TR 10:40 am - 12:00 pm

## Objectives

*(Adapted from CS111 by Sharon Tuttle in Humboldt State University)*

At the end of this course, you should be able to:

- Design, implement, test, and debug programs that use each of the following fundamental programming constructs: basic computation, standard conditional and iterative structures, and the definition of functions.- Analyze the behavior of simple programs involving fundamental programming constructs.- Choose appropriate conditional and iterative constructs for a programming task.- Apply the techniques of structured (functional) decomposition to break a program into smaller pieces -- or, better yet, originally design it using such smaller pieces.- Describe strategies that are useful in testing and debugging.- Write clear comments that communicate to the reader what a function expects and what it produces.

## Course topics calendar

[Topics calendar is in a Google Sheet here.](https://docs.google.com/spreadsheets/d/1lqdiyLTvpGGXda_iQRO0Xm6lRrw8nEav_N7l4YsDddg/edit?usp=sharing) Note: This is tentative! Expect topics to move around as we progress.

## Textbook

["How to Design Programs", Second Edition, Felleisen, Findler, Flatt, and Krishnamurthi.](http://htdp.org/2018-01-06/Book/) Available free online

Optional (you do not need to buy this, and no assignments or readings will come from this text): any C++ reference, take your pick. Recommended are:

- ["Problem Solving with C++", Savitch](https://www.amazon.com/Problem-Solving-10th-Walter-Savitch/dp/0134448286)
- ["C++ Programming: Program Design Including Data Structures", Malik, D.S.](https://www.amazon.com/Programming-Program-Design-Including-Structures/dp/1133526322)

## Software

We'll be using two programming languages during this course – Racket and C++.

### Racket

DrRacket is the programming environment for Racket, which should already be installed in the labs. I recommend you install Racket on your personal computers, available here: <https://download.racket-lang.org>

After installing, be sure to run the DrRacket program (that's the actual editor), and not the Racket program.

### C++

WINDOWS: <https://docs.microsoft.com/en-us/cpp/build/vscpp-step-0-installation?view=vs-2017>

MAC:

- Editor (VS Code): <code.visualstudio.com>
- Running the code: <https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner>
   (when you have Code Runner installed, open a cpp file and press: Ctrl + Option + N)
- misc tools: <https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptoolsv>


## Grading

|                                     | Percentage |
|-------------------------------------|-----------:|
| In-class participation (Attendance) |        10% |
| Reading quizzes                     |        10% |
| Lab                                 |        30% |
| Exams                               |        50% |
| **Total**                           |   **100%** |

| Percentage | Final grade |
|------------|-------------|
| 90-100%    |           A |
| 80-89%     |           B |
| 70-79%     |           C |
| 60-69%     |           D |
| 0-59%      |           F |


### In-class participation

[You'll need voting cards: Download them here.](https://github.com/jjlumagbas/1370/blob/master/abcde-voting-cards.pdf)

We're adopting Peer Instruction, which is an active learning method that's been backed by [a lot of research](https://www.peerinstruction4cs.org/latest-research/). This is how it works ([or you can watch a video instead](https://www.youtube.com/watch?v=Rixx-Qtnt5I)):

1. I send you home with a reading assignment
2. You read the assignment
3. You then answer an [online quiz](#reading-quizzes) before coming in to class
4. We go over the assigned reading through a series of multiple choice questions (maybe 3-5 per class), that will follow the think-pair-share format:

	4a. Think: I reveal the multiple choice question and you think over it for a minute or two (no talking!), and then vote on which option you think is the right answer.  
	4b. Pair: You partner up and try and show your partner why your answer is obviously correct, and theirs is wrong.  
	4c. Share: We all vote again, then discuss the different options with the rest of the class.

### Reading quizzes

Reading quizzes for the next lecture will be posted after the current lecture, and submissions will be closed the night before the next lecture.

These are participation points! That means you don't have to get the right answers on the quiz, just convince me that you have read the material.

### Labs

You should be enrolled in the correct lab! (See above Lab schedule.) Labs will be done in pairs, except potentially for one group (and only one!) who may work in a group of three. You may keep the same lab partners throughout the term.

Pair programming means:

- One monitor, one keyboard, one mouse
- One person "driving", which means taking control of keyboard and mouse
- While the other person "navigating", guiding the driver on what to type
- Pairs change roles regularly

Pair programming does not mean:

- One person does all the work
- While the other person scrolls through Instagram, and checks the clock periodically

Lab submissions have to be made during lab time, except when otherwise noted, so show up to lab!

## Course policies

### Communication

I'll send announcements through Blackboard, please check there every day.

Email me using your UTRGV email, and start the subject line like this "CMPE/CSCI 1370 - 01"

#### Email turnaround time

- Expect at least a day for me to get back to your emails. 
- Although I usually check email daily around noontime to early afternoon, so if you send me an email in the morning I *might* get back to you within the day. 
- I'm usually offline at around 330pm, so any emails sent after that will very likely be seen the next day still.
- **IMPT:** All of the above apply even if it's the day of some deadline. I suggest you get started on any assignments early so that there's time for me to respond to any questions before the deadline.

### Office hours

If you'd like to see me at the office, please email me to set an appointment first. I'm also open to meeting outside of office hours if you set it up through email.

### Submissions

Submissions will be done through Blackboard. No email attachments please! I may give exceptions if there are problems with uploading attachments through Blackboard. In that case, [attach files to an email](#communication) and send it to me **before** the deadline.

### Late submissions

Late submissions will NOT be accepted. You are responsible for starting assignments early, and to account for any [curve ball Murphy throws at you](https://en.wikipedia.org/wiki/Murphy%27s_law), for example: lost files, computer failure, power outages. Plan for the worst.

#### Deadline extensions

However, I'm you'll find out that I'm very liberal at offering extensions, as long as you request for one early: the morning of the deadline at the latest.

### Academic honesty

Collaboration is encouraged in this course: most labs and homeworks will be done in pairs. Outside of those pairs, though, sharing of code is strictly not allowed. Do not send code to another pair, do not copy code off the internet, do not look at solutions of others to get clues on the solution.

If you're stuck on some syntax problems, ask during lab times, or send me an email.

For any lab, homework, or exam, a score of 0 will be given to all parties involved in cheating.


### In-class device policy

Mobile phones are allowed only to [access voting cards](#in-class-participation) and use them in class.

I won't allow note-taking using laptops, sorry. [They've been found to be distracting, to you and to others](https://www.scientificamerican.com/article/students-are-better-off-without-a-laptop-in-the-classroom/). Besides, [taking notes with pen and paper makes you smarter](https://www.wsj.com/articles/can-handwriting-make-you-smarter-1459784659).

## UTRGV Policies

### Students with disabilities

Students with a documented disability (physical, psychological, learning, or other disability which affects academic performance) who would like to receive academic accommodations should contact Student Accessibility Services (SAS) as soon as possible to schedule an appointment to initiate services.  Accommodations can be arranged through SAS at any time, but are not retroactive.  Students who suffer a broken bone, severe injury or undergo surgery during the semester are eligible for temporary services.  

#### Pregnancy, Pregnancy-related, and Parenting Accommodations

Title IX of the Education Amendments of 1972 prohibits sex discrimination, which includes discrimination based on pregnancy, marital status, or parental status. Students seeking accommodations related to pregnancy, pregnancy-related condition, or parenting (reasonably immediate postpartum period) are encouraged to contact Student Accessibility Services for additional information and to request accommodations.

#### Student Accessibility Services

Brownsville Campus: Student Accessibility Services is located in Cortez Hall Room 129 and can be contacted by phone at (956) 882-7374 (Voice) or via email at ability@utrgv.edu.

Edinburg Campus: Student Accessibility Services is located in 108 University Center and can be contacted by phone at (956) 665-7005 (Voice), (956) 665-3840 (Fax), or via email at ability@utrgv.edu.

### Mandatory course evaluation period

Students are required to complete an ONLINE evaluation of this course, accessed through your UTRGV account (http://my.utrgv.edu); you will be contacted through email with further instructions.  Students who complete their evaluations will have priority access to their grades.  Online evaluations will be available on or about:

Module 1		October 4 – 10  
Module 2		November 29 – December 5  
Full Fall Semester	November 15 – December 5

### Attendance

Students are expected to attend all scheduled classes and may be dropped from the course for excessive absences.  UTRGV’s attendance policy excuses students from attending class if they are participating in officially sponsored university activities, such as athletics; for observance of religious holy days; or for military service. Students should contact the instructor in advance of the excused absence and arrange to make up missed work or examinations.

### Scholastic integrity

As members of a community dedicated to Honesty, Integrity and Respect, students are reminded that those who engage in scholastic dishonesty are subject to disciplinary penalties, including the possibility of failure in the course and expulsion from the University. Scholastic dishonesty includes but is not limited to: cheating, plagiarism (including self-plagiarism), and collusion; submission for credit of any work or materials that are attributable in whole or in part to another person; taking an examination for another person; any act designed to give unfair advantage to a student; or the attempt to commit such acts. Since scholastic dishonesty harms the individual, all students and the integrity of the University, policies on scholastic dishonesty will be strictly enforced (Board of Regents Rules and Regulations and UTRGV Academic Integrity Guidelines). All scholastic dishonesty incidents will be reported to the Dean of Students.

### Sexual harassment, discrimination, and violence

In accordance with UT System regulations, your instructor is a “Responsible Employee” for reporting purposes under Title IX regulations and so must report any instance, occurring during a student’s time in college, of sexual assault, stalking, dating violence, domestic violence, or sexual harassment about which she/he becomes aware during this course through writing, discussion, or personal disclosure. More information can be found at www.utrgv.edu/equity, including confidential resources available on campus. The faculty and staff of UTRGV actively strive to provide a learning, working, and living environment that promotes personal integrity, civility, and mutual respect that is free from sexual misconduct and discrimination. 

### Course drops

According to UTRGV policy, students may drop any class without penalty earning a grade of DR until the official drop date. Following that date, students must be assigned a letter grade and can no longer drop the class. Students considering dropping the class should be aware of the “3-peat rule” and the “6-drop” rule so they can recognize how dropped classes may affect their academic success. The 6-drop rule refers to Texas law that dictates that undergraduate students may not drop more than six courses during their undergraduate career. Courses dropped at other Texas public higher education institutions will count toward the six-course drop limit. The 3-peat rule refers to additional fees charged to students who take the same class for the third time.

### Student services

Students who demonstrate financial need have a variety of options when it comes to paying for college costs, such as scholarships, grants, loans and work-study. Students should visit the Students Services Center (U Central) for additional information.

U Central is located in BMAIN 1.100 (Brownsville) or ESSBL 1.145 (Edinburg) or can be reached by email (ucentral@utrgv.edu) or telephone: (888) 882-4026. In addition to financial aid, U Central can assist students with registration and admissions.

Students seeking academic help in their studies can use university resources in addition to an instructor’s office hours. University Resources include the Learning Center, Writing Center, Advising Center and Career Center. The centers provide services such as tutoring, writing help, critical thinking, study skills, degree planning, and student employment. Locations are:

Learning center: BSTUN 2.10 (Brownsville) or ELCTR 100 (Edinburg)  
Writing center: BLIBR 3.206 (Brownsville) or ESTAC 3.119 (Edinburg)  
Advising center: BMAIN 1.400 (Brownsville) or ESWKH 101 (Edinburg)  
Career center: BCRTZ 129 (Brownsville) or ESSBL 2.101 (Edinburg)
