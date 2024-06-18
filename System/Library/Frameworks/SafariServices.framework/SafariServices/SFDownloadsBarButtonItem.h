@class SFDownloadsBarButtonItemView;

@interface SFDownloadsBarButtonItem : UIBarButtonItem {
    SFDownloadsBarButtonItemView *_buttonView;
}

@property (nonatomic) double progress;

- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)setEnabled:(BOOL)a0;
- (void)pulse;

@end
