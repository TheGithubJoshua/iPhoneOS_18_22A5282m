@interface _NSConstantData : NSData

+ (id)alloc;

- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (void)dealloc;
- (unsigned long long)length;
- (const void *)bytes;

@end
