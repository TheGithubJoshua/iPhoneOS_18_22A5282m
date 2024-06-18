@class NSString;

@interface FeedbackCore.FBKTopicCell : UITableViewCell <FBKDiffableCell> {
    void /* unknown type, empty encoding */ itemIdentifier;
}

@property (class, nonatomic, readonly) NSString *reuseIdentifier;

@property (nonatomic, copy) NSString *itemIdentifier;
@property (nonatomic, weak) void /* unknown type, empty encoding */ topicToBottomOfView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ formDescriptions;
@property (nonatomic, weak) void /* unknown type, empty encoding */ formName;
@property (nonatomic, retain) void /* unknown type, empty encoding */ formStub;
@property (nonatomic) void /* unknown type, empty encoding */ disclosesMoreForms;

- (id)initWithCoder:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;

@end