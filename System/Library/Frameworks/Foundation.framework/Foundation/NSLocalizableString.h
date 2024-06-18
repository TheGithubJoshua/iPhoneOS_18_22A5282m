@class NSString;

@interface NSLocalizableString : NSString {
    NSString *_stringsFileKey;
    NSString *_developmentLanguageString;
}

@property (readonly, copy) NSString *stringsFileKey;
@property (readonly, copy) NSString *developmentLanguageString;

+ (BOOL)supportsSecureCoding;
+ (id)localizableStringWithStringsFileKey:(id)a0 developmentLanguageString:(id)a1;

- (id)initWithCoder:(id)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)awakeAfterUsingCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (unsigned long long)length;
- (id)initWithStringsFileKey:(id)a0 developmentLanguageString:(id)a1;
- (void)setDevelopmentLanguageString:(id)a0;
- (void)setStringsFileKey:(id)a0;

@end
