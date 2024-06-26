@class NSString, NSArray, NSError, NSMutableArray;

@interface SCLSettingsSyncContext : NSObject <NSSecureCoding> {
    NSMutableArray *_recoveryHistory;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long syncStatus;
@property (copy, nonatomic) NSString *messageIdentifier;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) NSArray *recoveryHistory;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)addRecoveryHistory:(unsigned long long)a0;
- (void)clearRecoveryHistory;

@end
