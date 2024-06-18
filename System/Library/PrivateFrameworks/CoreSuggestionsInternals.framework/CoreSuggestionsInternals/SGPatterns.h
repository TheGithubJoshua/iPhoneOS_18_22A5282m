@class NSString, NSArray, NSMutableSet, NSCache;

@interface SGPatterns : NSObject {
    NSString *_classKey;
    NSArray *_langResolutionOrder;
    NSCache *_compiledRegexes2;
    NSString *_language;
    NSMutableSet *_regexpKeysSeen;
    int _localLanguageVersion;
}

+ (id)calculateCurrentLanguagesFromPreferredLocaleCodes:(id)a0;
+ (void)initialize;
+ (void)changeLanguageOrPatternData;
+ (void)setPatternsDictForTesting:(id)a0;
+ (void)_reinstateDeath;
+ (id)patternsForIdentifier:(id)a0;
+ (void)resetToDefaultPatternsForTesting;
+ (void)useAllLanguagesAtOnce:(BOOL)a0;
+ (id)languagePartOfLanguageCode:(id)a0;
+ (void)forceLanguagesTo:(id)a0;
+ (void)pauseCacheEvictionTemporarily;
+ (id)calculateLangResolutionOrder;
+ (id)patternsForClass:(Class)a0;
+ (void)clearAllRegexCaches;
+ (id)countryCodeFromLanguageCode:(id)a0;
+ (id)fallbackLanguageCodeForCountryCode:(id)a0;

- (id)stringSetMatcherForKey:(id)a0;
- (id)init;
- (id)regex2ForKey:(id)a0;
- (id)rawValueForKey:(id)a0;
- (void).cxx_destruct;
- (void)_becomeImmuneToDeath;
- (void)dealloc;
- (id)rawValuesForKey:(id)a0;
- (void)resetIfNeeded;
- (void)_clearRegexCache;
- (id)rawValueOrDataForKey:(id)a0;

@end
