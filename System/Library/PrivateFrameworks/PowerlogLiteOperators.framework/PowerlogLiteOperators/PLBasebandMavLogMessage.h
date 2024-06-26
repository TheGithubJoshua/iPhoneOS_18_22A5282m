@class NSData, NSString;

@interface PLBasebandMavLogMessage : PLBasebandMessage

@property struct _PLBasebandLogHeader { struct _PLBasebandMessageHeader { unsigned char x0; } x0; unsigned short x1; unsigned short x2; unsigned char x3[8]; } *header;
@property (retain) NSData *payload;
@property (readonly) NSString *eventCodeString;
@property (readonly) unsigned int eventCode;

- (id)stringForUnknownBytes:(unsigned int)a0;
- (id)tooShortErrorString;
- (void).cxx_destruct;
- (BOOL)parseData:(id)a0;
- (id)initWithData:(id)a0;
- (void)logWithLogger:(id)a0;

@end
