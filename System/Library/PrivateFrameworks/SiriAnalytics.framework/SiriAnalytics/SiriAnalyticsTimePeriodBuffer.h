@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SiriAnalyticsTimePeriodBuffer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_bufferTimer;
    double _bufferInterval;
    double _leeway;
    NSMutableSet *_bufferedMessages;
    id /* block */ _onMessagesProduced;
}

- (void)onMessagesProduced:(id /* block */)a0;
- (void)_stopProducing;
- (void).cxx_destruct;
- (id)initWithInterval:(double)a0 queue:(id)a1;
- (void)_timerElapsed;
- (void)_startProducing;
- (void)enqueueMessages:(id)a0;

@end
