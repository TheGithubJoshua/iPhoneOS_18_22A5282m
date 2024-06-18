@interface ATXMotionStateDuetEvent : ATXDuetEvent

@property (readonly, nonatomic) long long motionState;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithDKEvent:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)identifier;
- (id)initWithCurrentContextStoreValues;
- (id)initWithMotionState:(long long)a0 startDate:(id)a1 endDate:(id)a2;

@end
