@class _PASLock;

@interface PPQuickTypeExplanationSet : NSObject <NSSecureCoding> {
    _PASLock *_set;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)stringFromExplanation:(unsigned char)a0;
+ (id)uniqueKeycodeFromExplanation:(unsigned char)a0;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)enumerateWithBlock:(id /* block */)a0;
- (void)push:(unsigned char)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToQuickTypeExplanationSet:(id)a0;
- (unsigned long long)count;

@end
