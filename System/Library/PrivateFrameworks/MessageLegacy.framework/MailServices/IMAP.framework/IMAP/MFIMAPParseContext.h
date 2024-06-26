@class MFIMAPResponse, MFIMAPConnection;

@interface MFIMAPParseContext : NSObject {
    MFIMAPConnection *_connection;
    MFIMAPResponse *_response;
    const char *_start;
    const char *_end;
    const char *_originalStart;
    const char *_originalEnd;
    const char *_lastLoggedChar;
    BOOL _invalid;
}

+ (BOOL)hadWarningOrError;
+ (void)resetWarningOrError;

- (const char *)end;
- (id)connection;
- (void)setStart:(const char *)a0;
- (id)response;
- (BOOL)isValid;
- (const char *)start;
- (void)increment;
- (BOOL)match:(const char *)a0;
- (void)dealloc;
- (void)setEnd:(const char *)a0;
- (id)copyNilOrString;
- (id)copyAString;
- (id)copyArray;
- (struct __CFArray { } *)copyArrayAllowingNulls:(BOOL)a0;
- (id)copyAtom;
- (id)copyDateTime;
- (id)copyLiteral;
- (id)copyLiteralString;
- (id)copyMessageSet;
- (id)copyNumber;
- (id)copyQuotedString;
- (id)copyStringFrom:(const char *)a0 to:(const char *)a1 withCaseOption:(int)a2;
- (void)emitError:(id)a0;
- (void)emitWarning:(id)a0;
- (BOOL)getNumber:(unsigned long long *)a0;
- (id)initWithConnection:(id)a0 response:(id)a1 start:(const char *)a2 end:(const char *)a3;
- (BOOL)literalWithResponseConsumer:(id)a0 section:(id)a1;
- (void)logReadChars;
- (unsigned char)lookAhead;
- (BOOL)match:(const char *)a0 upToSpecial:(const char *)a1;
- (const char *)nextSeparator;
- (BOOL)parseSpace;

@end
