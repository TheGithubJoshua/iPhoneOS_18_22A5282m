@class NSCache, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SFUIImageProvider : NSObject {
    int _nextRequestID;
}

@property (readonly, nonatomic) NSCache *imageCache;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue;
@property (readonly, nonatomic) NSMutableDictionary *requestsForIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *requestsForRequestID;

- (id)init;
- (int)nextRequestID;
- (void).cxx_destruct;
- (void)cancelImageRequest:(int)a0;
- (void)deliverImage:(id)a0 identifier:(id)a1 placeholder:(BOOL)a2 error:(id)a3;
- (void)scheduleImageRequest:(id)a0;

@end
