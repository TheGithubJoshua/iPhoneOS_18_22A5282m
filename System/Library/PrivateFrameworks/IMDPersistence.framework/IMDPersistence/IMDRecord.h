@interface IMDRecord : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)init;
- (oneway void)release;
- (unsigned long long)hash;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)retainCount;
- (id)retain;

@end
