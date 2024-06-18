@interface NSPlaceholderValue : NSNumber {
    struct _NSZone { } *zoneForInstance;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (const char *)objCType;
- (id)init;
- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;
- (void)getValue:(void *)a0;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (BOOL)_tryRetain;
- (oneway void)release;
- (id)autorelease;
- (unsigned long long)retainCount;
- (id)retain;
- (void)dealloc;
- (BOOL)_isDeallocating;

@end
