@class ATXInfoToBlendingConfidenceMapper, ATXHomeScreenConfigCache, ATXIntentMetadataCache, NSArray, ATXEngagementRecordManager, ATXWidgetDescriptorCache;

@interface ATXActionToWidgetConverter : NSObject {
    ATXWidgetDescriptorCache *_descriptorCache;
    ATXIntentMetadataCache *_intentMetadataCache;
    ATXInfoToBlendingConfidenceMapper *_infoConfidenceMapper;
    ATXEngagementRecordManager *_engagementRecordManager;
    ATXHomeScreenConfigCache *_homeScreenConfigCache;
    NSArray *_homeScreenPages;
}

+ (BOOL)isWidgetIntent:(id)a0 validConversionFromActionIntent:(id)a1;

- (id)init;
- (id)_widgetForIntent:(id)a0;
- (id)_selectPersonIntentForSendMessageIntent:(id)a0;
- (id)_peopleInfoSuggestionForSendMessageIntent:(id)a0 action:(id)a1;
- (id)_convertedSuggestionFromInfoSuggestion:(id)a0 originalSuggestion:(id)a1;
- (id)convertSuggestions:(id)a0;
- (void).cxx_destruct;
- (id)_infoSuggestionForAction:(id)a0;
- (id)initWithIntentMetadataCache:(id)a0 widgetDescriptorCache:(id)a1 infoConfidenceMapper:(id)a2 engagementRecordManager:(id)a3;

@end
