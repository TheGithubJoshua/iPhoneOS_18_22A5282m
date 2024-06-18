@class FigStateMachine, FigDelegateStorage;

@interface FigCameraViewfinderStream : NSObject {
    FigDelegateStorage *_delegateStorage;
    FigStateMachine *_stateMachine;
    struct OpaqueFigEndpoint { } *_endpoint;
    struct OpaqueFigEndpointStream { } *_stream;
    struct OpaqueFigVirtualDisplaySource { } *_displaySource;
    id _endpointsChangedNotificationToken;
    id _streamsChangedNotificationToken;
}

+ (void)initialize;

- (void)setDelegate:(id)a0 queue:(id)a1;
- (id)init;
- (void)dealloc;
- (void)openWithDestination:(id)a0;
- (int)enqueueVideoSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)close;

@end
