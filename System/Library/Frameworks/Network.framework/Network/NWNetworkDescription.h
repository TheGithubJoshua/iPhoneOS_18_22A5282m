@class NSString, NSSet, NSURL;

@interface NWNetworkDescription : NSObject

@property long long state;
@property (readonly, nonatomic) NSString *privateDescription;
@property (copy) NSSet *interfaceTypeOptions;
@property (copy) NSSet *ssidOptions;
@property (copy) NSSet *dnsSearchDomainOptions;
@property (copy) NSSet *dnsServerAddressOptions;
@property long long roamingPreference;
@property (copy) NSURL *probeURL;

+ (long long)getNewStateFromPathMatch:(BOOL)a0 oldState:(long long)a1 probeExists:(BOOL)a2;

- (id)descriptionWithIndent:(int)a0 showFullContent:(BOOL)a1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)matchesPath:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)updateStateWithPath:(id)a0;

@end
