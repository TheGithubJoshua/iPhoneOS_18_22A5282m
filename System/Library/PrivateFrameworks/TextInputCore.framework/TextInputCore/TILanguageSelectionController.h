@class NSArray, NSMutableDictionary, TIInputMode, NSDictionary, NSMutableArray, TILanguageModelAdaptationContext;
@protocol TIMultilingualPreferenceProviding, TILanguageSelectionControllerDelegate, TILanguageLikelihoodModeling;

@interface TILanguageSelectionController : NSObject {
    struct vector<TITokenID, std::allocator<TITokenID>> { struct TITokenID *__begin_; struct TITokenID *__end_; struct __compressed_pair<TITokenID *, std::allocator<TITokenID>> { struct TITokenID *__value_; } __end_cap_; } m_buffered_tokens;
}

@property (readonly, nonatomic) id<TILanguageLikelihoodModeling> languageLikelihoodModel;
@property (readonly, nonatomic) id<TIMultilingualPreferenceProviding> preferenceProvider;
@property (retain, nonatomic) TIInputMode *primaryInputMode;
@property (retain, nonatomic) TIInputMode *preferredSecondaryInputMode;
@property (retain, nonatomic) TIInputMode *inferredSecondaryInputMode;
@property (retain, nonatomic) NSArray *userEnabledInputModes;
@property (retain, nonatomic) NSArray *activeInputModes;
@property (readonly, nonatomic) NSMutableDictionary *inputModeProbabilities;
@property (copy, nonatomic) NSDictionary *referenceInputModeProbabilities;
@property (readonly, nonatomic) NSMutableArray *bufferedTokenStrings;
@property (nonatomic) id<TILanguageSelectionControllerDelegate> delegate;
@property (retain, nonatomic) TILanguageModelAdaptationContext *adaptationContext;

+ (id)sharedLanguageLikelihoodModel;
+ (void)reportTypedTokens:(const void *)a0 activeInputModes:(id)a1;
+ (id)inferInputModeForLanguage:(id)a0 enabled:(id)a1;
+ (id)inputModesForLanguageIdentifiers:(id)a0;
+ (id)inferSecondaryInputModeForPrimary:(id)a0 enabled:(id)a1 enabledExcludingPreferredLanguages:(id)a2;
+ (id)inferSecondaryInputModeForPrimary:(id)a0 enabled:(id)a1;
+ (id)multilingualInputModesForInputModes:(id)a0;
+ (id)inputModeForLanguageIdentifier:(id)a0;

- (BOOL)updateInputModeProbabilities;
- (id)init;
- (void)feedBufferedTokenStringsToModel;
- (float)priorProbabilityForInputMode:(id)a0;
- (void)removeTokenString:(id)a0 tokenID:(struct TITokenID { unsigned int x0; unsigned int x1; })a1 context:(const struct TITokenID { unsigned int x0; unsigned int x1; } *)a2 contextLength:(unsigned long long)a3;
- (id)fetchPreferredSecondaryInputMode;
- (id)fetchUserEnabledInputModesExcludingPreferredLanguages;
- (void)appleKeyboardsPreferencesChanged:(id)a0;
- (void)updateActiveInputModesSuppressingNotification:(BOOL)a0;
- (BOOL)didProbabilityChangeSignificantly;
- (void)addTokenString:(id)a0 tokenID:(struct TITokenID { unsigned int x0; unsigned int x1; })a1 context:(const struct TITokenID { unsigned int x0; unsigned int x1; } *)a2 contextLength:(unsigned long long)a3;
- (void)flushBuffer;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)appleKeyboardsInternalSettingsChanged:(id)a0;
- (double)lastOfflineAdaptationTimeForApp:(id)a0;
- (BOOL)bufferIsCompatibleWithContext:(const struct TITokenID { unsigned int x0; unsigned int x1; } *)a0 contextLength:(unsigned long long)a1;
- (void)dealloc;
- (id)fetchUserEnabledInputModes;
- (id)initWithLanguageLikelihoodModel:(id)a0 preferenceProvider:(id)a1;

@end
