@class NARApplicationWorkspace;
@protocol CSLPRFNanoAppRegistryApplicationSourceDelegate;

@interface CSLPRFNanoAppRegistryApplicationSource : NSObject {
    NARApplicationWorkspace *_workspace;
}

@property (weak, nonatomic) id<CSLPRFNanoAppRegistryApplicationSourceDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_appsDidChange;
- (void)allApplicationsWithCompletion:(id /* block */)a0;

@end
