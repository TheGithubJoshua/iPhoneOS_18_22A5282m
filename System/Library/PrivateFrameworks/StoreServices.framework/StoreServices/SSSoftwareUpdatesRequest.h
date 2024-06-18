@class SSSoftwareUpdatesContext;
@protocol SSSoftwareUpdatesRequestDelegate;

@interface SSSoftwareUpdatesRequest : SSRequest {
    SSSoftwareUpdatesContext *_context;
}

@property (nonatomic) id<SSSoftwareUpdatesRequestDelegate> delegate;
@property (readonly) SSSoftwareUpdatesContext *updateQueueContext;

- (id)copyXPCEncoding;
- (BOOL)start;
- (void)startWithCompletionBlock:(id /* block */)a0;
- (id)initWithXPCEncoding:(id)a0;
- (void)dealloc;
- (id)initWithUpdateQueueContext:(id)a0;
- (void)startWithUpdatesResponseBlock:(id /* block */)a0;

@end
