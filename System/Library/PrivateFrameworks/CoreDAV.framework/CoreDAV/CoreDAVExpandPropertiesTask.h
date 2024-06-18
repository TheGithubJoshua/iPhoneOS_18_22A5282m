@class NSMutableSet;

@interface CoreDAVExpandPropertiesTask : CoreDAVPropertyFindBaseTask

@property (retain, nonatomic) NSMutableSet *propertiesToExpand;

- (id)parseHints;
- (id)httpMethod;
- (void)addPropertyToExpandWithPropertiesToFind:(id)a0 expandedName:(id)a1 expandedNameSpace:(id)a2;
- (id)requestBody;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPropertiesToFind:(id)a0 atURL:(id)a1 expandedName:(id)a2 expandedNameSpace:(id)a3;
- (void)finishCoreDAVTaskWithError:(id)a0;

@end
