@class NSOperationQueue;

@interface CSLPRFPerApplicationSettingsPSSpecifierFactory : NSObject {
    NSOperationQueue *_localIconLoadingQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)specifierForSettings:(id)a0 set:(SEL)a1 get:(SEL)a2;
- (void)updateSpecifier:(id)a0 withSettings:(id)a1;

@end
