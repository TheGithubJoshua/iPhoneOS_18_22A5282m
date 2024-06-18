@interface _NSNoChangeToken : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)initWithCoder:(id)a0;
- (id)init;
- (BOOL)_tryRetain;
- (oneway void)release;
- (unsigned long long)hash;
- (id)autorelease;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (unsigned long long)retainCount;
- (id)retain;
- (BOOL)_isDeallocating;

@end
