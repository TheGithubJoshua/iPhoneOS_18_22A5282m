@class UILabel, UIImageView, UIActivityIndicatorView;

@interface EKUIConferenceRoomSearchResultCell : UITableViewCell {
    UILabel *_title;
    UIImageView *_image;
    UIActivityIndicatorView *_spinner;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)safeAreaInsetsDidChange;
- (void).cxx_destruct;
- (id)description;
- (void)reloadWithConferenceRoom:(id)a0;
- (void)updateSeparatorInset;

@end
