@class NSString;

@interface PRPosterSystemTimeFontConfiguration : PRPosterTimeFontConfiguration

@property (readonly, copy, nonatomic) NSString *timeFontIdentifier;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)defaultTimeFontIdentifier;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)timeFontConfigurationWithExtensionBundleURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)uniqueIdentifier;
- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithTimeFontIdentifier:(id)a0;

@end
