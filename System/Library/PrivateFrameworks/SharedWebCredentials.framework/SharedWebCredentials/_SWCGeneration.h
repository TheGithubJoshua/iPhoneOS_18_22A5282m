@interface _SWCGeneration : NSObject <SWCRedactedDescription, NSCopying, NSSecureCoding> {
    int _processIdentifier;
    int _processIdentifierVersion;
    unsigned long long _tick;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)redactedDescription;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)generationByIncrementingSelf;
- (id)initWithPID:(int)a0 version:(int)a1 tick:(unsigned long long)a2;

@end
