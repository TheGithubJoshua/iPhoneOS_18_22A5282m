@class NSString;

@interface PKDeviceEnvironment : NSObject

@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSString *deviceLanguage;

- (id)_init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCountryCode:(id)a0 deviceLanguage:(id)a1;
- (BOOL)localeDiffersFromEnvironment:(id)a0;

@end
