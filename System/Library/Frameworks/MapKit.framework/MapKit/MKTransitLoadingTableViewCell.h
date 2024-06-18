@class _MKUILabel, UIActivityIndicatorView;

@interface MKTransitLoadingTableViewCell : MKCustomSeparatorCell {
    _MKUILabel *_loadingLabel;
    UIActivityIndicatorView *_loadingIndicator;
}

- (void)startAnimating;
- (void)stopAnimating;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)a0;

@end
