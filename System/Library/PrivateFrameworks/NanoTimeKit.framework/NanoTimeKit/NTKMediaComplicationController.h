@class NSString, MPRequestResponseController;
@protocol NTKMediaComplicationControllerDelegate;

@interface NTKMediaComplicationController : NSObject <MPRequestResponseControllerDelegate> {
    MPRequestResponseController *_requestResponseController;
}

@property (weak, nonatomic) id<NTKMediaComplicationControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pause;
- (void).cxx_destruct;
- (void)resume;
- (void)controller:(id)a0 defersResponseReplacement:(id /* block */)a1;
- (void)_handleRoutingControllerActiveSystemRouteDidChange:(id)a0;
- (void)_updateActiveRoute;
- (id)launchURLWithScheme:(id)a0;

@end