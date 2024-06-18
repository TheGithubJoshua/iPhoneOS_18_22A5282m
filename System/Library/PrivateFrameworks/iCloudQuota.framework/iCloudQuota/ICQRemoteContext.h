@class ICQLink, ICQOffer, NSData;

@interface ICQRemoteContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ICQOffer *offer;
@property (readonly, nonatomic) ICQLink *link;
@property (readonly, nonatomic) NSData *flowOptionsData;
@property (readonly, nonatomic) NSData *preloadedRemoteUIData;

+ (id)contextFromDictionary:(id)a0;
+ (id)ICQContextFromRemoteAlertContext:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)_serializedData;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithOffer:(id)a0 link:(id)a1 flowOptionsData:(id)a2 preloadedRemoteUIData:(id)a3;

@end
