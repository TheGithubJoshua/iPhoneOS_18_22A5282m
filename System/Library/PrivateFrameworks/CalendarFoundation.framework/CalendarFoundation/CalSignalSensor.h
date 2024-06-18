@class NSObject;
@protocol OS_dispatch_source;

@interface CalSignalSensor : NSObject {
    NSObject<OS_dispatch_source> *_signalSource;
}

@property (nonatomic) int signal;
@property (copy, nonatomic) id /* block */ fireBlock;

- (id)initWithSignal:(int)a0;
- (void)startSensor;
- (void).cxx_destruct;
- (id)description;
- (void)stopSensor;
- (void)dealloc;
- (void)_shutDownSource;

@end
