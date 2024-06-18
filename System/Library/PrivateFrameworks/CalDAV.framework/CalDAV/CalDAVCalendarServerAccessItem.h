@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerAccessItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItemWithNoChildren *accessLevel;

- (id)initWithAccess:(int)a0;
- (id)init;
- (id)copyParseRules;
- (void).cxx_destruct;

@end
