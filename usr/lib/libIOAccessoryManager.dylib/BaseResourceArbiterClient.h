@protocol ResourceArbiterClientDelegate;

@interface BaseResourceArbiterClient : NSObject

@property (weak, nonatomic) id<ResourceArbiterClientDelegate> delegate;

- (BOOL)asynchRequestResourceAccess:(BOOL)a0;
- (void).cxx_destruct;
- (void)releaseResourceAccess;
- (BOOL)synchRequestResourceAccess;

@end
