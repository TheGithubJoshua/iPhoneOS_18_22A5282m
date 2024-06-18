@class CDPContext;

@interface CDPRecoveryFlowContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CDPContext *context;
@property (nonatomic) BOOL hasPeersForRemoteApproval;
@property (nonatomic) BOOL isWalrusEnabled;
@property (nonatomic) double rpdProbationDuration;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
