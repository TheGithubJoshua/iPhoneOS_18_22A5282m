@interface SBAutoPurgingImageView : UIImageView {
    id /* block */ _block;
}

- (void)setImage:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)initWithImageGenerationBlock:(id /* block */)a0;

@end
