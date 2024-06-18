@class NSDictionary;

@interface _ICQUpgradeFlowSpecification : _ICQFlowSpecification {
    NSDictionary *_serverDict;
}

@property (nonatomic) long long offerType;
@property (nonatomic) BOOL needsWiFi;
@property (readonly, nonatomic) NSDictionary *serverDict;

+ (id)upgradeFlowSpecificationSampleForLevel:(long long)a0;
+ (id)_upgradePageIdentifierForError:(id)a0;
+ (id)sanitizedUpgradeFlowServerDict:(id)a0;

- (id)initWithServerDictionary:(id)a0;
- (id)upgradePageForError:(id)a0;
- (void).cxx_destruct;
- (id)upgradeFailurePageForNetwork;
- (id)upgradeSuccessPageForWiFi;
- (id)upgradeFailurePage;
- (id)upgradePageForSuccess:(BOOL)a0;
- (id)upgradeSuccessPage;

@end
