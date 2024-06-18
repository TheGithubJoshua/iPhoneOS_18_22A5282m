@class NSScanner;

@interface HDOntologyTSVScanner : NSObject {
    NSScanner *_scanner;
}

@property (readonly, getter=isAtEnd) BOOL atEnd;

- (id)init;
- (BOOL)scanLongLong:(long long *)a0;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)scanString:(id *)a0;

@end
