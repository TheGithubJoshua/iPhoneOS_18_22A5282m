@class NSString;

@interface IOKObject : NSObject

@property (readonly, copy, nonatomic) NSString *ioClassName;
@property (readonly, nonatomic) unsigned int object;

+ (id)bundleIdentifierForClassName:(id)a0;
+ (id)ioSuperClassNameForClassName:(id)a0;
+ (Class)classForRegistryEntry:(unsigned int)a0;

- (BOOL)conformsToIOClassName:(id)a0;
- (id)init;
- (id)initWithIOObject:(unsigned int)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;

@end
