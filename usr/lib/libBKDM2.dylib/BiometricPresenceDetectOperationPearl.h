@class NSTimer;

@interface BiometricPresenceDetectOperationPearl : BiometricPresenceDetectOperation

@property (nonatomic) BOOL continuous;
@property (nonatomic) unsigned long long endTime;
@property (nonatomic) BOOL highPriority;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL checked;
@property (nonatomic) BOOL timeouted;
@property (nonatomic) BOOL finished;

- (unsigned int)taskResumeFailedMessage;
- (unsigned int)cancelledMessage;
- (unsigned int)taskResumedMessage;
- (unsigned int)taskPausedMessage;
- (void).cxx_destruct;
- (void)dealloc;

@end
