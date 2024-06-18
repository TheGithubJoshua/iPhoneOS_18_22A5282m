@class NSString;

@interface FeedbackCore.FBKModalQuestionCell : UITableViewCell <FBKDiffableCell> {
    void /* unknown type, empty encoding */ itemIdentifier;
}

@property (class, nonatomic, copy) NSString *reuseIdentifier;

@property (nonatomic, retain) void /* unknown type, empty encoding */ question;
@property (nonatomic, copy) NSString *itemIdentifier;

- (id)initWithCoder:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;

@end
