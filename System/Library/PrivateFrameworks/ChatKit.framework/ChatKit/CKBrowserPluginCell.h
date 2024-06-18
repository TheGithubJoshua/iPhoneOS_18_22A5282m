@class UIImageView, IMBalloonPlugin;

@interface CKBrowserPluginCell : CKBrowserCell {
    UIImageView *_selectionOutline;
}

@property (retain, nonatomic) IMBalloonPlugin *plugin;
@property (retain, nonatomic) UIImageView *browserImage;

+ (id)reuseIdentifier;

- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (id)iconView;
- (void)layoutSubviews;
- (void)_setImageForPlugin:(id)a0;
- (void)_updateShinyStatus;
- (void)setPlugin:(id)a0 hideShinyStatus:(BOOL)a1;

@end
