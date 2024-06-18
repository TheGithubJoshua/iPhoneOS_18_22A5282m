@class NSSet, NSMutableSet;

@interface CalDAVSupportedCalendarComponentSet : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *comps;
@property (readonly, nonatomic) NSSet *compNames;

- (id)init;
- (id)copyParseRules;
- (void).cxx_destruct;
- (id)description;
- (id)componentsAsString;
- (id)childrenToWrite;
- (void)addComp:(id)a0;

@end
