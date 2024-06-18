@class UIImageView, UIView;

@interface _UIBarBackgroundImageView : UIImageView {
    UIView *_topStripView;
    UIImageView *_customImageContainer;
}

@property (nonatomic, getter=isTranslucent) BOOL translucent;

- (void)removeTopStripView;
- (id)image;
- (void)updateTopStripViewCreateIfNecessary;
- (void)setImage:(id)a0;
- (id)topStripView;
- (void).cxx_destruct;

@end
