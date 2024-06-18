@class NSArray, NSString, NSLocale;

@interface UILocalizedIndexedCollation : NSObject {
    NSLocale *_locale;
    NSArray *_sectionTitles;
    NSArray *_sectionStartStrings;
    NSArray *_sectionIndexTitles;
    NSArray *_sectionIndexMapping;
    NSString *_transform;
    NSString *_firstSectionStartString;
    NSString *_lastSectionStartString;
    struct __CFStringTokenizer { } *_tokenizer;
    BOOL _primaryLanguageIsJapanese;
    BOOL _preferJapaneseRomajiTranscriptions;
}

@property (readonly, nonatomic) NSArray *sectionTitles;
@property (readonly, nonatomic) NSArray *sectionIndexTitles;

+ (id)collationWithDictionary:(id)a0;
+ (id)currentCollation;

- (id)initWithDictionary:(id)a0;
- (struct __CFStringTokenizer { } *)tokenizer;
- (id)transformedCollationStringForString:(id)a0;
- (void).cxx_destruct;
- (id)sortedArrayFromArray:(id)a0 collationStringSelector:(SEL)a1;
- (long long)sectionForSectionIndexTitleAtIndex:(long long)a0;
- (long long)sectionForObject:(id)a0 collationStringSelector:(SEL)a1;
- (void)dealloc;
- (id)_kanaTranscriptionForString:(id)a0;

@end
