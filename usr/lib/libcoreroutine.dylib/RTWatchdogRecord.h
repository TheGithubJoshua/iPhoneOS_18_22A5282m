@class NSDate;
@protocol RTWatchdogProtocol;

@interface RTWatchdogRecord : NSObject

@property (weak, nonatomic) id<RTWatchdogProtocol> object;
@property (retain, nonatomic) NSDate *checkInStartDate;
@property (retain, nonatomic) NSDate *checkInStopDate;
@property (readonly, nonatomic) double timeout;

- (id)init;
- (BOOL)isPendingCheckIn;
- (double)getLatency;
- (void).cxx_destruct;
- (id)description;
- (id)initWithObject:(id)a0 timeout:(double)a1;

@end
