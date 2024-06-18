@class NSDate;

@interface WPDStat : NSObject

@property double currentTime;
@property (retain) NSDate *lastTime;

- (id)init;
- (void)stopTime;
- (void)startTime;
- (void).cxx_destruct;
- (void)calculateTimeUpdate;

@end
