@class NSArray;

@interface AFGetSettingsRequest : AFSiriRequest

@property (copy, nonatomic) NSArray *settings;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)createResponse;

@end
