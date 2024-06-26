@class NSString, NSDictionary;

@interface NSOrthography : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *dominantScript;
@property (readonly, copy) NSDictionary *languageMap;

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_orthographyWithDominantScript:(id)a0 languageMap:(id)a1;
+ (id)_scriptNameForScriptIndex:(unsigned long long)a0;
+ (id)defaultOrthographyForLanguage:(id)a0;
+ (id)orthographyWithDominantScript:(id)a0 languageMap:(id)a1;

- (id)initWithCoder:(id)a0;
- (id)replacementObjectForPortCoder:(id)a0;
- (Class)classForCoder;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)allLanguages;
- (id)allScripts;
- (id)dominantLanguage;
- (id)dominantLanguageForScript:(id)a0;
- (id)initWithDominantScript:(id)a0 languageMap:(id)a1;
- (id)languagesForScript:(id)a0;
- (unsigned int)orthographyFlags;

@end
