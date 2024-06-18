@class NSString;

@interface SADomainObjectCancelCompleted : SABaseCommand <SAServerBoundCommand, SADomainObjectCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)domainObjectCancelCompleted;
+ (id)domainObjectCancelCompletedWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end