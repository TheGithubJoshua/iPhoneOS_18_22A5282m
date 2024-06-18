@interface VNRuntimeUtilities : NSObject

+ (void)enumerateSubclassesOfClass:(Class)a0 excludingRootClass:(BOOL)a1 usingBlock:(id /* block */)a2;
+ (id)subclassesOfClass:(Class)a0 excludingRootClass:(BOOL)a1 passingTest:(id /* block */)a2;
+ (BOOL)linkTimeOrRunTimeAtLeastVersion:(int)a0;
+ (int)runTimeVersion;
+ (BOOL)class:(Class)a0 overridesClassSelector:(SEL)a1;
+ (BOOL)linkTimeOrRunTimeBeforeVersion:(int)a0;
+ (BOOL)object:(id)a0 overridesSelector:(SEL)a1;
+ (id)allSubclassesOfClass:(Class)a0 excludingRootClass:(BOOL)a1 overridingClassSelector:(SEL)a2;
+ (int)linkTimeVersion;
+ (id)leafSubclassesOfClass:(Class)a0 excludingRootClass:(BOOL)a1 overridingClassSelector:(SEL)a2;

@end
