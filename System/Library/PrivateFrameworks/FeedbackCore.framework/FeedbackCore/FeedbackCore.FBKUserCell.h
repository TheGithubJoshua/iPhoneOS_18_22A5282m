@class NSString;

@interface FeedbackCore.FBKUserCell : UITableViewCell <FBKDiffableCell> {
    void /* unknown type, empty encoding */ itemIdentifier;
}

@property (nonatomic, copy) NSString *itemIdentifier;

- (id)initWithCoder:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)updateWithUser:(id)a0;

@end
