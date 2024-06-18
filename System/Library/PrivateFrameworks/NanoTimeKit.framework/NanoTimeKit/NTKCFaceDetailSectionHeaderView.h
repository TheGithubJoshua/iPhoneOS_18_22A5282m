@class NTKCSeparatorView, NSString, UILabel, UIListContentConfiguration;

@interface NTKCFaceDetailSectionHeaderView : UITableViewHeaderFooterView {
    UILabel *_detailLabel;
    NTKCSeparatorView *_separator;
    UIListContentConfiguration *_configuration;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *groupName;

+ (double)headerHeight;
+ (id)reuseIdentifier;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)a0;
- (void)_fontSizeDidChange;
- (id)_traitCollectionAdjustedIfNeeded;
- (void)_updateConfig;

@end
