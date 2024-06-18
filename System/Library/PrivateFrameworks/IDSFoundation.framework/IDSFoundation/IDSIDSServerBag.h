@interface IDSIDSServerBag : IDSServerBag

+ (id)_bagCreationLock;
+ (id)defaultBag;

- (id)init;
- (id)_bagDefaultsDomain;
- (BOOL)isInDebilitatedMode;
- (BOOL)requiresIDSConnection;
- (unsigned long long)_bagDomain;

@end
