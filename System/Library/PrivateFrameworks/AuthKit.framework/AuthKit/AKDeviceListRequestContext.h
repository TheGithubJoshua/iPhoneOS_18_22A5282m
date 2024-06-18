@class NSString, NSArray;

@interface AKDeviceListRequestContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic) BOOL includeUntrustedDevices;
@property (nonatomic) BOOL includeFamilyDevices;
@property (copy, nonatomic) NSArray *services;
@property (copy, nonatomic) NSArray *operatingSystems;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
