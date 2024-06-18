@class NSString, NSMutableDictionary;

@interface SBHFeatureIntroductionManager : NSObject <BSDescriptionProviding> {
    NSMutableDictionary *_allFeatureIntroductionItems;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addFeatureIntroductionItem:(id)a0 atLocations:(unsigned long long)a1;
- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)removeFeatureIntroductionAtAllLocationsWithItem:(id)a0;
- (void)removeFeatureIntroductionItem:(id)a0 atLocations:(unsigned long long)a1;
- (id)succinctDescription;
- (void)removeAllFeatureIntroductionsAtLocations:(unsigned long long)a0;
- (id)featureIntroductionItemAtLocation:(unsigned long long)a0;
- (id)featureIntroductionItemAtLocation:(unsigned long long)a0 withIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)featureIntroductionItemsSetAtLocation:(unsigned long long)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)featureLocationKeyFromLocation:(unsigned long long)a0;
- (unsigned long long)featureLocationFromMask:(unsigned long long)a0;

@end
