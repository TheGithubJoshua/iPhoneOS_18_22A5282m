@class NSString, PKAccount, PKAccountSupportTopic;

@interface PKBusinessChatAccountContext : NSObject <PKBusinessChatContext> {
    PKAccount *_account;
    PKAccountSupportTopic *_topic;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bodyText;
- (void).cxx_destruct;
- (BOOL)requiresAuthorization;
- (id)groupParameters;
- (id)businessIdentifier;
- (id)initWithAccount:(id)a0 topic:(id)a1;
- (id)intentParameters;

@end
