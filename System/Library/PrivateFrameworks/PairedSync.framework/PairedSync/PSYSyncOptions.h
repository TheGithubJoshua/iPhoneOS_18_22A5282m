@class PSYTestInput, NSUUID;

@interface PSYSyncOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL dryRun;
@property (nonatomic) BOOL terminateDuringDryRun;
@property (retain, nonatomic) PSYTestInput *testInput;
@property (retain, nonatomic) NSUUID *pairingIdentifier;
@property (retain, nonatomic) NSUUID *sessionIdentifier;
@property (nonatomic) unsigned long long syncSessionType;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
