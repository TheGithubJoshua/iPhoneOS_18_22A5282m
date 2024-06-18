@class CoreDAVHrefItem, CoreDAVLeafItem, CoreDAVItemWithNoChildren, NSString, NSURL, CoreDAVItemWithHrefChildItem;

@interface CalDAVCalendarServerInviteReplyItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVHrefItem *href;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *inviteStatus;
@property (retain, nonatomic) CoreDAVItemWithHrefChildItem *hostURL;
@property (retain, nonatomic) CoreDAVLeafItem *inReplyTo;
@property (retain, nonatomic) CoreDAVLeafItem *summary;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSURL *acceptedURL;

- (id)init;
- (id)copyParseRules;
- (void).cxx_destruct;
- (void)setAcceptedURLItem:(id)a0;
- (void)setFirstNameItem:(id)a0;
- (void)setLastNameItem:(id)a0;

@end