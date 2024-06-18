@class SADomainObject;

@interface SAAcknowledgeAlert : SABaseClientBoundCommand

@property (retain, nonatomic) SADomainObject *object;

+ (id)acknowledgeAlertWithDictionary:(id)a0 context:(id)a1;
+ (id)acknowledgeAlert;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
