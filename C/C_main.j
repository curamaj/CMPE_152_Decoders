.class public C_main
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;

; i,j:integer

.field private static i I
.field private static j I

; alpha,beta5x:float

.field private static alpha F
.field private static beta5x F


.method public static add(II)I
	iload_0
	iload_1
	iadd
	istore_0

	iload_0
	ireturn

.limit stack 8
.limit locals 8
.end method

.method public static main([Ljava/lang/String;)V

	new RunTimer
	dup
	invokenonvirtual RunTimer/<init>()V
	putstatic        C_main/_runTimer LRunTimer;
	new PascalTextIn
	dup
	invokenonvirtual PascalTextIn/<init>()V
	putstatic        C_main/_standardIn LPascalTextIn;

; i=32

	ldc	32
	putstatic	C_main/i I

; printf("i-->%d",i)

	getstatic	C_main/i I
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"i-->%d\n"
	iconst_1
	anewarray	java/lang/Object
	dup
	iconst_0
	getstatic	C_main/i I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual	java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop
	pop

; j=i+8

	getstatic	C_main/i I
	ldc	8
	iadd
	putstatic	C_main/j I

; printf("j-->%d",j)

	getstatic	C_main/j I
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"j-->%d\n"
	iconst_1
	anewarray	java/lang/Object
	dup
	iconst_0
	getstatic	C_main/j I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual	java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop
	pop

; i=-2+3*j

	ldc	2
	ineg
	ldc	3
	getstatic	C_main/j I
	imul
	iadd
	putstatic	C_main/i I

; printf("i-->%d",i)

	getstatic	C_main/i I
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"i-->%d\n"
	iconst_1
	anewarray	java/lang/Object
	dup
	iconst_0
	getstatic	C_main/i I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual	java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop
	pop

; alpha=9.3

	ldc	9.3
	putstatic	C_main/alpha F

; beta5x=alpha

	getstatic	C_main/alpha F
	putstatic	C_main/beta5x F

; beta5x=alpha/3.7-alpha*2.88

	getstatic	C_main/alpha F
	ldc	3.7
	fdiv
	getstatic	C_main/alpha F
	ldc	2.88
	fmul
	fsub
	putstatic	C_main/beta5x F

; beta5x=8.45*(alpha+9.12)

	ldc	8.45
	getstatic	C_main/alpha F
	ldc	9.12
	fadd
	fmul
	putstatic	C_main/beta5x F

; printf("alpha-->%f",alpha)

	getstatic	C_main/alpha F
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"alpha-->%f\n"
	iconst_1
	anewarray	java/lang/Object
	dup
	iconst_0
	getstatic	C_main/alpha F
	invokestatic	java/lang/Float.valueOf(F)Ljava/lang/Float;
	aastore
	invokevirtual	java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop
	pop

; printf("beta5x-->%f",beta5x)

	getstatic	C_main/beta5x F
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"beta5x-->%f\n"
	iconst_1
	anewarray	java/lang/Object
	dup
	iconst_0
	getstatic	C_main/beta5x F
	invokestatic	java/lang/Float.valueOf(F)Ljava/lang/Float;
	aastore
	invokevirtual	java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop
	pop

; do{i=i+1;printf("i-->%d",i);} while(i<125)

DO_WHILE0:

; i=i+1

	getstatic	C_main/i I
	ldc	1
	iadd
	putstatic	C_main/i I

; printf("i-->%d",i)

	getstatic	C_main/i I
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"i-->%d\n"
	iconst_1
	anewarray	java/lang/Object
	dup
	iconst_0
	getstatic	C_main/i I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual	java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop
	pop
	getstatic	C_main/i I
	ldc	125
	if_icmplt	DO_WHILE1
	iconst_1
	goto	DO_WHILE2
DO_WHILE1:
	iconst_0
DO_WHILE2:
	ifne	DO_WHILE3
	goto	DO_WHILE0
DO_WHILE3:

; printf("i-->%d",i)

	getstatic	C_main/i I
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"i-->%d\n"
	iconst_1
	anewarray	java/lang/Object
	dup
	iconst_0
	getstatic	C_main/i I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual	java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop
	pop

; if(i<>70){printf("i-->%d",i);i=80;}

	getstatic	C_main/i I
	ldc	70
	if_icmpne	IF4
	iconst_0
	goto	IF5
IF4:
	iconst_1
IF5:

; printf("i-->%d",i)

	getstatic	C_main/i I
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"i-->%d\n"
	iconst_1
	anewarray	java/lang/Object
	dup
	iconst_0
	getstatic	C_main/i I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual	java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop
	pop

; i=80

	ldc	80
	putstatic	C_main/i I
	ifeq	IF6
IF6:

; printf("i-->%d",i)

	getstatic	C_main/i I
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"i-->%d\n"
	iconst_1
	anewarray	java/lang/Object
	dup
	iconst_0
	getstatic	C_main/i I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual	java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop
	pop

; add(i,j);

	getstatic	C_main/i I
	getstatic	C_main/j I
	invokestatic C_main/add(II)I
	putstatic	C_main/j I

; printf("j-->%d",j)

	getstatic	C_main/j I
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"j-->%d\n"
	iconst_1
	anewarray	java/lang/Object
	dup
	iconst_0
	getstatic	C_main/j I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual	java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop
	pop

	getstatic     C_main/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 16
.limit stack 16
.end method
