@class NSString;

@interface DIAttributeText : DIAttribute <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long minLength;
@property (nonatomic) unsigned long long maxLength;
@property (nonatomic) BOOL isSecureText;
@property (nonatomic) BOOL isSecureVisibleText;
@property (nonatomic) BOOL isNumeric;
@property (copy, nonatomic) NSString *defaultValue;
@property (nonatomic, getter=useLuhnCheck) BOOL luhnCheck;
@property (copy, nonatomic) NSString *displayFormatPlaceholder;
@property (copy, nonatomic, getter=getCurrentValue) NSString *currentValue;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)displayFormatPaddingCharacters;
- (id)submissionString;

@end
