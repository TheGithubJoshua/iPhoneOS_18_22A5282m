@class NSURLConnection, NSArray;
@protocol ENXMLSaxParserDelegate;

@interface ENXMLSaxParser : NSObject {
    struct _xmlParserCtxt { struct _xmlSAXHandler *x0; void *x1; struct _xmlDoc *x2; int x3; int x4; char *x5; char *x6; int x7; int x8; struct _xmlParserInput *x9; int x10; int x11; struct _xmlParserInput **x12; struct _xmlNode *x13; int x14; int x15; struct _xmlNode **x16; int x17; struct _xmlParserNodeInfoSeq { unsigned long long x0; unsigned long long x1; struct _xmlParserNodeInfo *x2; } x18; int x19; int x20; int x21; int x22; int x23; int x24; struct _xmlValidCtxt { void *x0; void /* function */ *x1; void /* function */ *x2; struct _xmlNode *x3; int x4; int x5; struct _xmlNode **x6; unsigned int x7; struct _xmlDoc *x8; int x9; struct _xmlValidState *x10; int x11; int x12; struct _xmlValidState *x13; struct _xmlAutomata *x14; struct _xmlAutomataState *x15; } x25; int x26; int x27; char *x28; char *x29; int x30; int x31; char **x32; long long x33; long long x34; int x35; int x36; int x37; char *x38; char *x39; char *x40; int *x41; int x42; int x43; int *x44; int x45; struct _xmlParserInput *x46; int x47; int x48; int x49; int x50; void *x51; int x52; int x53; void *x54; int x55; int x56; struct _xmlDict *x57; char **x58; int x59; int x60; char *x61; char *x62; char *x63; int x64; int x65; int x66; char **x67; int *x68; struct _xmlStartTag *x69; struct _xmlHashTable *x70; struct _xmlHashTable *x71; int x72; int x73; int x74; int x75; struct _xmlNode *x76; int x77; struct _xmlAttr *x78; struct _xmlError { int x0; int x1; char *x2; int x3; char *x4; int x5; char *x6; char *x7; char *x8; int x9; int x10; void *x11; void *x12; } x79; int x80; unsigned long long x81; unsigned long long x82; struct _xmlParserNodeInfo *x83; int x84; int x85; struct _xmlParserNodeInfo *x86; int x87; unsigned long long x88; } *_parserContext;
    BOOL _parserHalted;
    NSURLConnection *_urlConnection;
    NSArray *_dtds;
}

@property (weak, nonatomic) id<ENXMLSaxParserDelegate> delegate;
@property (nonatomic) BOOL isHTML;

- (id)init;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)appendBytes:(char *)a0 length:(int)a1;
- (void)appendData:(id)a0;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void).cxx_destruct;
- (BOOL)parseData:(id)a0;
- (BOOL)parseContentsOfURL:(id)a0;
- (void)dealloc;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)_stopAndSendError:(id)a0;
- (void)finalizeParser;
- (struct _xmlEntity { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlDtd *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; char *x9; char *x10; int x11; int x12; char *x13; char *x14; struct _xmlEntity *x15; char *x16; int x17; int x18; } *)lookupEntity:(const char *)a0;
- (BOOL)parseContents:(id)a0;
- (BOOL)parseContentsOfFile:(id)a0;
- (BOOL)parseContentsOfURLWithRequest:(id)a0;
- (struct _xmlSAXHandler { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void /* function */ *x18; void /* function */ *x19; void /* function */ *x20; void /* function */ *x21; void /* function */ *x22; void /* function */ *x23; void /* function */ *x24; void /* function */ *x25; void /* function */ *x26; unsigned int x27; void *x28; void /* function */ *x29; void /* function */ *x30; void /* function */ *x31; })saxHandler;
- (void)stopParser;

@end
