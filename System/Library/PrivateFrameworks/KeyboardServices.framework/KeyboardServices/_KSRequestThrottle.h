@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface _KSRequestThrottle : NSObject {
    id /* block */ _curveFunction;
    double _maximum;
    id /* block */ _request;
    int _retryCount;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) NSString *debugIdentifier;

- (id)init;
- (void)postRequest:(id /* block */)a0;
- (id)initWithCurve:(id /* block */)a0 maximumDelay:(double)a1;
- (void).cxx_destruct;
- (void)_launch;

@end
