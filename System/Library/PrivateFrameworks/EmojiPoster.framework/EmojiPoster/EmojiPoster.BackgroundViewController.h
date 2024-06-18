@interface EmojiPoster.BackgroundViewController : UIViewController {
    void /* unknown type, empty encoding */ usesDimmingLayer;
    void /* unknown type, empty encoding */ backgroundConfiguration;
    void /* unknown type, empty encoding */ backgroundIndex;
    void /* unknown type, empty encoding */ dimmingLayer;
    void /* unknown type, empty encoding */ wakeProgress;
    void /* unknown type, empty encoding */ unlockProgress;
}

- (id)initWithCoder:(id)a0;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;

@end
