@class NSMutableDictionary, NSArray, NSURL, NSString, NSObject, NSLocale;
@protocol OS_dispatch_queue;

@interface TPSSubscriptionLabeler : NSObject

@property (retain, nonatomic) NSMutableDictionary *labelDictionary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSArray *applicableUnlocalizedLabels;
@property (retain, nonatomic) NSString *applicableLanguage;
@property (retain, nonatomic) NSLocale *updatingLocale;
@property (retain, nonatomic) NSArray *cachedResult;

+ (double)widthOfString:(id)a0 attributes:(id)a1;
+ (id)localizedLabelsForLabels:(id)a0 languageIdentifiers:(id)a1;
+ (id)displayShortLabelStringsForLongFormShortLabels:(id)a0;
+ (id)standardLabelIdentifiers;
+ (BOOL)isExclusivelyCJKString:(id)a0 characterSets:(id)a1;
+ (id)stringsByAbbreviatingToPrefixesOfStrings:(id)a0;
+ (id)localizedLabelForLabel:(id)a0 longForm:(BOOL)a1 languageStringOverrides:(id)a2;
+ (id)_groupStringsByCollationEquivalency:(id)a0;
+ (id)localizedBadgeLabelsForUnlocalizedLabels:(id)a0 languageIdentifiers:(id)a1;
+ (id)localizedLabelForLabel:(id)a0;
+ (id)fontAttributeDictionary;
+ (id)localizedBadgeLabelsForUnlocalizedLabels:(id)a0 languageStringOverrides:(id)a1;
+ (BOOL)_dictionary:(id)a0 containsCollationEquivalentKey:(id)a1;
+ (id)localizedBadgeLabelsForUnlocalizedLabels:(id)a0;
+ (id)stringByShorteningString:(id)a0 maximumWidth:(double)a1 attributes:(id)a2;
+ (id)localizedStringDictionaryForLanguageIdentifiers:(id)a0 selectedLanguage:(id *)a1;
+ (id)localizedLabelsForLabels:(id)a0 languageStringOverrides:(id)a1;
+ (BOOL)isString:(id)a0 exclusivelyInCharacterSet:(struct USet { } *)a1;
+ (id)_resultWithAllCharacters:(id /* block */)a0 string:(id)a1;
+ (id)stringsByNumericallyDisambiguatingStrings:(id)a0;
+ (id)stringsByClippingStrings:(id)a0 toWidthOfString:(id)a1;

- (void).cxx_destruct;
- (void)_validateLabelsForInstalledUnlocalizedLabels:(id)a0 languageIdentifiers:(id)a1;
- (id)cachedLocalizedLabelsForUnlocalizedLabels:(id)a0;
- (id)cachedLocalizedLabelsForUnlocalizedLabels:(id)a0 languageIdentifiers:(id)a1;
- (id)initWithLabelStorage:(id)a0;

@end