@class NPNameParser, NSLocale;

@interface _NSPersonNameComponentsFormatterData : NSObject <NSCopying, NSSecureCoding> {
    NPNameParser *_nameParser;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property long long style;
@property BOOL phonetic;
@property BOOL forceFamilyNameFirst;
@property BOOL forceGivenNameFirst;
@property BOOL ignoresFallbacks;
@property (copy) NSLocale *locale;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
