@class IMTimer, IDSDaemonResponseHandler;

@interface IDSDaemonRequestContext : NSObject {
    IDSDaemonResponseHandler *_responseHandler;
    id /* block */ _timeoutBlock;
    IMTimer *_systemTimer;
}

- (id)responseHandler;
- (id /* block */)timeoutBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithResponseHandler:(id)a0 timeoutBlock:(id /* block */)a1 systemTimer:(id)a2;
- (id)systemTimer;
- (void)killSystemTimer;

@end
