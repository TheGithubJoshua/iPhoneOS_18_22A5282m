@class NSString, NSDate;

@interface WiFiUsageLQMRelatedTrigger : NSObject

@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSString *trigger;
@property (retain, nonatomic) NSString *reason;

- (id)initWithTrigger:(id)a0 andReason:(id)a1 andTimestamp:(id)a2;
- (void).cxx_destruct;
- (id)description;

@end
