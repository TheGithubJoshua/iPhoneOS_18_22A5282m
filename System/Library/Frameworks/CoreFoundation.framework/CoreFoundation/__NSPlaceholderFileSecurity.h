@interface __NSPlaceholderFileSecurity : NSFileSecurity <NSCopying, NSCoding>

+ (BOOL)supportsSecureCoding;
+ (id)immutablePlaceholder;

- (id)initWithCoder:(id)a0;
- (id)init;
- (oneway void)release;
- (id)initWithFileSec:(struct _filesec { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)retainCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (void)dealloc;

@end
