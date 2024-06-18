@class NSMutableSet;

@interface CalDAVCalendarServerChangesItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *changedProperties;

- (id)init;
- (id)copyParseRules;
- (void).cxx_destruct;
- (id)initWithNameSpace:(id)a0 andName:(id)a1;
- (void)addChangedProperty:(id)a0;

@end
