@class CNAvatarView;

@interface CNContactCardFieldPickerPhotoCell : UITableViewCell

@property (retain, nonatomic) CNAvatarView *avatarView;

- (id)init;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareCellWithContact:(id)a0;
- (void)setConfiguration;

@end
