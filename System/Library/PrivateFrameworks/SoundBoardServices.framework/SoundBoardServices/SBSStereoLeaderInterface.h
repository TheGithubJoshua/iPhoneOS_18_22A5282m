@class NSXPCConnection;
@protocol SBSImplementer;

@interface SBSStereoLeaderInterface : NSObject {
    NSXPCConnection *_sbConnection;
    id<SBSImplementer> _sbProxy;
}

- (id)init;
- (id)initWithTarget:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)isFollower:(id /* block */)a0;
- (void)setDeviceAsStereoLeader:(BOOL)a0 withOptions:(id)a1;

@end
