@interface _NSExtensionContextVendor : NSObject

+ (id)_extensionMainStoryboard;
+ (id)_sharedExtensionContextVendor;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (Class)_extensionContextClass;
+ (void)_startListening;
+ (Class)_extensionPrincipalClass;
+ (id)_extensionDictionary;
+ (void)_startListening:(BOOL)a0;

- (id)init;
- (id)_init;
- (void)_tearDownContextWithUUID:(id)a0;
- (void)_setPrincipalObject:(id)a0 forUUID:(id)a1;
- (id)_extensionContextForUUID:(id)a0;

@end
