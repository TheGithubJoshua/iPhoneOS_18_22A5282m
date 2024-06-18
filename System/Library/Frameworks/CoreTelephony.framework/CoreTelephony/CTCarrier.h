@class NSString;

@interface CTCarrier : NSObject

@property (retain, nonatomic) NSString *carrierName;
@property (retain, nonatomic) NSString *mobileCountryCode;
@property (retain, nonatomic) NSString *mobileNetworkCode;
@property (retain, nonatomic) NSString *isoCountryCode;
@property (nonatomic) BOOL allowsVOIP;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
