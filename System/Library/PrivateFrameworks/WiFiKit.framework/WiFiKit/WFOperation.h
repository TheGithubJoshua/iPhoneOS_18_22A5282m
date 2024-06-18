@class NSError, NSDate;

@interface WFOperation : NSOperation {
    BOOL _finished;
    NSDate *_start;
}

@property (copy, nonatomic) NSError *error;

- (void)finish;
- (BOOL)isReady;
- (void)start;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isFinished;

@end
