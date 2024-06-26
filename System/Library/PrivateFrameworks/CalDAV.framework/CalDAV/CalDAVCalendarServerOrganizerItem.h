@class CoreDAVLeafItem, CoreDAVHrefItem;

@interface CalDAVCalendarServerOrganizerItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVHrefItem *href;
@property (retain, nonatomic) CoreDAVLeafItem *commonName;

- (id)init;
- (id)copyParseRules;
- (void).cxx_destruct;

@end
