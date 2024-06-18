@class NSDictionary;

@interface ATXComplicationSuggestionParameters : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (id)init;
- (id)fallbackSetsForSet2;
- (id)inlineComplicationsToPriorsMapping;
- (id)appsToPriorsMapping;
- (BOOL)alwaysUseFallbackSets;
- (void).cxx_destruct;
- (id)modularComplicationsToPriorsMapping;
- (id)fallbackSetsForSet3;
- (id)fallbackSetsForSet1;

@end
