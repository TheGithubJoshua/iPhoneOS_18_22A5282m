@class NSString;
@protocol MPCPlayerSeekCommand;

@interface MRUTimeControls : NSObject

@property (nonatomic) struct { double snapshotTime; double startTime; double endTime; double duration; double elapsedDuration; float rate; float defaultRate; BOOL isLiveContent; BOOL isLoading; } durationSnapshot;
@property (retain, nonatomic) id<MPCPlayerSeekCommand> seekCommand;
@property (readonly, nonatomic) double startTime;
@property (nonatomic) double elapsedTime;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) float rate;
@property (readonly, nonatomic) BOOL scrubbable;
@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) BOOL isLive;
@property (readonly, copy, nonatomic) NSString *liveText;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (double)elapsedTimeForDate:(id)a0;
- (id)initWithResponseItem:(id)a0;

@end
