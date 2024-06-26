@class NSString;

@interface COAlarmSnoozeRequest : COMeshRequest

@property (readonly, copy, nonatomic) NSString *identifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAlarmIdentifier:(id)a0;

@end
