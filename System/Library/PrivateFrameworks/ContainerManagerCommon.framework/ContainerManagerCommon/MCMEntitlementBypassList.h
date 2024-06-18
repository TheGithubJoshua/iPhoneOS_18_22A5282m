@class NSDictionary, NSSet;

@interface MCMEntitlementBypassList : NSObject {
    NSSet *_bypassListedLookupByContainer[15];
    NSDictionary *_bypassListedLookupByCodeSignIdentifier;
}

@property (retain, nonatomic) NSDictionary *systemEntitlementBypassList;
@property (retain, nonatomic) NSDictionary *systemGroupEntitlementBypassList;

+ (id)sharedBypassList;

- (BOOL)systemContainerIdIsWellknown:(id)a0;
- (id)initWithSystemContainerMapping:(id)a0 systemGroupContainerMapping:(id)a1 bypassListedContainerMapping:(id)a2 bypassListedCodeSignIdentifierMapping:(id)a3;
- (id)wellknownSystemContainers;
- (BOOL)systemGroupContainerIdIsWellknown:(id)a0;
- (id)wellknownSystemContainerForId:(id)a0;
- (id)wellknownSystemGroupContainers;
- (void).cxx_destruct;
- (BOOL)containerIdIsWellknown:(id)a0 class:(unsigned long long)a1;
- (id)wellknownContainerForId:(id)a0 class:(unsigned long long)a1;
- (id)wellknownSystemGroupContainerForId:(id)a0;
- (BOOL)isLookupAllowedToBypassEntitlementFromCodeSignIdentifier:(id)a0 forContainerClass:(unsigned long long)a1 containerIdentifier:(id)a2;
- (id)wellKnownContainerIdentifiersForSandboxPushDownCompatibilitySet;
- (id)_convertArraysToSetsInNestedDictionary:(id)a0;

@end
