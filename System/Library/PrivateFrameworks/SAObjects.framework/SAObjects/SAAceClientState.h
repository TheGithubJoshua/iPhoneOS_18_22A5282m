@interface SAAceClientState : SADomainObject

+ (id)aceClientStateWithDictionary:(id)a0 context:(id)a1;
+ (id)aceClientState;
+ (id)deliveryDeadline;
+ (id)persistencePolicy;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
