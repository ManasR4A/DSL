grammar MegaScrypt;

/*Parser Rules*/

program:(statement | block)*;

block: '{' statement* '}' | statement;

statement: (subStatement | returnStmt | Break) ';' | 
		ifStatement | whileStmt | doWhileStmt | forEachStmt | forStmt;
		
subStatement: declaration | assignment | increment | invocation ;
	
	
functDeclaration: 'function' '(' varList? ')' '{' statement* '}' ;

varList: 'var' Id (',' 'var' Id)* ;

returnStmt: 'return' (expression)? ;

invocation: (Id | prototypeGetter) '(' paramList ')';

paramList: expression (',' expression)*;


ifStatement: 'if' '(' expression ')' block (elseIfStatement* elseStatement)?;

elseIfStatement: 'else if' '(' expression ')' block;

elseStatement: 'else' block;


declaration: 'var' Id ('=' (expression | prototype | array))?;

assignment: (Id | prototypeGetter | arrayGetter) '=' (expression | prototype | array) |
	(Id | prototypeGetter | arrayGetter) ('+=' | '-=' | '*=' | '/=') expression;


whileStmt: 'while' '(' expression ')' block ;

doWhileStmt: 'do' block 'while' '(' expression ')' ';' ;

forEachStmt: 'foreach' '(' 'var' Id 'in' expression ')' block;

forStmt: 'for' '(' (declaration | assignment) ';' expression ';' subStatement ')' block;


expression:
	Number | Id | String | 'true' | 'false' | increment | 'null' | 
	prototypeGetter | invocation | functDeclaration | arrayGetter | array |
	'(' expression ')' |
	'-' expression |
	'!' expression |
	expression ('*' | '/' | '%') expression |
	expression ('+' | '-') expression |
	expression ('<' | '<=') expression |
	expression ('>' | '>=') expression |
	expression ('==' | '!=') expression |
	expression '&&' expression |
	expression '||' expression
;


array: '[' paramList? ']';

arrayGetter: Id ('[' expression ']')+;


prototype: '{' keyValuePair (',' keyValuePair)* '}';

prototypeGetter: Id '.' (Id | prototypeGetter | arrayGetter);

keyValuePair: Id ':' (array | expression | prototype);

	
increment: ('++' | '--') Id | Id ('++' | '--');


/*Lexer Rules*/

fragment Digit: 		[0-9];
fragment Letter:		[A-Za-z];

Var:				'var';

True:				'true';
False:				'false';
Null: 				'null';
Break:				'break';

Dot:				'.';

PlusPlus:			'++';
MinusMinus:			'--';

Exclaimation:		'!';

Underscore:			'_';
Plus:				'+';
Minus:				'-';
Multiply:			'*';
Divide:				'/';
Modulas:			'%';
LeftParanthesis: 	'(';
RightParanthesis: 	')';

LessThan:			'<';
LessThanEquals:		'<=';
GreaterThan:		'>';
GreaterThanEquals:	'>=';

DoubleEquals:		'==';
NotEquals:			'!=';

DoubleAmp:			'&&';
DoubleLambda:		'||';

Equals:				'=';
PlusEquals:			'+=';
MinusEquals:		'-=';
MultiplyEquals:		'*=';
DivideEquals:		'/=';


Id: 				('_' | Letter+)('_' | Letter+ | Digit+)*;
Number: 			Digit+('.' Digit*)? ;
String: 			'"' ~('\r' | '\n')*? '"';

Whitespace:			[ \t\n\r]+ -> skip;


