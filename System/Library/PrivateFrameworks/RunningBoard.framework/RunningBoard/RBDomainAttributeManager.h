@class NSString, NSDictionary;
@protocol RBDomainAttributeDataProviding;

@interface RBDomainAttributeManager : NSObject <RBDomainAttributeManaging, RBStateCapturing> {
    NSDictionary *_domainAttributeTemplatesByDomain;
    id<RBDomainAttributeDataProviding> _dataProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *stateCaptureTitle;

- (id)initWithDataProvider:(id)a0;
- (id)captureState;
- (id)allEntitlements;
- (id)additionalRestrictionsForDomain:(id)a0 andName:(id)a1;
- (BOOL)areTargetPropertiesValidForContext:(id)a0 forAttributeWithDomain:(id)a1 andName:(id)a2;
- (id)endowmentNamespaceForDomain:(id)a0 andName:(id)a1;
- (id)originatorEntitlementsForDomain:(id)a0 andName:(id)a1;
- (void).cxx_destruct;
- (id)restrictionsForDomain:(id)a0 andName:(id)a1;
- (BOOL)containsAttributeWithDomain:(id)a0 andName:(id)a1;
- (id)attributesForDomain:(id)a0 andName:(id)a1 context:(id)a2 withError:(id *)a3;
- (id)targetEntitlementsForDomain:(id)a0 andName:(id)a1;

@end
