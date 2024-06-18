@class NSArray;

@interface AFUpdateAlarmRequest : AFSiriRequest

@property (copy, nonatomic) NSArray *alarms;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)alarm;
- (id)createResponse;

@end
