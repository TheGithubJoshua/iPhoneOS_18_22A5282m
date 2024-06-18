@class NSString;

@interface WBSTrackingCapableFirstParty : NSObject

@property (readonly, copy, nonatomic) NSString *domain;

- (id)init;
- (id)initWithDomain:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
