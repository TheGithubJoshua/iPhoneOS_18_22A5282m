@class NSString;

@interface WiFiUsageNetworkIPv4Details : NSObject

@property (nonatomic) BOOL isValid;
@property (retain, nonatomic) NSString *ipv4Address;
@property (retain, nonatomic) NSString *ipv4RouterAddress;
@property (retain, nonatomic) NSString *ipv4RouterMacAddress;
@property (retain, nonatomic) NSString *ipv4DefGwAddress;
@property (retain, nonatomic) NSString *ipv4Subnet;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
