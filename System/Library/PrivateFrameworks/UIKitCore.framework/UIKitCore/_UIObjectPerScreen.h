@interface _UIObjectPerScreen : NSObject

+ (id)objectOfClass:(Class)a0 forScreen:(id)a1 withOptions:(id)a2 createIfNecessary:(BOOL)a3;
+ (void)removeObject:(id)a0;
+ (void)screenDisconnected:(id)a0;
+ (void)removeObjectsOfClass:(Class)a0;

@end
