@class GEOMapRequestManager;

@interface GEOMapRequest : NSObject {
    GEOMapRequestManager *_requestManager;
}

@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ cancellationHandler;
@property (readonly, nonatomic) BOOL isFinished;

- (id)initWithManager:(id)a0;
- (void)cancel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)complete;
- (void)_finishAndCallHandler:(id /* block */)a0;

@end
