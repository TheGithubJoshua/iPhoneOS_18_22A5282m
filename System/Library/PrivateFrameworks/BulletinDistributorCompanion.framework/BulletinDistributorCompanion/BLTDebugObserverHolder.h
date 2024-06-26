@class NSString, BBObserver;
@protocol BLTDebugObserverWatchKitAppList;

@interface BLTDebugObserverHolder : NSObject <BBObserverDelegate> {
    BBObserver *_observer;
    id<BLTDebugObserverWatchKitAppList> _wkAppList;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startWithWKAppList:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observer:(id)a0 addBulletin:(id)a1 forFeed:(unsigned long long)a2 playLightsAndSirens:(BOOL)a3 withReply:(id /* block */)a4;
- (id)initWithWKAppList:(id)a0;

@end
