@class NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface MPStoreLyricsMusicKitRequestOperation : MPAsyncOperation {
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property (nonatomic) long long songAdamID;
@property (copy, nonatomic) id /* block */ responseHandler;

+ (id)_lyricsURLForURLBag:(id)a0 identifier:(long long)a1;
+ (BOOL)supportsLyricsForURLBag:(id)a0;

- (id)init;
- (void)cancel;
- (void)execute;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (void)_enqueueOperationWithURL:(id)a0;

@end
