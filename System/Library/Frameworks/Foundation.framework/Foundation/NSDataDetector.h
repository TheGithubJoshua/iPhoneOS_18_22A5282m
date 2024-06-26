@interface NSDataDetector : NSRegularExpression {
    unsigned long long _types;
}

@property (readonly) unsigned long long checkingTypes;

+ (BOOL)supportsSecureCoding;
+ (void)initialize;
+ (id)dataDetectorWithTypes:(unsigned long long)a0 error:(id *)a1;

- (id)initWithCoder:(id)a0;
- (unsigned long long)options;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;
- (id)pattern;
- (void)enumerateMatchesInString:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 usingBlock:(id /* block */)a3;
- (id)initWithPattern:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initWithTypes:(unsigned long long)a0 error:(id *)a1;
- (unsigned long long)numberOfCaptureGroups;

@end
