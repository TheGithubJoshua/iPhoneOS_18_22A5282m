@protocol FCTagProviding, FCPaidAccessCheckerType;

@interface FCSingleTagFeedDescriptor : FCFeedDescriptor {
    long long _feedType;
    long long _feedSortMethod;
    long long _feedFilterOptions;
    long long _feedPersonalizationConfigurationSet;
    unsigned long long _feedConfiguration;
}

@property (copy, nonatomic) id<FCTagProviding> tag;
@property (readonly, copy, nonatomic) id<FCTagProviding> masterTag;
@property (retain, nonatomic) id<FCPaidAccessCheckerType> paidAccessChecker;

- (BOOL)isSubscribable;
- (id)iAdKeywords;
- (id)iAdCategories;
- (long long)feedType;
- (id)theme;
- (BOOL)hideAccessoryText;
- (id)initWithIdentifier:(id)a0;
- (unsigned long long)feedConfiguration;
- (id)name;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (long long)feedPersonalizationConfigurationSet;
- (id)backingChannel;
- (id)backingChannelID;
- (id)backingSectionID;
- (id)backingTag;
- (id)backingTopicID;
- (long long)feedFilterOptions;
- (long long)feedSortMethod;
- (BOOL)hasNotificationsEnabledWithSubscriptionController:(id)a0;
- (long long)iAdContentProvider;
- (id)iAdFeedID;
- (id)iAdPrimaryAudience;
- (id)iAdSectionID;
- (id)initWithContext:(id)a0 tag:(id)a1 paidAccessChecker:(id)a2 feedConfiguration:(unsigned long long)a3;
- (id)initWithContext:(id)a0 tag:(id)a1 sortMethod:(long long)a2 filterOptions:(long long)a3 personalizationConfigurationSet:(long long)a4 paidAccessChecker:(id)a5 feedConfiguration:(unsigned long long)a6;
- (BOOL)isSubscribedToWithSubscriptionController:(id)a0;

@end
