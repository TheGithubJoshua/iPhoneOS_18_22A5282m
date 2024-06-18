@class NSXPCConnection;
@protocol SBSProfilesImplementer;

@interface SBSProfiles : NSObject {
    NSXPCConnection *_sbConnection;
    id<SBSProfilesImplementer> _sbProxy;
}

- (id)init;
- (id)initWithTarget:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)installProfileData:(id)a0 completion:(id /* block */)a1;
- (void)getInstalledProfiles:(id /* block */)a0;
- (void)removeProfileByIdentifier:(id)a0 completion:(id /* block */)a1;

@end
