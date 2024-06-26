@class NSURL, NSString;

@interface AAUIAccountRecoveryManagementContext : NSObject

@property (nonatomic) BOOL recoveryKeyEligible;
@property (nonatomic) BOOL recoveryKeyIsOn;
@property (retain, nonatomic) NSURL *recoveryKeyURL;
@property (copy, nonatomic) NSString *recoveryKeyHTTPMethod;
@property (nonatomic) BOOL icloudDataRecoveryShouldShowRow;
@property (retain, nonatomic) NSURL *icloudDataRecoveryDetailsURL;
@property (copy, nonatomic) NSString *icloudDataRecoveryDetailsHTTPMethod;
@property (retain, nonatomic) NSURL *icloudDataRecoveryReAddURL;
@property (copy, nonatomic) NSString *icloudDataRecoveryReAddHTTPMethod;
@property (copy, nonatomic) NSString *icloudDataRecoveryRowLabel;
@property (retain, nonatomic) NSURL *learnMoreURL;

- (void).cxx_destruct;
- (id)description;

@end
