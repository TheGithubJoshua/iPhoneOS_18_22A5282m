@class NMBUIDownloadProgressView, UIButton;

@interface NMBUIMediaTableCell : PSSwitchTableCell {
    UIButton *_errorButton;
}

@property (retain, nonatomic) NMBUIDownloadProgressView *downloadProgressView;

+ (struct CGSize { double x0; double x1; })artworkSize;
+ (id)_configurationFromSpecifier:(id)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_setDownloadState:(id)a0;
- (id)_errorButtonWithSpecifier:(id)a0;
- (void)_handleDownloadIndicatorTapGesture:(id)a0;
- (BOOL)_shouldDisplayDownloadProgressViewForDownloadState:(id)a0;

@end
