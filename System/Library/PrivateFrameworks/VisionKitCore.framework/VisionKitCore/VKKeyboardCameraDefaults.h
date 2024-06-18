@class NSUserDefaults;

@interface VKKeyboardCameraDefaults : NSObject {
    NSUserDefaults *_defaults;
}

@property (class, readonly) VKKeyboardCameraDefaults *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)boolForKey:(id)a0;
- (double)doubleForKey:(id)a0;

@end
