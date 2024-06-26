@class EKAlarm;

@interface EKUIAlarm : NSObject

@property (readonly, nonatomic) BOOL isLeaveNowAlarm;
@property (readonly, nonatomic) BOOL isDefaultAlarm;
@property (readonly, nonatomic) EKAlarm *alarm;

- (void).cxx_destruct;
- (id)description;
- (id)initWithAlarm:(id)a0;
- (id)initDefaultAlarm;
- (id)initLeaveNowAlarm;
- (BOOL)isEqualToUIAlarm:(id)a0;
- (id)localizedDescriptionAllDay:(BOOL)a0;

@end
