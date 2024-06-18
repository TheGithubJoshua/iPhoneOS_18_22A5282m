@class NSString;

@interface WFToggleAlarmContextualAction : WFContextualAction

@property (readonly, copy, nonatomic) NSString *alarmIdentifier;
@property (readonly, copy, nonatomic) NSString *alarmName;
@property (readonly, nonatomic) unsigned long long operation;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)uniqueIdentifier;
- (id)initWithAlarmIdentifier:(id)a0 alarmName:(id)a1 operation:(unsigned long long)a2;
- (BOOL)showsUserInterfaceWhenRunning;

@end
