@class NSString, NSArray;

@interface UNLocalizedString : NSString

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSArray *arguments;
@property (readonly, copy, nonatomic) NSString *value;

+ (BOOL)supportsSecureCoding;
+ (id)localizedStringForKey:(id)a0 arguments:(id)a1 value:(id)a2;

- (id)initWithCoder:(id)a0;
- (id)init;
- (BOOL)_allowsDirectEncoding;
- (id)un_localizedStringKey;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)un_localizedStringArguments;
- (Class)classForKeyedArchiver;
- (Class)classForCoder;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)un_localizedStringValue;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)_initWithKey:(id)a0 arguments:(id)a1 value:(id)a2;
- (unsigned long long)length;

@end
