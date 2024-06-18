@class NSBundle, ATXProactiveSuggestionClientModelSpecification;

@interface ATXFallbackActions : NSObject {
    NSBundle *_bundle;
    ATXProactiveSuggestionClientModelSpecification *_clientModelSpec;
}

+ (unsigned long long)fallbackActionTypeForString:(id)a0;
+ (id)stringForFallbackActionType:(unsigned long long)a0;
+ (id)fallbackActionsBundle;
+ (id)dateWithoutMinutesAndSeconds:(id)a0;

- (id)localizedStringForKey:(id)a0;
- (id)init;
- (id)startATimer;
- (id)initWithClientModelSpec:(id)a0;
- (id)proactiveSuggestionForAction:(id)a0;
- (void).cxx_destruct;
- (id)searchSafari;
- (id)createAnEventForCurrentDate:(id)a0;
- (id)viewPhotos;
- (id)suggestionsForAllFallbackActions;
- (id)suggestionforSpecifiedFallbackActionType:(unsigned long long)a0;
- (id)sendAMessage;

@end
