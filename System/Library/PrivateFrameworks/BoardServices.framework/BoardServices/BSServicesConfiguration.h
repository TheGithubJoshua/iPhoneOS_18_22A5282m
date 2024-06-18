@class NSSet, NSString, NSDictionary, NSOrderedSet;

@interface BSServicesConfiguration : NSObject <BSDescriptionProviding> {
    NSDictionary *_domainsByIdentifier;
    NSOrderedSet *_orderedDomains;
}

@property (readonly, copy, nonatomic) NSSet *domains;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultConfiguration;
+ (id)bootstrapConfiguration;
+ (id)activateManualDomain:(id)a0;
+ (id)extendAutomaticBootstrapCompletion;
+ (id)registerDynamicDomainsFromPlist:(id)a0;

- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)domainsContainingServiceIdentifier:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)domainForIdentifier:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)domainForMachName:(id)a0;

@end
