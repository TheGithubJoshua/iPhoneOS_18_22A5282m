@class NSMutableDictionary, NSCache, TSUDateParserLibrary, NSLocale, NSTimeZone, NSMutableArray, NSString, NSRecursiveLock, TSUDecimalFormatter, NSArray, NSLock, TSUFormattingSymbols;

@interface TSULocale : NSObject {
    NSString *_cacheKey;
    struct TSUNumberOrDateLexer { NSString *_decimalSeparator; NSString *_currencyDecimalSeparator; NSString *_groupingSeparator; NSString *_currencyGroupingSeparator; NSString *_percentSymbol; unsigned short _decSep; unsigned short _currDecSep; unsigned short _groupSep; unsigned short _currGroupSep; unsigned short _percentSym; unsigned short _alternateDecSep; unsigned short _alternateGroupSep; unsigned short _alternatePercentSym; BOOL _checkedForAlternateSeparators; struct TSUIndexSet { unsigned char _isEmpty : 1; unsigned char _hasSingleRange : 1; struct TSUIndexRange { long long _begin; long long _end; } _singleRange; struct *_multipleRanges; } _dateSeps; unsigned short _timeSep; struct TSUIndexSet { unsigned char _isEmpty : 1; unsigned char _hasSingleRange : 1; struct TSUIndexRange { long long _begin; long long _end; } _singleRange; struct *_multipleRanges; } _additionalIdentChars; struct TSUIndexSet { unsigned char _isEmpty : 1; unsigned char _hasSingleRange : 1; struct TSUIndexRange { long long _begin; long long _end; } _singleRange; struct *_multipleRanges; } _identStartChars; struct unordered_map<NSString *, unsigned long long, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, unsigned long long>>> { struct __hash_table<std::__hash_value_type<NSString *, unsigned long long>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, unsigned long long>, std::hash<NSString *>, std::equal_to<NSString *>, true>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, unsigned long long>, std::equal_to<NSString *>, std::hash<NSString *>, true>, std::allocator<std::__hash_value_type<NSString *, unsigned long long>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, unsigned long long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, unsigned long long>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, unsigned long long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, unsigned long long>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, unsigned long long>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, unsigned long long>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, unsigned long long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, unsigned long long>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, unsigned long long>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, unsigned long long>, std::hash<NSString *>, std::equal_to<NSString *>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, unsigned long long>, std::equal_to<NSString *>, std::hash<NSString *>, true>> { float __value_; } __p3_; } __table_; } _identifierToClassificationMap; struct unordered_map<unsigned short, std::vector<NSString *>, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, std::vector<NSString *>>>> { struct __hash_table<std::__hash_value_type<unsigned short, std::vector<NSString *>>, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, std::vector<NSString *>>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, std::vector<NSString *>>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>, std::allocator<std::__hash_value_type<unsigned short, std::vector<NSString *>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, std::vector<NSString *>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, std::vector<NSString *>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, std::vector<NSString *>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, std::vector<NSString *>>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, std::vector<NSString *>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, std::vector<NSString *>>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, std::vector<NSString *>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned short, std::vector<NSString *>>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, std::vector<NSString *>>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, std::vector<NSString *>>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, std::vector<NSString *>>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>> { float __value_; } __p3_; } __table_; } _identifiersForStartChar; unsigned long long _maxIdentifierLength; struct unordered_map<unsigned short, TSUNumerAndDenom, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, TSUNumerAndDenom>>> { struct __hash_table<std::__hash_value_type<unsigned short, TSUNumerAndDenom>, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, TSUNumerAndDenom>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, TSUNumerAndDenom>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>, std::allocator<std::__hash_value_type<unsigned short, TSUNumerAndDenom>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUNumerAndDenom>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUNumerAndDenom>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUNumerAndDenom>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUNumerAndDenom>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUNumerAndDenom>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUNumerAndDenom>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUNumerAndDenom>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned short, TSUNumerAndDenom>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSUNumerAndDenom>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, TSUNumerAndDenom>, std::hash<unsigned short>, std::equal_to<unsigned short>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, TSUNumerAndDenom>, std::equal_to<unsigned short>, std::hash<unsigned short>, true>> { float __value_; } __p3_; } __table_; } _vulgarFractionMap; BOOL _loadInDateTimeSymbols; NSString *_localeIdentifier; } _numberOrDateLexer;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _formattersMutex;
    NSMutableArray *_numberFormatters;
    NSMutableArray *_scientificNumberFormatters;
    NSLock *_numberFormatterStringFromDoubleWithFormatLock;
    TSUDecimalFormatter *_plainFormatter;
    TSUDecimalFormatter *_noMinusSignPlainFormatter;
    TSUDecimalFormatter *_currencyFormatter;
    TSUDecimalFormatter *_noMinusSignCurrencyFormatter;
    NSString *_activeCurrencyCode;
    NSString *_activeNoMinusSignCurrencyCode;
    NSLock *_localeSpecificStorageLock;
    NSMutableDictionary *_localeSpecificStorage;
    NSCache *_cachedLocalizedStrings;
    NSRecursiveLock *_icuDateBlockUsingLock;
}

