@class NSString;

@interface __NSCFConstantString : __NSCFString <NSRedactedDescription>

@property (readonly, copy) NSString *redactedDescription;

- (id)copy;
- (oneway void)release;
- (BOOL)isNSCFConstantString__;
- (id)autorelease;
- (unsigned long long)retainCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;

@end
