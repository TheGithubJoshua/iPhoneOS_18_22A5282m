@class NSString, NSDictionary;

@interface ATXBlendingLayerHyperParameters : NSObject <ATXUniversalBlendingLayerHyperParametersProtocol> {
    NSDictionary *_parameters;
    NSDictionary *_clientModelsToConsiderForConsumerSubType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)abHelperWithMobileAssets;
+ (id)abHelperWithTrialAssets;

- (BOOL)uiSupportsLayoutType:(long long)a0 consumerSubType:(unsigned char)a1;
- (id)init;
- (BOOL)uiConfidenceLevelMetBySuggestion:(id)a0;
- (id)initForTestingWithTrialAssetsOnly;
- (unsigned long long)lohStacksToConsiderAboveAndBelowForDeduplication;
- (id)clientModelsToConsiderForConsumerSubType;
- (BOOL)uiSupportsClientModelIdForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (BOOL)isSuggestionEligibleForSuggestionsWidget:(id)a0;
- (double)maxAgeOfStackSuggestionToConsiderStaleInSeconds;
- (long long)minConfidenceCategoryToConsider;
- (id)consumerSubTypesToConsiderForClientModelIds:(id)a0;
- (BOOL)uiSupportsExecutableTypeForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (BOOL)isSuggestionEligibleForAppPredictionPanel:(id)a0;
- (id)layoutsToConsiderForConsumerSubType:(unsigned char)a0;
- (void).cxx_destruct;
- (id)clientModelsToConsiderForConsumerSubType:(unsigned char)a0;
- (BOOL)uiSupportsSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (id)initForTestingWithMobileAssetAssetsOnly;
- (id)abGroup;
- (id)clientModelPriorityOrder;
- (id)executableTypesToConsiderForConsumerSubType:(unsigned char)a0;
- (BOOL)uiIsEnabledForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (double)sessionLogSamplingRate;

@end