@property (class, readonly, nonatomic) TSULocale *currentLocale;
@property (class, readonly, nonatomic) TSULocale *preferredLocale;
@property (class, readonly, copy, nonatomic) NSLocale *applicationLocale;
@property (class, readonly, nonatomic) TSULocale *usEnglishLocale;

@property (readonly) NSLocale *locale;
@property (readonly) const struct __CFLocale { } *cfLocale;
@property (readonly) NSLocale *gregorianCalendarLocale;
@property (readonly) const struct __CFLocale { } *cfGregorianCalendarLocale;
@property (readonly) NSString *languageCode;
@property (readonly) NSString *localeIdentifier;
@property (readonly) NSString *documentLanguageIdentifier;
@property (readonly, nonatomic) TSUFormattingSymbols *formattingSymbols;
@property (readonly) NSString *cacheKey;
@property (readonly) BOOL isAutoUpdating;
@property (readonly) NSString *numberingSystem;
@property (readonly) NSString *decimalSeparator;
@property (readonly) NSString *groupingSeparator;
@property (readonly) NSString *minusSign;
@property (readonly) NSString *listSeparator;
@property (readonly) NSString *percentSymbol;
@property (readonly) unsigned long long groupingSize;
@property (readonly) NSString *currencyCode;
@property (readonly) long long dateComponentOrdering;
@property (readonly) NSArray *standaloneMonthSymbols;
@property (readonly) NSArray *standaloneWeekdaySymbols;
@property (readonly) NSArray *shortStandaloneMonthSymbols;
@property (readonly) NSArray *shortStandaloneWeekdaySymbols;
@property (readonly) NSString *amString;
@property (readonly) NSString *pmString;
@property (readonly) BOOL uses24HourTimeCycle;
@property (readonly) NSString *trueString;
@property (readonly) NSString *falseString;
@property (readonly) TSUDateParserLibrary *dateParserLibrary;
@property (readonly) NSTimeZone *timeZone;
@property (readonly) BOOL currencyUsesRightToLeftWritingDirection;
@property (readonly, nonatomic) const void *numberOrDateLexer;

+ (id)preferredLanguages;
+ (void)initialize;
+ (id)availableCurrencyCodes;
+ (id)currencySymbolForCurrencyCode:(id)a0;
+ (id)currentLocaleCurrencyCode;
+ (unsigned short)defaultDecimalPlacesForCurrencyCode:(id)a0;
+ (id)displayNameForCurrencyCode:(id)a0;
+ (id)userVisibleCurrencyCodes;
+ (id)canonicalizeLocaleIdentifierWithLanguageAndScriptOnly:(id)a0;
+ (id)canonicalizeLocaleIdentifierWithLanguageOnly:(id)a0;
+ (id)canonicalizeLocaleIdentifierWithLanguageScriptAndRegionOnly:(id)a0;
+ (id)allSupportedTemplatePickerLanguages;
+ (id)allSupportedTier1Languages;
+ (id)allSupportedTier3Languages;
+ (unsigned long long)autoupdatingCurrentLocaleChangeCount;
+ (id)canonicalizeLocaleIdentifier:(id)a0;
+ (id)canonicalizeLocaleIdentifierWithLanguageAndRegionOnly:(id)a0;
+ (id)deducedScriptForLocale:(id)a0;
+ (id)displayNameForCode:(id)a0 ofType:(id)a1 displayStandalone:(BOOL)a2;
+ (id)localeIDWithDefaultRegionCode:(id)a0;
+ (id)localeIDWithoutDefaultRegionCode:(id)a0 avoidAmbiguousCases:(BOOL)a1;
+ (BOOL)localeIsAutoUpdating:(id)a0;
+ (void)saveLocaleForReuse:(id)a0;
+ (void)setLocalizedStringBundle:(struct __CFBundle { } *)a0;
+ (id)simplifiedDisplayNameForLocaleID:(id)a0 displayStandalone:(BOOL)a1;
+ (id)formattedForDollarFunction:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a0 precision:(int)a1 forLocale:(id)a2;
+ (BOOL)isValidCurrencyCode:(id)a0;
+ (id)localeForLocaleIdentifier:(id)a0 documentLanguageIdentifier:(id)a1 formattingSymbolsVersion:(id)a2;
+ (id)sanitizedLocaleIdentifierForIdentifier:(id)a0;

