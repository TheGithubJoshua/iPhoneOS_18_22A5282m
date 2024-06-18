@interface EmojiPoster.EmojiForegroundGridLayersViewController : UIViewController {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ emojiRenderer;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ layoutProvider;
    void /* unknown type, empty encoding */ numberOfRows;
    void /* unknown type, empty encoding */ numberOfItemsInRow;
    void /* unknown type, empty encoding */ emojiImageViews;
    void /* unknown type, empty encoding */ emojiImages;
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
