@class NSDictionary;

@interface PKContactFormatConfiguration : NSObject <NSSecureCoding> {
    NSDictionary *_regionalAddressFormatConfigurations;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL checkFormatOfPhoneNumber;
@property (readonly, nonatomic) BOOL checkFormatOfEmailAddress;

- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)contactFieldConfigurationForCountryCode:(id)a0;
- (id)regionalAddressFormatConfigurations;

@end
