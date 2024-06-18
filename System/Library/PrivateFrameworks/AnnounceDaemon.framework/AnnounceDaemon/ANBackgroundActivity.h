@class NSBackgroundActivityScheduler;

@interface ANBackgroundActivity : NSObject <ANBackgroundActivityProtocol>

@property (readonly, nonatomic) NSBackgroundActivityScheduler *backgroundActivity;

- (BOOL)shouldDefer;
- (id)init;
- (void)scheduleWithBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
