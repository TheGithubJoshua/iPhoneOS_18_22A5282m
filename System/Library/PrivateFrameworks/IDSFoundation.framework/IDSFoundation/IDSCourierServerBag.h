@interface IDSCourierServerBag : IDSServerBag

+ (id)_bagCreationLock;
+ (id)sharedInstance;
+ (id)_sharedInstanceForClass:(Class)a0;

- (id)init;
- (id)_bagDefaultsDomain;
- (unsigned long long)_bagDomain;

@end
