@interface NSCTRubyAnnotation : NSRubyAnnotation

+ (Class)classForKeyedArchiver;
+ (Class)classForKeyedUnarchiver;

- (unsigned long long)_cfTypeID;
- (oneway void)release;
- (unsigned long long)hash;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)retainCount;
- (id)retain;

@end
