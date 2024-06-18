@class UIImageView, UILabel, NSMutableArray;

@interface HUHomeHubHeaderView : UITableViewHeaderFooterView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *message;
@property (retain, nonatomic) NSMutableArray *constraints;

- (id)_setupImageView;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;
- (id)_setupConstraints;
- (id)_setupMessage:(id)a0;

@end
