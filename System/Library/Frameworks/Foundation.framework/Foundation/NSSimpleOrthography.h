@interface NSSimpleOrthography : NSOrthography {
    unsigned int _orthographyFlags;
}

+ (BOOL)supportsSecureCoding;
+ (void)initialize;
+ (id)orthographyWithFlags:(unsigned int)a0;

- (id)initWithCoder:(id)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFlags:(unsigned int)a0;
- (id)allLanguages;
- (id)allScripts;
- (id)dominantLanguage;
- (id)dominantLanguageForScript:(id)a0;
- (id)dominantScript;
- (id)initWithDominantScript:(id)a0 languageMap:(id)a1;
- (id)languageMap;
- (id)languagesForScript:(id)a0;
- (unsigned int)orthographyFlags;

@end
