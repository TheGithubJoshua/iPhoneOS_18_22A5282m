@interface __NSCFCharacterSet : NSMutableCharacterSet <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)initWithCoder:(id)a0;
- (BOOL)_tryRetain;
- (BOOL)longCharacterIsMember:(unsigned int)a0;
- (BOOL)hasMemberInPlane:(unsigned char)a0;
- (void)invert;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)removeCharactersInString:(id)a0;
- (BOOL)isSupersetOfSet:(id)a0;
- (oneway void)release;
- (void)addCharactersInString:(id)a0;
- (void)formIntersectionWithCharacterSet:(id)a0;
- (Class)classForCoder;
- (void)addCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)hash;
- (void)formUnionWithCharacterSet:(id)a0;
- (void)makeCharacterSetCompact;
- (void)encodeWithCoder:(id)a0;
- (void)removeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)retainCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (void)makeCharacterSetFast;
- (id)bitmapRepresentation;
- (id)invertedSet;
- (BOOL)_isDeallocating;
- (BOOL)characterIsMember:(unsigned short)a0;

@end
