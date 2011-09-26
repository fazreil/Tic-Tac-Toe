#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc.exe
CCC=g++.exe
CXX=g++.exe
FC=g77.exe
AS=as.exe

# Macros
CND_PLATFORM=Cygwin-Windows
CND_CONF=Debug
CND_DISTDIR=dist

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=build/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/person.o \
	${OBJECTDIR}/studentAtty.o \
	${OBJECTDIR}/box.o \
	${OBJECTDIR}/main1.o \
	${OBJECTDIR}/base.o \
	${OBJECTDIR}/student.o

# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	${MAKE}  -f nbproject/Makefile-Debug.mk dist/Debug/Cygwin-Windows/tictactoe.exe

dist/Debug/Cygwin-Windows/tictactoe.exe: ${OBJECTFILES}
	${MKDIR} -p dist/Debug/Cygwin-Windows
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tictactoe ${OBJECTFILES} ${LDLIBSOPTIONS} 

${OBJECTDIR}/person.o: nbproject/Makefile-${CND_CONF}.mk person.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -I/cygdrive/C/Cygwin/lib/gcc/i686-pc-cygwin/3.4.4/include/c++ -MMD -MP -MF $@.d -o ${OBJECTDIR}/person.o person.cpp

${OBJECTDIR}/studentAtty.o: nbproject/Makefile-${CND_CONF}.mk studentAtty.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -I/cygdrive/C/Cygwin/lib/gcc/i686-pc-cygwin/3.4.4/include/c++ -MMD -MP -MF $@.d -o ${OBJECTDIR}/studentAtty.o studentAtty.cpp

${OBJECTDIR}/box.o: nbproject/Makefile-${CND_CONF}.mk box.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -I/cygdrive/C/Cygwin/lib/gcc/i686-pc-cygwin/3.4.4/include/c++ -MMD -MP -MF $@.d -o ${OBJECTDIR}/box.o box.cpp

${OBJECTDIR}/main1.o: nbproject/Makefile-${CND_CONF}.mk main1.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -I/cygdrive/C/Cygwin/lib/gcc/i686-pc-cygwin/3.4.4/include/c++ -MMD -MP -MF $@.d -o ${OBJECTDIR}/main1.o main1.cpp

${OBJECTDIR}/base.o: nbproject/Makefile-${CND_CONF}.mk base.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -I/cygdrive/C/Cygwin/lib/gcc/i686-pc-cygwin/3.4.4/include/c++ -MMD -MP -MF $@.d -o ${OBJECTDIR}/base.o base.cpp

${OBJECTDIR}/student.o: nbproject/Makefile-${CND_CONF}.mk student.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -I/cygdrive/C/Cygwin/lib/gcc/i686-pc-cygwin/3.4.4/include/c++ -MMD -MP -MF $@.d -o ${OBJECTDIR}/student.o student.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r build/Debug
	${RM} dist/Debug/Cygwin-Windows/tictactoe.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
