@class NSString, NSArray, ATXComplicationSuggestionScorer, ATXComplicationSuggestionCache, ATXPosterConfigurationCache, ATXWidgetDescriptorCache, ATXComplicationSuggestionParameters, ATXComplicationSet;

@interface ATXComplicationSuggestionGenerator : NSObject <ATXFaceGalleryLayoutGeneratorComplicationProviding> {
    ATXWidgetDescriptorCache *_descriptorCache;
    ATXComplicationSuggestionCache *_complicationSuggestionCache;
    ATXComplicationSuggestionScorer *_complicationScorer;
    ATXComplicationSuggestionParameters *_parameters;
    ATXPosterConfigurationCache *_posterConfigurationCache;
}

@property (readonly, nonatomic) ATXComplicationSet *inlineSet;
@property (readonly, copy, nonatomic) NSArray *modularSets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_inlineSetDescriptors_ShouldRefresh:(BOOL)a0;
- (id)init;
- (BOOL)_layoutIsValidGivenComplications:(id)a0 allowedComplicationPersonalities:(id)a1;
- (BOOL)_complicationIsAlreadyAdded:(id)a0 alreadyAddedComplications:(id)a1;
- (long long)_layoutTypeForSet:(id)a0;
- (id)_complicationWithDesiredLayout:(long long)a0 complicationDescriptors:(id)a1 unusedRecentsComplications:(id)a2 alreadyAddedComplications:(id)a3;
- (id)_scoredInlineComplicationDescriptors;
- (id)modelDescription;
- (void).cxx_destruct;
- (id)scoredComplicationsDescription;
- (id)_modularLayoutTypesGivenRecentsLayoutType:(long long)a0;
- (id)modularSetsWithDesiredLayouts:(id)a0 unusedRecentComplications:(id)a1 alreadyAddedComplications:(id)a2;
- (id)_scoredModularComplicationDescriptors;
- (id)_circularComplicationFromComplications:(id)a0;
- (id)descriptionForScoredSet:(id)a0;
- (id)_complicationsFromFallbackSet:(id)a0 alreadyAddedDescriptors:(id)a1;
- (id)_recentInlineComplications;
- (id)_modularDescriptors_ShouldRefresh:(BOOL)a0;
- (void)refreshComplicationCache;
- (id)_fallbackSets;
- (id)inputDescriptionForComplicationSuggestionSignal:(id)a0;
- (id)_recentsComplications_unusedComplications:(id)a0;
- (id)_rectangularComplicationFromComplications:(id)a0;
- (id)_recentsSet_unusedComplications:(id)a0;

@end
