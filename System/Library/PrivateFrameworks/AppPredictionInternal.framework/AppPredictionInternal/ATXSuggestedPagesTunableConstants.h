@class NSDictionary;

@interface ATXSuggestedPagesTunableConstants : NSObject {
    NSDictionary *_suggestedPagesTunableConstants;
}

- (int)maxSuggestedPages;
- (id)init;
- (int)maxWidgetsInStack;
- (int)faceComplicationsSignificantRemindersEventCount;
- (double)maxRatioOfAppleAppsForFirstPageSorting;
- (double)suggestedPagesModeAffinityAppDataSourceScoreThreshold;
- (void).cxx_destruct;
- (int)numberOfContactsForMediumWidget;
- (int)numberOfContactsForSmallWidget;
- (int)faceComplicationsSignificantStocksEventCount;
- (int)faceComplicationsSignificantHomeAccessoryEventCount;
- (int)stackHeuristicsSignificantHomeAccessoryEventCount;
- (double)minScoreForModeAffinityContactsWidgetSuggestions;

@end