- (id)initWithLocale:(id)a0;
- (unsigned long long)hash;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)localizedStringForKey:(id)a0 value:(id)a1 table:(id)a2;
- (void)dealloc;
- (id)URLForResource:(id)a0 withExtension:(id)a1 subdirectory:(id)a2 inBundleWithURL:(id)a3;
- (id)URLForResource:(id)a0 withExtension:(id)a1 subdirectory:(id)a2;
- (id)localizedStringWithFormat:(id)a0;
- (id)currencySymbolForCurrencyCode:(id)a0;
- (id)displayNameForCurrencyCode:(id)a0;
- (BOOL)localizedCaseInsensitiveIsEqual:(id)a0 toString:(id)a1;
- (BOOL)isLanguageCharacterDirectionRightToLeft;
- (id)URLForResource:(id)a0 withExtension:(id)a1 subdirectory:(id)a2 inBundle:(struct __CFBundle { } *)a3;
- (id)initWithLocale:(id)a0 documentLanguageIdentifier:(id)a1;
- (void)_initializeNumberFormatterStringFromDoubleCache;
- (unsigned long long)autoupdatingCurrentLocaleChangeCount;
- (id)checkoutNumberFormatter;
- (id)checkoutScientificNumberFormatter;
- (id)copyWithDocumentLanguageIdentifier:(id)a0;
- (id)displayLanguageNameWithStandalone:(BOOL)a0;
- (id)localeIdentifierWithLanguageAndRegionOnly;
- (id)localeIdentifierWithLanguageScriptAndRegionOnly;
- (id)localeSpecificStorageForKey:(id)a0;
- (long long)localizedCaseInsensitiveCompare:(id)a0 toString:(id)a1;
- (long long)localizedCompare:(id)a0 toString:(id)a1;
- (id)numberFormatterStringFromDouble:(double)a0 withFormat:(id)a1 useDecimalPlaces:(BOOL)a2 minDecimalPlaces:(unsigned short)a3 decimalPlaces:(unsigned short)a4 showThousandsSeparator:(BOOL)a5 currencyCode:(id)a6 suppressMinusSign:(BOOL)a7;
- (void)returnNumberFormatter:(id)a0;
- (void)returnScientificNumberFormatter:(id)a0;
- (void)setLocaleSpecificStorage:(id)a0 forKey:(id)a1;
- (id)simplifiedDisplayNameWithStandalone:(BOOL)a0;
- (id)createHarmonizedDecimalFormatterOfStyle:(long long)a0;
- (id)currencyCodeForCurrencySymbol:(id)a0;
- (BOOL)isEqualViaFormattingAsDouble:(double)a0 :(double)a1;
- (BOOL)isLanguageFormulasDirectionRightToLeft;
- (id)copyWithGregorianCalendar;
- (id)initWithLocale:(id)a0 documentLanguageIdentifier:(id)a1 formattingSymbols:(id)a2;
- (id)initWithLocale:(id)a0 documentLanguageIdentifier:(id)a1 useAutoupdating:(BOOL)a2 formattingSymbols:(id)a3;
- (id)initWithLocale:(id)a0 formattingSymbols:(id)a1;
- (id)languageIdentifierWithLanguageAndRegionOnly;
- (id)localeIdentifierWithCalendarAndNumberingSystem;
- (void)performICUDateUsingBlock:(id /* block */)a0;

@end