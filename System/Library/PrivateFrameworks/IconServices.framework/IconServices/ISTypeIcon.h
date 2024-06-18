@class NSString;

@interface ISTypeIcon : ISBindableIcon

@property (readonly) NSString *type;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)makeResourceProvider;
- (id)initWithType:(id)a0;
- (id)symbol;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)_fallbackKey;

@end
