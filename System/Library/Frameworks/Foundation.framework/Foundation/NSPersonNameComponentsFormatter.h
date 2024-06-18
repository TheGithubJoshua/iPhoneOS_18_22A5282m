@class NSString, NSLocale;

@interface NSPersonNameComponentsFormatter : NSFormatter <NSObservable, NSObserver, NSSecureCoding, NSCopying> {
    id _private;
}

@property (class, readonly, copy) NSString *_preferredLocalizationForCurrentLocale;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *_preferredLocalizationForExplicitlySetLocale;
@property BOOL _forceFamilyNameFirst;
@property BOOL _forceGivenNameFirst;
@property NSLocale *_locale;
@property BOOL _ignoresFallbacks;
@property long long style;
@property (getter=isPhonetic) BOOL phonetic;
@property (copy) NSLocale *locale;

+ (BOOL)isKatakana:(id)a0;
+ (BOOL)__shortStyle:(long long)a0 isRestrictedForScript:(unsigned long long)a1;
+ (void)forEachExistingComponentWithComponents:(id)a0 performBlock:(id /* block */)a1;
+ (id /* block */)tibetanInitialsCreator;
+ (id)_cjkLanguagesSet;
+ (id)__naiveDelimiterForCombinedNameString:(id)a0;
+ (long long)_nameOrderWithOverridesForComponents:(id)a0 options:(unsigned long long)a1;
+ (id)_styleFormatterForStyle:(long long)a0 masterFormatter:(id)a1;
+ (id /* block */)arabicInitialsCreator;
+ (id /* block */)thaiInitialsCreator;
+ (id /* block */)westernInitialsCreator;
+ (id)__givenNameFirstOrdering;
+ (BOOL)_shortNameIsEnabled;
+ (id)__supportedNameDefaultsFromLocalization:(id)a0;
+ (id)__stringValueForStyle:(long long)a0;
+ (long long)__shortNameFormatForLocalization:(id)a0;
+ (id)_relevantKeyPathsForStyle:(long long)a0 options:(unsigned long long)a1;
+ (id)__familyNameFirstOrdering;
+ (BOOL)_shouldPreferNicknames;
+ (unsigned long long)__inferredScriptIndexForComponents:(id)a0 ignoreUndeterminedComponents:(BOOL)a1;
+ (BOOL)__style:(long long)a0 isRestrictedForLocalization:(id)a1;
+ (id)_preferredLocalizationFromLocale:(id)a0;
+ (BOOL)__shortStyleRestrictionExistsForComponents:(id)a0 shortStyle:(long long)a1;
+ (id)localizedStringFromPersonNameComponents:(id)a0 style:(long long)a1 options:(unsigned long long)a2;
+ (id)__stringValueForShortStyle:(long long)a0;
+ (id)_cjkLocaleIdentifiers;
+ (long long)__abbreviatedNameFormatForPersonNameComponents:(id)a0;
+ (id)__stringByStrippingNonInitialPunctuationFromString:(id)a0;
+ (unsigned long long)__inferredScriptIndexFromString:(id)a0;
+ (id)_formatterWithStyle:(long long)a0 options:(unsigned long long)a1;
+ (id)__thaiConsonantSet;
+ (BOOL)_isMixedScript:(id)a0;
+ (id)_fallbackDescriptorForStyle:(long long)a0 options:(unsigned long long)a1;
+ (id)__initialsForString:(id)a0;
+ (long long)__abbreviatedNameFormatForString:(id)a0;
+ (id)__scriptIdentifierFromIndex:(unsigned long long)a0;
+ (id)__longestComponentFromComponents:(id)a0;
+ (long long)_defaultDisplayNameOrder;
+ (long long)_defaultShortNameFormat;
+ (id)_localizedDelimiterForComponents:(id)a0 options:(unsigned long long)a1;
+ (SEL)__initialsCreatorForScript:(unsigned long long)a0;
+ (long long)__nameOrderForLocalization:(id)a0 usingNativeOrdering:(BOOL)a1;
+ (unsigned long long)__inferredScriptIndexForComponents:(id)a0;
+ (id)__characterSetWithPattern:(id)a0;
+ (BOOL)__shouldFallbackToGivenNameInitialForAbbreviatedNameFormatFamilyNameOnly;
+ (BOOL)_isCJKScript:(id)a0;
+ (BOOL)__contents:(id)a0 exclusivelyInCharacterSet:(struct USet { } *)a1;
+ (BOOL)__style:(long long)a0 isRestrictedForScript:(unsigned long long)a1;
+ (BOOL)__shouldCacheFallbackToGivenNameInitialForAbbreviatedNameFormatFamilyNameOnly;
+ (struct USet { } *)__getCharacterSetWithPattern:(id)a0;
+ (id)_localizedShortNameForComponents:(id)a0 withStyle:(long long)a1 options:(unsigned long long)a2;
+ (id)__supportedScriptDefaultsFromScriptName:(id)a0;
+ (BOOL)__shortStyle:(long long)a0 isRestrictedForLocalization:(id)a1;
+ (id)__preferredLanguages;
+ (id)__currentLocale;
+ (BOOL)_currentLocaleIsCJK;
+ (void)__registerDefaults;

- (id)initWithCoder:(id)a0;
- (id)init;
- (BOOL)__localizedRestrictionExistsForComponents:(id)a0 ignoreUndeterminedComponents:(BOOL)a1;
- (long long)__localizedNameOrderUsingNativeOrdering:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)__localizedRestrictionExistsForStyle:(long long)a0;
- (id)stringForObjectValue:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)receiveObservedValue:(id)a0;
- (id)stringFromPersonNameComponents:(id)a0;
- (long long)__computedNameOrderForComponents:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)__computedShortNameFormat;
- (BOOL)__localizedRestrictionExistsForShortStyle:(long long)a0;
- (long long)__localizedShortNameFormat;
- (void)dealloc;
- (long long)_nameOrderWithOverridesForComponents:(id)a0;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (BOOL)isEqualToFormatter:(id)a0;
- (id)annotatedStringFromPersonNameComponents:(id)a0;
- (id)personNameComponentsFromString:(id)a0;

@end