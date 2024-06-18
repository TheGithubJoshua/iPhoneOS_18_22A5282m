@class NSPointerArray, UIViewController;
@protocol PHAirPlayControllerContentProvider;

@interface PUAirPlayContentRegistry : NSObject

@property (retain, nonatomic, setter=_setContentProviders:) NSPointerArray *_contentProviders;
@property (retain, nonatomic, setter=_setCachedCurrentContent:) UIViewController *_cachedCurrentContent;
@property (nonatomic, setter=_setCurrentContentProvider:) id<PHAirPlayControllerContentProvider> currentContentProvider;

- (id)init;
- (unsigned long long)_indexOfContentProvider:(id)a0;
- (void)_updateCurrentContentProvider;
- (void)_invalidateCurrentContent;
- (void)clearContent;
- (void).cxx_destruct;
- (void)removeContentProvider:(id)a0;
- (id)contentForController:(id)a0;
- (void)addContentProvider:(id)a0;

@end
