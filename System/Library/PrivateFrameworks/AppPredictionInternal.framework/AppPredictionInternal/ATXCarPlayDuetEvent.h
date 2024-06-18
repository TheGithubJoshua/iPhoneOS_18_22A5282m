@interface ATXCarPlayDuetEvent : ATXDuetEvent <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long carPlayState;

- (id)initWithCoder:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithDKEvent:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)identifier;
- (id)initWithCurrentContextStoreValues;
- (id)initWithCarPlayConnectedState:(long long)a0 startDate:(id)a1 endDate:(id)a2;

@end